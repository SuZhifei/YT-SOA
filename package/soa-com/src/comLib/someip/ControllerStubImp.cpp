#include "ControllerStubImp.h"
#include "Poco/Foundation.h"
#include "../Model.h"

using namespace soa::com;

ControllerStubImp::ControllerStubImp(Model* model) 
    :m_model(model){
}

void ControllerStubImp::SetBoolean(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, bool _value, uint64_t _timestamp, SetBooleanReply_t _reply) {
    (void)_client;
	m_model->setBoolean(_path, _value, _timestamp);
    _reply();
}

void ControllerStubImp::SetInteger(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, int32_t _value, uint64_t _timestamp, SetIntegerReply_t _reply) {
    (void)_client;
	m_model->setInteger(_path, _value, _timestamp);
    _reply();
}
void ControllerStubImp::SetReal(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, double _value, uint64_t _timestamp, SetRealReply_t _reply) {
    (void)_client;
	m_model->setReal(_path, _value, _timestamp);
    _reply();
}

void ControllerStubImp::SetString(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, std::string _value, uint64_t _timestamp, SetStringReply_t _reply) {
    (void)_client;
	m_model->setString(_path, _value, _timestamp);
    _reply();
}

void ControllerStubImp::SetEnum(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _path, int32_t _value, uint64_t _timestamp, SetEnumReply_t _reply) {
    (void)_client;
	m_model->setEnum(_path, _value, _timestamp);
    _reply();
}