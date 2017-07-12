#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnitySocketIO.SocketIOController
struct SocketIOController_t1449623431;
// System.Action`1<UnitySocketIO.Events.SocketIOEvent>
struct Action_1_t1398723601;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorldControls
struct  WorldControls_t3823314646  : public MonoBehaviour_t1158329972
{
public:
	// UnitySocketIO.SocketIOController WorldControls::io
	SocketIOController_t1449623431 * ___io_2;

public:
	inline static int32_t get_offset_of_io_2() { return static_cast<int32_t>(offsetof(WorldControls_t3823314646, ___io_2)); }
	inline SocketIOController_t1449623431 * get_io_2() const { return ___io_2; }
	inline SocketIOController_t1449623431 ** get_address_of_io_2() { return &___io_2; }
	inline void set_io_2(SocketIOController_t1449623431 * value)
	{
		___io_2 = value;
		Il2CppCodeGenWriteBarrier(&___io_2, value);
	}
};

struct WorldControls_t3823314646_StaticFields
{
public:
	// System.Action`1<UnitySocketIO.Events.SocketIOEvent> WorldControls::<>f__am$cache0
	Action_1_t1398723601 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(WorldControls_t3823314646_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Action_1_t1398723601 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Action_1_t1398723601 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Action_1_t1398723601 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
