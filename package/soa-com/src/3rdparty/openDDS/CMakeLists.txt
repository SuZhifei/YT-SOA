# 1. Project Name

project (openDDS)

# 2. Project Env (Include/Lib Path, C/CXX/LD FLAGS)

# 3. Project Build

set(LIB_NAME "openDDS")

file(GLOB SRC_FILES "*.h" "*.cpp")

set(DDS_API_GEN_DIR ${CMAKE_CURRENT_BINARY_DIR})
# Export
set(${PROJECT_NAME}_DDS_API_GEN_DIR ${DDS_API_GEN_DIR} CACHE PATH "DDS_API Generated Code Dir")

add_library(${LIB_NAME} SHARED ${SRC_FILES})
set_target_properties(${LIB_NAME} PROPERTIES OUTPUT_NAME com-opendds)

OPENDDS_TARGET_SOURCES(${LIB_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/idl/Messenger.idl)

set(OPENDDS_LIBS
  OpenDDS::Dcps # Core OpenDDS Library
  OpenDDS::InfoRepoDiscovery OpenDDS::Tcp # For run_test.pl
  OpenDDS::Rtps OpenDDS::Rtps_Udp # For run_test.pl --rtps
)
target_link_libraries(${LIB_NAME} ${OPENDDS_LIBS})

# 3. Project Install
if(WIN32)
  install(TARGETS ${LIB_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR}/debug CONFIGURATIONS debug)
  install(TARGETS ${LIB_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR}/release CONFIGURATIONS release)
else()
	install(TARGETS ${LIB_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR})
endif()
