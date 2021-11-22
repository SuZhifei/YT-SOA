# Install script for directory: D:/Work/ZZYT/YT-SOA/package/soa-3rdparty

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/Work/ZZYT/YT-SOA/dist/win32/SOA")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/include/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/include" TYPE DIRECTORY FILES "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/etc/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/etc" TYPE DIRECTORY FILES "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/etc/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug" TYPE DIRECTORY FILES "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/lib/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release" TYPE DIRECTORY FILES "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/lib/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/CommonAPI-SomeIP.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/CommonAPI.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoDataODBCd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoDataSQLited.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoDatad.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoEncodingsd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoFoundationd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoJSONd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoMongoDBd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoNetd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoRedisd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoUtild.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoXMLd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/PocoZipd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/concrt140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/msvcp140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/vcruntime140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/vsomeip-cfg.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/vsomeip-sd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug/vsomeip.dll")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/debug" TYPE FILE FILES
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/CommonAPI-SomeIP.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/CommonAPI.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDataODBCd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDataSQLited.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDatad.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoEncodingsd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoFoundationd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoJSONd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoMongoDBd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoNetd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoRedisd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoUtild.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoXMLd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoZipd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/concrt140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/msvcp140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vcruntime140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vsomeip-cfg.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vsomeip-sd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vsomeip.dll"
      )
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/CommonAPI-SomeIP.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/CommonAPI.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoData.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoDataODBC.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoDataSQLite.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoEncodings.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoFoundation.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoJSON.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoMongoDB.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoNet.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoRedis.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoUtil.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoXML.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/PocoZip.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/concrt140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/msvcp140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/vcruntime140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/vsomeip-cfg.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/vsomeip-sd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release/vsomeip.dll")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/lib/release" TYPE FILE FILES
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/CommonAPI-SomeIP.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/CommonAPI.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoData.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoDataODBC.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoDataSQLite.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoEncodings.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoFoundation.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoJSON.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoMongoDB.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoNet.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoRedis.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoUtil.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoXML.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoZip.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/concrt140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/msvcp140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vcruntime140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vsomeip-cfg.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vsomeip-sd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vsomeip.dll"
      )
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/CommonAPI-SomeIP.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/CommonAPI.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoDataODBCd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoDataODBCd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoDataSQLited.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoDataSQLited.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoDatad.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoDatad.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoEncodingsd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoEncodingsd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoFoundationd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoFoundationd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoJSONd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoJSONd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoMongoDBd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoMongoDBd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoNetd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoNetd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoRedisd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoRedisd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoUtild.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoUtild.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoXMLd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoXMLd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoZipd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/PocoZipd.pdb;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/concrt140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/cpspc.exe;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/f2cpsp.exe;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/msvcp140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/vcruntime140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/vsomeip-cfg.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/vsomeip-sd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug/vsomeip.dll")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/debug" TYPE FILE FILES
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/CommonAPI-SomeIP.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/CommonAPI.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDataODBCd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDataODBCd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDataSQLited.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDataSQLited.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDatad.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoDatad.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoEncodingsd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoEncodingsd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoFoundationd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoFoundationd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoJSONd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoJSONd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoMongoDBd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoMongoDBd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoNetd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoNetd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoRedisd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoRedisd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoUtild.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoUtild.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoXMLd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoXMLd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoZipd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/PocoZipd.pdb"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/concrt140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/cpspc.exe"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/f2cpsp.exe"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/msvcp140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vcruntime140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vsomeip-cfg.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vsomeip-sd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/debug/bin/vsomeip.dll"
      )
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/CommonAPI-SomeIP.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/CommonAPI.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoData.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoDataODBC.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoDataSQLite.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoEncodings.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoFoundation.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoJSON.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoMongoDB.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoNet.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoRedis.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoUtil.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoXML.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/PocoZip.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/concrt140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/cpspc.exe;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/f2cpsp.exe;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/msvcp140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/vcruntime140.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/vsomeip-cfg.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/vsomeip-sd.dll;D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release/vsomeip.dll")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    file(INSTALL DESTINATION "D:/Work/ZZYT/YT-SOA/dist/win32/SOA/bin/release" TYPE FILE FILES
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/CommonAPI-SomeIP.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/CommonAPI.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoData.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoDataODBC.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoDataSQLite.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoEncodings.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoFoundation.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoJSON.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoMongoDB.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoNet.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoRedis.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoUtil.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoXML.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/PocoZip.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/concrt140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/cpspc.exe"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/f2cpsp.exe"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/msvcp140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vcruntime140.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vsomeip-cfg.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vsomeip-sd.dll"
      "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/dist/win32/release/bin/vsomeip.dll"
      )
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/Work/ZZYT/YT-SOA/package/soa-3rdparty/build/win32/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
