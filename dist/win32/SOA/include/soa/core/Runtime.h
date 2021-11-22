#pragma once
#include "Def.h"

namespace soa {

class SOA_API Runtime
{
public:
	//获取运行时soa的home目录，在
	static std::string getHomeDirectory();

	//获取运行时soa的lib目录
	static std::string getLibDirectory();

	//获取运行时soa的配置目录
	static std::string getEtcDirectory();

	//获取运行时soa的bin目录
	static std::string getBinDirectory();

	//获取运行时soa的临时目录
	static std::string getTempDirectory();

	//获取运行时soa共享目录
	static std::string getShareDirectory();

	//获取运行时soa资源目录
	static std::string getResourceDirectory();

	//获取运行时数据目录
	static std::string getDataDirectory();
};

}