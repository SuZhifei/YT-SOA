#pragma once
#include <vector>
#include "soa/core/Def.h"
#include "soa/core/Event.h"
#include "Poco/Foundation.h"

namespace v1 {
	namespace soa {
		namespace com {
			template <typename ... _AttributeExtensions>
			class ListenerServerProxy;
		}
	}
}

namespace soa { namespace com {

    enum class COM_MODE{
        SOMEIP,
        DDS
    };

    class SOA_API Listener final {
    public:
        //构建一个Listener端
        Listener();
        ~Listener() = default;
        Listener(const Listener &other) = delete;
        void operator = (const Listener &other) = delete;

        bool connect(const std::string &path);
        bool disconnect();
        void setCommunicationMode(const COM_MODE &communicationMode);
		COM_MODE getCommunicationMode();

    public:
        //布尔数据更新通知
        //path：数据路径
        //value：布尔值
        //timestamp：时间戳（0表示此参数无意义）
        struct BooleanChangedArgs { std::string path; bool value; uint64_t timestamp; };
        soa::Event<BooleanChangedArgs>		BooleanChangedEvent;

        //整型数据更新通知
        //path：数据路径
        //value：整型值
        //timestamp：时间戳（0表示此参数无意义）
        struct IntegerChangedArgs { std::string path; int32_t value; uint64_t timestamp; };
        soa::Event<IntegerChangedArgs>		IntegerChangedEvent;

        //浮点数据更新通知
        //path：数据路径
        //value：浮点值
        //timestamp：时间戳（0表示此参数无意义）
        struct RealChangedArgs { std::string path; double value; uint64_t timestamp; };
        soa::Event<RealChangedArgs>			RealChangedEvent;

        //字符串数据更新通知
        //path：数据路径
        //value：字符串值
        //timestamp：时间戳（0表示此参数无意义）
        struct StringChangedArgs { std::string path; std::string value; uint64_t timestamp; };
        soa::Event<StringChangedArgs>			StringChangedEvent;

        //枚举数据更新通知
        //path：数据路径
        //value：枚举值的整数形式
        //timestamp：时间戳（0表示此参数无意义）
        struct EnumChangedArgs { std::string path; int32_t value; uint64_t timestamp; };
        soa::Event<EnumChangedArgs>			EnumChangedEvent;
    
    private:
        std::shared_ptr<v1::soa::com::ListenerServerProxy<>>	m_listenerServerProxy;
        COM_MODE m_comMode{ COM_MODE::SOMEIP };

    };
    
}}