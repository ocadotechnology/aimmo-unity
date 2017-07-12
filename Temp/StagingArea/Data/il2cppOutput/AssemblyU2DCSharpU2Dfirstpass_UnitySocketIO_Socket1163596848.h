#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.SocketIO.SocketIOSettings
struct  SocketIOSettings_t1163596848  : public Il2CppObject
{
public:
	// System.String UnitySocketIO.SocketIO.SocketIOSettings::url
	String_t* ___url_0;
	// System.Int32 UnitySocketIO.SocketIO.SocketIOSettings::port
	int32_t ___port_1;
	// System.Boolean UnitySocketIO.SocketIO.SocketIOSettings::sslEnabled
	bool ___sslEnabled_2;
	// System.Int32 UnitySocketIO.SocketIO.SocketIOSettings::reconnectTime
	int32_t ___reconnectTime_3;
	// System.Int32 UnitySocketIO.SocketIO.SocketIOSettings::timeToDropAck
	int32_t ___timeToDropAck_4;
	// System.Int32 UnitySocketIO.SocketIO.SocketIOSettings::pingTimeout
	int32_t ___pingTimeout_5;
	// System.Int32 UnitySocketIO.SocketIO.SocketIOSettings::pingInterval
	int32_t ___pingInterval_6;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(SocketIOSettings_t1163596848, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(SocketIOSettings_t1163596848, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}

	inline static int32_t get_offset_of_sslEnabled_2() { return static_cast<int32_t>(offsetof(SocketIOSettings_t1163596848, ___sslEnabled_2)); }
	inline bool get_sslEnabled_2() const { return ___sslEnabled_2; }
	inline bool* get_address_of_sslEnabled_2() { return &___sslEnabled_2; }
	inline void set_sslEnabled_2(bool value)
	{
		___sslEnabled_2 = value;
	}

	inline static int32_t get_offset_of_reconnectTime_3() { return static_cast<int32_t>(offsetof(SocketIOSettings_t1163596848, ___reconnectTime_3)); }
	inline int32_t get_reconnectTime_3() const { return ___reconnectTime_3; }
	inline int32_t* get_address_of_reconnectTime_3() { return &___reconnectTime_3; }
	inline void set_reconnectTime_3(int32_t value)
	{
		___reconnectTime_3 = value;
	}

	inline static int32_t get_offset_of_timeToDropAck_4() { return static_cast<int32_t>(offsetof(SocketIOSettings_t1163596848, ___timeToDropAck_4)); }
	inline int32_t get_timeToDropAck_4() const { return ___timeToDropAck_4; }
	inline int32_t* get_address_of_timeToDropAck_4() { return &___timeToDropAck_4; }
	inline void set_timeToDropAck_4(int32_t value)
	{
		___timeToDropAck_4 = value;
	}

	inline static int32_t get_offset_of_pingTimeout_5() { return static_cast<int32_t>(offsetof(SocketIOSettings_t1163596848, ___pingTimeout_5)); }
	inline int32_t get_pingTimeout_5() const { return ___pingTimeout_5; }
	inline int32_t* get_address_of_pingTimeout_5() { return &___pingTimeout_5; }
	inline void set_pingTimeout_5(int32_t value)
	{
		___pingTimeout_5 = value;
	}

	inline static int32_t get_offset_of_pingInterval_6() { return static_cast<int32_t>(offsetof(SocketIOSettings_t1163596848, ___pingInterval_6)); }
	inline int32_t get_pingInterval_6() const { return ___pingInterval_6; }
	inline int32_t* get_address_of_pingInterval_6() { return &___pingInterval_6; }
	inline void set_pingInterval_6(int32_t value)
	{
		___pingInterval_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
