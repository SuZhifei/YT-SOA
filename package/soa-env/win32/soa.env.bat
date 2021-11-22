@echo off

::soa path
::set SOA_HOME_PATH=%~dp0
set SOA_HOME_PATH=D:\Work\ZZYT\YT-SOA\dist\win32\SOA
set SOA_LIB_PATH=%SOA_HOME_PATH%\lib
set SOA_BIN_PATH=%SOA_HOME_PATH%\bin
set SOA_ETC_PATH=%SOA_HOME_PATH%\etc
set SOA_DATA_PATH=%SOA_HOME_PATH%\data
set SOA_RES_PATH=%SOA_HOME_PATH%\resource
set SOA_SHARE_PATH=%SOA_HOME_PATH%\share
set SOA_TEMP_PATH=%SOA_HOME_PATH%\temp

::someip
set COMMONAPI_CONFIG=%SOA_ETC_PATH%\commonapi.ini
::set VSOMEIP_CONFIGURATION=%SOA_ETC_PATH%\vsomeip-dataservice.json

set PATH=%PATH%;%SOA_LIB_PATH%\debug;%SOA_BIN_PATH%\debug