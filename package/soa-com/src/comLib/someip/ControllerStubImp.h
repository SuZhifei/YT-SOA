#pragma once
#include <v1/soa/com/ControllerServerStubDefault.hpp>

using namespace v1::soa::com;

namespace soa {
	namespace com {
		
		class Model;
		class ControllerStubImp : public ControllerServerStubDefault
		{
		public:
			ControllerStubImp(Model* model) ;

		private:
			//remote call
            virtual void SetBoolean(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, bool _value, uint64_t _timestamp, SetBooleanReply_t _reply) override;
	        virtual void SetInteger(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, int32_t _value, uint64_t _timestamp, SetIntegerReply_t _reply) override;
	        virtual void SetReal(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, double _value, uint64_t _timestamp, SetRealReply_t _reply) override;
	        virtual void SetString(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, std::string _value, uint64_t _timestamp, SetStringReply_t _reply) override;
	        virtual void SetEnum(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, int32_t _value, uint64_t _timestamp, SetEnumReply_t _reply) override;

		private:
			Model* m_model;
		};
	}
}