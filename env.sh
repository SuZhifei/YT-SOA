#!/bin/bash
export SOA_REPO_DOMAIN_PREFIX=git@scm-gitlab:SOA/uniform/kunp
export SOA_ROOT="`pwd`"
export SOA_CONF_DIR=$SOA_ROOT/conf
export SOA_HOST=linux
export SOA_SUPPORTED_PLATFORMS=
export SOA_OS=
export SOA_ARCH=
export SOA_TARGET=

#Args Check(SOA_OS & SOA_SUPPORTED_PLATFORMS)
i=0
for file in $SOA_CONF_DIR/*.sh; do
	one=${file##*/} && one=${one%%.sh} && SOA_SUPPORTED_PLATFORMS[i]=$one && i=`expr $i + 1`
done
for i in ${SOA_SUPPORTED_PLATFORMS[@]}; do
	if [ "$1" == "$i" ]; then
		var=$1
		SOA_OS=${var%%-*}
		SOA_ARCH=${var#*-}
		SOA_TARGET=$var
	fi
done

if [ "$SOA_OS" == "" ]; then
	echo -e "\033[0;32m	useage: env.sh [${SOA_SUPPORTED_PLATFORMS[*]}]\033[0;0m" && return 0
fi

export SOA_TOOL_DIR=$SOA_ROOT/tool/$SOA_HOST
export SOA_PACKAGE_DIR=$SOA_ROOT/package
export SOA_SYSTEM_SDK_PATH=
export SOA_COMPILER_EXE=
export SOA_COMPILER_VERSION=
export SOA_CMAKE_EXE=cmake
export CAPI_CORE_GEN="$SOA_TOOL_DIR/commonapi-generator/commonapi-generator-linux-x86_64"
export CAPI_DBUS_GEN="$SOA_TOOL_DIR/commonapi_dbus_generator/commonapi-dbus-generator-linux-x86_64"
export CAPI_SOMEIP_GEN="$SOA_TOOL_DIR/commonapi_someip_generator/commonapi-someip-generator-linux-x86_64"
export SOA_BUILD_DIR=build/$SOA_TARGET
export SOA_INSTALL_DIR=$SOA_ROOT/dist/$SOA_TARGET/SOA
export SOA_CMAKE="$SOA_CMAKE_EXE \
-DCMAKE_INSTALL_PREFIX:PATH=$SOA_INSTALL_DIR \
-DCMAKE_INSTALL_BINDIR:PATH=$SOA_INSTALL_DIR/bin \
-DCMAKE_INSTALL_ETCDIR:PATH=$SOA_INSTALL_DIR/etc \
-DCMAKE_INSTALL_LIBDIR:PATH=$SOA_INSTALL_DIR/lib \
-DCMAKE_INSTALL_INCLUDEDIR:PATH=$SOA_INSTALL_DIR/include \
-DCMAKE_INSTALL_DOCDIR:PATH=$SOA_INSTALL_DIR/doc \
-DCMAKE_INSTALL_TEMPDIR:PATH=$SOA_INSTALL_DIR/temp \
-DCMAKE_INSTALL_SHAREDIR:PATH=$SOA_INSTALL_DIR/share \
-DCMAKE_INSTALL_RESOURCEDIR:PATH=$SOA_INSTALL_DIR/resource \
-DCMAKE_INSTALL_EXAMPLEDIR:PATH=$SOA_INSTALL_DIR/example \
-DCMAKE_BUILD_TYPE=release \
-Wno-dev"

#Source Target Config
. $SOA_CONF_DIR/$SOA_TARGET.sh
. $SOA_CONF_DIR/util/helper.sh
export SOA_UPDATE="$SOA_CONF_DIR/util/update.sh"

# Print Environment Configuration

echo -e "\033[0;34m--------------------------- Development Environment ---------------------------\033[0;0m"
echo -e "\033[0;31m  SOA Root      : \033[0;32m"$SOA_ROOT
echo -e "\033[0;31m  SOA Baseline  : \033[0;32m"$SOA_BASELINE
echo -e "\033[0;31m  Build Target  : \033[0;32m"$SOA_TARGET
echo -e "\033[0;31m  System SDK    : \033[0;32m"$SOA_SYSTEM_SDK_PATH
echo -e "\033[0;31m  GCC Exec      : \033[0;32m"`which $CC`
echo -e "\033[0;31m  G++ Exec      : \033[0;32m"`which $CXX`
echo -e "\033[0;31m  GCC Version   : \033[0;32m"$($CC -dumpversion)
echo -e "\033[0;31m  GCC Machine   : \033[0;32m"$($CC -dumpmachine)
echo -e "\033[0;31m  Install Path  : \033[0;32m"$SOA_INSTALL_DIR
echo -e "\033[0;34m-------------------------------------------------------------------------------\033[0;0m"
