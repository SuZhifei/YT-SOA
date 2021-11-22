
# 1. Project Name

project(libcom)

# 2. Project Env (Include/Lib Path, C/CXX/LD FLAGS)
include_directories(${com-api_CAPI_GEN_DIR})
include_directories(${openDDS_DDS_API_GEN_DIR})

#message(STATUS "GEN_DIR1!!!!!: ${com-api_CAPI_GEN_DIR}")
#message(STATUS "GEN_DIR2!!!!!: ${openDDS_DDS_API_GEN_DIR}")

# 3. Project Build

set(LIB_NAME "libcom")

file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/include/com/*.h" 
	"${CMAKE_CURRENT_SOURCE_DIR}/dds/*.cpp" 
	"${CMAKE_CURRENT_SOURCE_DIR}/someip/*.cpp" 
	"*.h" "*.cpp")

add_library(${LIB_NAME} SHARED ${SRC_FILES})
set_target_properties(${LIB_NAME} PROPERTIES OUTPUT_NAME soa_com)

if(WIN32)
	set(LINK_LIBS soa_core optimized PocoFoundation debug PocoFoundationd optimized PocoJSON debug PocoJSONd ${com-api_CAPI_GEN_LIB} CommonAPI CommonAPI-SomeIP WS2_32 openDDS)
else()
	set(LINK_LIBS soa_core PocoFoundation PocoJSON PocoUtil PocoNet ${com-api_CAPI_GEN_LIB} CommonAPI CommonAPI-SomeIP)
endif()
target_link_libraries(${LIB_NAME} ${LINK_LIBS})

# 4. Project Install
if(WIN32)
    install(TARGETS ${LIB_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR}/debug CONFIGURATIONS debug)
    install(TARGETS ${LIB_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR}/release CONFIGURATIONS release)
else()
	file(GLOB CONFS conf/*.conf)
	install(FILES ${CONFS} DESTINATION ${CMAKE_INSTALL_ETCDIR})
	install(TARGETS ${LIB_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR})
endif()
