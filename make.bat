@echo off
setlocal ENABLEDELAYEDEXPANSION

set SOA_PKGS=package 

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
if "%args%" == "" 			call :targets & goto :eof
if "%args%" == "all"		call :targets & goto :eof
if "%args%" == "clean"		call :clean & goto :eof
if "%args%" == "dist_clean"	call :dist_clean & goto :eof
call :targets %args% & goto :eof
::::::::::::args to function:::::::::

::build
:targets
if "%~1"=="" (set targets_temp=%SOA_PKGS%) else (set targets_temp=%args%)
:loop_targets
for /f "tokens=1*" %%a in ("%targets_temp%") do (
	if not exist %%a ( echo [%%a] doesn't exist, please check %curdir% && goto :eof)
	
	cd %%a & call make.bat & cd %curdir%
	set targets_temp=%%b
)
if defined targets_temp goto :loop_targets
goto :eof

::clean
:clean
set clean_temp=%SOA_PKGS%
:loop_clean
for /f "tokens=1*" %%a in ("%clean_temp%") do (
	cd %%a & call make.bat clean & cd %curdir%
	set clean_temp=%%b
)
if defined clean_temp goto :loop_clean
goto :eof

::clean dist
:dist_clean
if exist "%SOA_DIST_DIR%" (
	echo del [%SOA_DIST_DIR%]
	rd /s /q "%SOA_DIST_DIR%"
)
goto :eof
