#pragma once
#include <string>
#include "soa/core/Event.h"

namespace soa {
	namespace com {

		enum class COM_MODE{
			SOMEIP,
			DDS
		};

		class SOA_API Controller final{
		public:
			Controller() = delete;
			~Controller() = delete;
			Controller(const Controller &other) = delete;
			void operator = (const Controller &other) = delete;

			static bool connect();
			static bool disconnect();
			static bool isConnected();
			static void setBoolean(const std::string &path, bool b);
			static void setInteger(const std::string &path, int32_t n);
            static void setReal(const std::string &path, double d);
            static void setString(const std::string &path, const std::string &str);
            static void setEnum(const std::string &path, int32_t e);

			static void setCommunicationMode(const COM_MODE &communicationMode);
			static COM_MODE getCommunicationMode();
		};
	}
}
