#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnitySocketIO.SocketIO.SocketIOSettings
struct SocketIOSettings_t1163596848;
// UnitySocketIO.SocketIO.BaseSocketIO
struct BaseSocketIO_t938190752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.SocketIOController
struct  SocketIOController_t1449623431  : public MonoBehaviour_t1158329972
{
public:
	// UnitySocketIO.SocketIO.SocketIOSettings UnitySocketIO.SocketIOController::settings
	SocketIOSettings_t1163596848 * ___settings_2;
	// UnitySocketIO.SocketIO.BaseSocketIO UnitySocketIO.SocketIOController::socketIO
	BaseSocketIO_t938190752 * ___socketIO_3;

public:
	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(SocketIOController_t1449623431, ___settings_2)); }
	inline SocketIOSettings_t1163596848 * get_settings_2() const { return ___settings_2; }
	inline SocketIOSettings_t1163596848 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(SocketIOSettings_t1163596848 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier(&___settings_2, value);
	}

	inline static int32_t get_offset_of_socketIO_3() { return static_cast<int32_t>(offsetof(SocketIOController_t1449623431, ___socketIO_3)); }
	inline BaseSocketIO_t938190752 * get_socketIO_3() const { return ___socketIO_3; }
	inline BaseSocketIO_t938190752 ** get_address_of_socketIO_3() { return &___socketIO_3; }
	inline void set_socketIO_3(BaseSocketIO_t938190752 * value)
	{
		___socketIO_3 = value;
		Il2CppCodeGenWriteBarrier(&___socketIO_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
