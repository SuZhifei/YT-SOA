
# 1. Project Name

project(comservice)

# 2. Project Env (Include/Lib Path, C/CXX/LD FLAGS)

# 3. Project Build

set(BIN_NAME "comservice")

file(GLOB SRC_FILES "*.h" "*.cpp")

add_executable(${BIN_NAME} ${SRC_FILES})
set_target_properties(${BIN_NAME} PROPERTIES OUTPUT_NAME soa.com.service)
target_link_libraries(${BIN_NAME} libcom)
if("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL x86_64})
	target_link_libraries(${BIN_NAME} dl)
endif()

# 4. Project Install
if(WIN32)
    install(TARGETS ${BIN_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR}/debug CONFIGURATIONS debug)
    install(TARGETS ${BIN_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR}/release CONFIGURATIONS release)
else()
	install(TARGETS ${BIN_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
endif()
