@echo off
set SOA_BASELINE=1.0
set SOA_HOST=win32
set SOA_TARGET=win32
set SOA_ROOT=%~dp0
set SOA_ROOT=%SOA_ROOT:~0,-1%
set SOA_TOOL_DIR=%SOA_ROOT%\tool\%SOA_HOST%
set SOA_CONF_DIR=%SOA_ROOT%\conf
set SOA_DIST_DIR=%SOA_ROOT%\dist
set SOA_PACKAGE_DIR=%SOA_ROOT%\package
set SOA_COMPILER_VERSION=16.0
set SOA_SYSTEM_SDK_PATH="D:\Program Files (x86)\Microsoft Visual Studio"
set SOA_COMPILER_EXE="D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\msbuild.exe"
if not exist %SOA_COMPILER_EXE%	(echo can't find VC compiler [%SOA_COMPILER_EXE%], check your Visual Studio install path & goto :eof)
set SOA_CMAKE_EXE=cmake
set CAPI_CORE_GEN=%SOA_TOOL_DIR%\commonapi-generator\commonapi-generator-windows-x86_64.exe
set CAPI_DBUS_GEN=%SOA_TOOL_DIR%\commonapi_dbus_generator\commonapi-dbus-generator-windows-x86_64.exe
set CAPI_SOMEIP_GEN=%SOA_TOOL_DIR%\commonapi_someip_generator\commonapi-someip-generator-windows-x86_64.exe
set SOA_BUILD_DIR=build\%SOA_TARGET%
set SOA_INSTALL_DIR=%SOA_DIST_DIR%\%SOA_TARGET%\SOA
set SOA_CMAKE="%SOA_CMAKE_EXE%" -A Win32 ^
-DCMAKE_INSTALL_PREFIX:PATH=%SOA_INSTALL_DIR% ^
-DCMAKE_INSTALL_BINDIR:PATH=%SOA_INSTALL_DIR%\bin ^
-DCMAKE_INSTALL_ETCDIR:PATH=%SOA_INSTALL_DIR%\etc ^
-DCMAKE_INSTALL_LIBDIR:PATH=%SOA_INSTALL_DIR%\lib ^
-DCMAKE_INSTALL_INCLUDEDIR:PATH=%SOA_INSTALL_DIR%\include ^
-DCMAKE_INSTALL_DOCDIR:PATH=%SOA_INSTALL_DIR%\doc ^
-DCMAKE_INSTALL_TEMPDIR:PATH=%SOA_INSTALL_DIR%\temp ^
-DCMAKE_INSTALL_SHAREDIR:PATH=%SOA_INSTALL_DIR%\share ^
-DCMAKE_INSTALL_RESOURCEDIR:PATH=%SOA_INSTALL_DIR%\resource ^
-DCMAKE_INSTALL_EXAMPLEDIR:PATH=%SOA_INSTALL_DIR%\example ^
-Wno-dev -G "Visual Studio 16 2019"

::call %SOA_CONF_DIR%\%SOA_TARGET%.bat %1 %2

echo --------------------------- Development Environment ---------------------------
echo   SOA Root      	: %SOA_ROOT%
echo   SOA Baseline		: %SOA_BASELINE%
echo   Build Target		: %SOA_TARGET%
echo   System SDK		: %SOA_SYSTEM_SDK_PATH:~1,-1%
echo   Compiler Exe		: %SOA_COMPILER_EXE:~1,-1%
echo   Compiler Version	: %SOA_COMPILER_VERSION%
echo   Install Path		: %SOA_INSTALL_DIR%
echo -------------------------------------------------------------------------------
