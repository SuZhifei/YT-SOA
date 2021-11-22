
# 1. Project Name

project(src)

# 2. Env (Include/Lib Path, C/CXX/LD FLAGS)

if(WIN32)
	include_directories(${CMAKE_INSTALL_INCLUDEDIR}/CommonAPI-3.1)
else()
	if("$ENV{SOA_ARCH}" STREQUAL "arm")
		set(CMAKE_PREFIX_PATH $ENV{SDKTARGETSYSROOT}/usr/lib/cmake)
	else()
		set(CMAKE_PREFIX_PATH ${CMAKE_INSTALL_LIBDIR}/cmake)
	endif()
	find_package(CommonAPI REQUIRED CONFIG NO_CMAKE_PACKAGE_REGISTRY)
	find_package(CommonAPI-SomeIP REQUIRED)
	find_package(vsomeip REQUIRED)
	include_directories(${COMMONAPI_INCLUDE_DIRS})
endif()

find_package(OpenDDS REQUIRED)

# 4. Sub Projects

add_subdirectory(3rdparty)
add_subdirectory(comLib)
add_subdirectory(comManage)

# 5. Project Install
# N/A
