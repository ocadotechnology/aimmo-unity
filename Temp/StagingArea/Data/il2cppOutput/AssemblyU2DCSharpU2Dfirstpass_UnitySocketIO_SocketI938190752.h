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
// UnitySocketIO.SocketIO.SocketIOSettings
struct SocketIOSettings_t1163596848;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.SocketIO.BaseSocketIO
struct  BaseSocketIO_t938190752  : public MonoBehaviour_t1158329972
{
public:
	// System.String UnitySocketIO.SocketIO.BaseSocketIO::<SocketID>k__BackingField
	String_t* ___U3CSocketIDU3Ek__BackingField_2;
	// UnitySocketIO.SocketIO.SocketIOSettings UnitySocketIO.SocketIO.BaseSocketIO::settings
	SocketIOSettings_t1163596848 * ___settings_3;

public:
	inline static int32_t get_offset_of_U3CSocketIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSocketIO_t938190752, ___U3CSocketIDU3Ek__BackingField_2)); }
	inline String_t* get_U3CSocketIDU3Ek__BackingField_2() const { return ___U3CSocketIDU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CSocketIDU3Ek__BackingField_2() { return &___U3CSocketIDU3Ek__BackingField_2; }
	inline void set_U3CSocketIDU3Ek__BackingField_2(String_t* value)
	{
		___U3CSocketIDU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSocketIDU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_settings_3() { return static_cast<int32_t>(offsetof(BaseSocketIO_t938190752, ___settings_3)); }
	inline SocketIOSettings_t1163596848 * get_settings_3() const { return ___settings_3; }
	inline SocketIOSettings_t1163596848 ** get_address_of_settings_3() { return &___settings_3; }
	inline void set_settings_3(SocketIOSettings_t1163596848 * value)
	{
		___settings_3 = value;
		Il2CppCodeGenWriteBarrier(&___settings_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
