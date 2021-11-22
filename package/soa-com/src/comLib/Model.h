#pragma once
#include "soa/core/Def.h"
#include <mutex>

namespace soa {
	namespace com {
		class ControllerStubImp;
		class ListenerStubImp;

		class SOA_API Model final{
		public:
			Model() {};
			bool startup();
			bool stop();

            bool setBoolean(const std::string &path, const bool &b, const uint64_t &timestamp);
			bool setInteger(const std::string &path, const int32_t &n, const uint64_t &timestamp);
			bool setReal(const std::string &path, const double &d, const uint64_t &timestamp);
			bool setString(const std::string &path, const std::string &str, const uint64_t &timestamp);
			bool setEnum(const std::string &path, const int32_t &e, const uint64_t &timestamp);

		private:
			bool initController(uint32_t timeoutMs);
			bool initListener(uint32_t timeoutMs);

		private:
			std::shared_ptr<ControllerStubImp>	    m_controllerStubImp;
			std::shared_ptr<ListenerStubImp>		m_listenerStubImp;
			std::recursive_mutex                    m_mutex;
		};
	}
}