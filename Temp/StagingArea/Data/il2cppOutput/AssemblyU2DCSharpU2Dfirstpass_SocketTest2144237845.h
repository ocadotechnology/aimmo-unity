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
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocketTest
struct  SocketTest_t2144237845  : public MonoBehaviour_t1158329972
{
public:
	// UnitySocketIO.SocketIOController SocketTest::io
	SocketIOController_t1449623431 * ___io_2;

public:
	inline static int32_t get_offset_of_io_2() { return static_cast<int32_t>(offsetof(SocketTest_t2144237845, ___io_2)); }
	inline SocketIOController_t1449623431 * get_io_2() const { return ___io_2; }
	inline SocketIOController_t1449623431 ** get_address_of_io_2() { return &___io_2; }
	inline void set_io_2(SocketIOController_t1449623431 * value)
	{
		___io_2 = value;
		Il2CppCodeGenWriteBarrier(&___io_2, value);
	}
};

struct SocketTest_t2144237845_StaticFields
{
public:
	// System.Action`1<UnitySocketIO.Events.SocketIOEvent> SocketTest::<>f__am$cache0
	Action_1_t1398723601 * ___U3CU3Ef__amU24cache0_3;
	// System.Action`1<System.String> SocketTest::<>f__am$cache1
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache1_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(SocketTest_t2144237845_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Action_1_t1398723601 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Action_1_t1398723601 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Action_1_t1398723601 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_4() { return static_cast<int32_t>(offsetof(SocketTest_t2144237845_StaticFields, ___U3CU3Ef__amU24cache1_4)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache1_4() const { return ___U3CU3Ef__amU24cache1_4; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache1_4() { return &___U3CU3Ef__amU24cache1_4; }
	inline void set_U3CU3Ef__amU24cache1_4(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
