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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.Data.SocketOpenData
struct  SocketOpenData_t3133187849  : public Il2CppObject
{
public:
	// System.String UnitySocketIO.Data.SocketOpenData::sid
	String_t* ___sid_0;
	// System.String[] UnitySocketIO.Data.SocketOpenData::upgrades
	StringU5BU5D_t1642385972* ___upgrades_1;
	// System.Int32 UnitySocketIO.Data.SocketOpenData::pingInterval
	int32_t ___pingInterval_2;
	// System.Int32 UnitySocketIO.Data.SocketOpenData::pingTimeout
	int32_t ___pingTimeout_3;

public:
	inline static int32_t get_offset_of_sid_0() { return static_cast<int32_t>(offsetof(SocketOpenData_t3133187849, ___sid_0)); }
	inline String_t* get_sid_0() const { return ___sid_0; }
	inline String_t** get_address_of_sid_0() { return &___sid_0; }
	inline void set_sid_0(String_t* value)
	{
		___sid_0 = value;
		Il2CppCodeGenWriteBarrier(&___sid_0, value);
	}

	inline static int32_t get_offset_of_upgrades_1() { return static_cast<int32_t>(offsetof(SocketOpenData_t3133187849, ___upgrades_1)); }
	inline StringU5BU5D_t1642385972* get_upgrades_1() const { return ___upgrades_1; }
	inline StringU5BU5D_t1642385972** get_address_of_upgrades_1() { return &___upgrades_1; }
	inline void set_upgrades_1(StringU5BU5D_t1642385972* value)
	{
		___upgrades_1 = value;
		Il2CppCodeGenWriteBarrier(&___upgrades_1, value);
	}

	inline static int32_t get_offset_of_pingInterval_2() { return static_cast<int32_t>(offsetof(SocketOpenData_t3133187849, ___pingInterval_2)); }
	inline int32_t get_pingInterval_2() const { return ___pingInterval_2; }
	inline int32_t* get_address_of_pingInterval_2() { return &___pingInterval_2; }
	inline void set_pingInterval_2(int32_t value)
	{
		___pingInterval_2 = value;
	}

	inline static int32_t get_offset_of_pingTimeout_3() { return static_cast<int32_t>(offsetof(SocketOpenData_t3133187849, ___pingTimeout_3)); }
	inline int32_t get_pingTimeout_3() const { return ___pingTimeout_3; }
	inline int32_t* get_address_of_pingTimeout_3() { return &___pingTimeout_3; }
	inline void set_pingTimeout_3(int32_t value)
	{
		___pingTimeout_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
