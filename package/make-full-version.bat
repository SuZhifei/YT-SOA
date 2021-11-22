@echo off
setlocal ENABLEDELAYEDEXPANSION

::soa-doc soa-env soa-3rdparty soa-lib-core 
set SOA_PKGS=soa-com soa-3rdparty soa-lib-core soa-env

if "%SOA_ROOT%" == "" echo please source env.sh	& pause & goto :eof

set curdir=%~dp0
::::::::::::args to function:::::::::
set args=%1 %2 %3 %4 %5 %6 %7 %8 %9
::trim right
:delright
if "%args:~-1%"==" " (
	set args=%args:~0,-1%
	goto delright
)
set clean_flag=%args:~0,6%
set clean_target=%args:~6,20%
if "%args%" == "" 			call :targets & goto :eof
if "%args%" == "all"		call :targets & goto :eof
if "%args%" == "clean"		call :clean & goto :eof
if "%clean_flag%" == "clean_" call :clean_one %clean_target% & goto :eof

call :targets %args% & goto :eof
::::::::::::args to function:::::::::

::build
:targets
if "%~1"=="" (set targets_temp=%SOA_PKGS%) else (set targets_temp=%args%)
:loop_targets
for /f "tokens=1*" %%a in ("%targets_temp%") do (

	::check if package is in SOA_PKGS
	echo %SOA_PKGS% | findstr "%%a">nul
	if not !errorlevel! == 0 ( echo [%%a] is not a supported package of [%SOA_PKGS%] & goto :end)

	set target=%%a
	if not exist !target! (git clone %SOA_REPO_DOMAIN_PREFIX%/!target!.git -b %SOA_BASELINE%)
	::check depends and build depends
	call :build_depends !target!
	
	set build_dir=!target!\%SOA_BUILD_DIR%
	if not exist "!build_dir!" md "!build_dir!"

	cd !build_dir! & %SOA_CMAKE% ../..
	if exist INSTALL.vcxproj (
		@%SOA_COMPILER_EXE% INSTALL.vcxproj /p:Configuration="debug" /p:platform=win32
		@%SOA_COMPILER_EXE% INSTALL.vcxproj /p:Configuration="release" /p:platform=win32
	) else ( if exist ALL_BUILD.vcxproj (
		@%SOA_COMPILER_EXE% ALL_BUILD.vcxproj /p:Configuration="debug" /p:platform=win32
		@%SOA_COMPILER_EXE% ALL_BUILD.vcxproj /p:Configuration="release" /p:platform=win32
		) else (
			echo [!target!] can't find vs project, maybe CMAKE gen fail, please check [!target!]'s CmakeLists.txt..."
		)
	)
	set targets_temp=%%b
	cd %curdir%
)
if defined targets_temp goto :loop_targets
goto :eof

:build_depends
cd "%1%"
if not exist BuildSystem.Depends (cd %curdir% & goto :eof)
for /f "delims=" %%i in (BuildSystem.Depends) do (
	cd %curdir%
	if not exist %%i (git clone %SOA_REPO_DOMAIN_PREFIX%/%%i.git -b %SOA_BASELINE%)
	
	set build_dir=%%i\%SOA_BUILD_DIR%
	if not exist "!build_dir!" md "!build_dir!"

	cd !build_dir! & %SOA_CMAKE% ../..
	if exist INSTALL.vcxproj (
		@%SOA_COMPILER_EXE% INSTALL.vcxproj /p:Configuration="debug" /p:platform=win32
		@%SOA_COMPILER_EXE% INSTALL.vcxproj /p:Configuration="release" /p:platform=win32
	) else ( if exist ALL_BUILD.vcxproj (
		@%SOA_COMPILER_EXE% ALL_BUILD.vcxproj /p:Configuration="debug" /p:platform=win32
		@%SOA_COMPILER_EXE% ALL_BUILD.vcxproj /p:Configuration="release" /p:platform=win32
		) else (
			echo [%%i] can't find vs project, maybe CMAKE gen fail, please check [%%i]'s CmakeLists.txt..."
		)
	)
	cd %curdir%
)
cd %curdir%
goto :eof

::clean
:clean
set clean_temp=%SOA_PKGS%
:loop_clean
for /f "tokens=1*" %%a in ("%clean_temp%") do (
	echo del [%%a\%SOA_BUILD_DIR%]
	if exist "%%a\%SOA_BUILD_DIR%" ( rd /s /q "%%a\%SOA_BUILD_DIR%" )
	cd %curdir%
	set clean_temp=%%b
)
if defined clean_temp goto :loop_clean
goto :eof

::clean one
:clean_one
echo del [%1\%SOA_BUILD_DIR%]
if exist "%1\%SOA_BUILD_DIR%" (
	rd /s /q "%1\%SOA_BUILD_DIR%" 
)
goto :eof

:end


cd !build_dir! & %SOA_CMAKE% ../..

if exist INSTALL.vcxproj (
	@%SOA_COMPILER_EXE% INSTALL.vcxproj /p:Configuration="debug" /p:platform=win32
) else ( if exist ALL_BUILD.vcxproj (
	@%SOA_COMPILER_EXE% ALL_BUILD.vcxproj /p:Configuration="debug" /p:platform=win32
	) else (
		echo [!target!] can't find vs project, maybe CMAKE gen fail, please check [!target!]'s CmakeLists.txt..."
	)
)
cd %curdir%

echo %curdir%