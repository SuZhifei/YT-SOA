#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CommonAPI-SomeIP" for configuration "Debug"
set_property(TARGET CommonAPI-SomeIP APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(CommonAPI-SomeIP PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/CommonAPI-SomeIP.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "CommonAPI;vsomeip;ws2_32;Rpcrt4"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/CommonAPI-SomeIP.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CommonAPI-SomeIP )
list(APPEND _IMPORT_CHECK_FILES_FOR_CommonAPI-SomeIP "${_IMPORT_PREFIX}/lib/CommonAPI-SomeIP.lib" "${_IMPORT_PREFIX}/bin/CommonAPI-SomeIP.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
