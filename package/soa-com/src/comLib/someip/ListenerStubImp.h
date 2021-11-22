#pragma once
#include "v1/soa/com/ListenerServerStubDefault.hpp"
#include <Poco/JSON/Object.h>

using namespace v1::soa::com;

namespace soa {
	namespace com {
		class Model;
		class ListenerStubImp : public ListenerServerStubDefault{
		public:
			ListenerStubImp(Model* model);

	        void notifyBoolean(const std::string &path, bool b, uint64_t timestamp);
            void notifyInteger(const std::string &path, int32_t n, uint64_t timestamp);
	        void notifyReal(const std::string &path, double d, uint64_t timestamp);
	        void notifyString(const std::string &path, const std::string &str, uint64_t timestamp);
	        void notifyEnum(const std::string &path, int32_t e, uint64_t timestamp);

		private:
			//remote call
			virtual void SayHello(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _pid, std::string _path, SayHelloReply_t _reply) override;

			//get the Receiver for which client to receive.
			std::shared_ptr<CommonAPI::ClientIdList> getReceiver(const std::string &path) const;

		private:
			Model* 			m_model;
			std::map<size_t, std::pair<std::shared_ptr<CommonAPI::ClientId>, std::string>>		m_Receivers;
		};
	}
}