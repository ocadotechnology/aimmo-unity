#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Action
struct Action_t3226471752;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey2
struct  U3CbroadcastAsyncU3Ec__AnonStorey2_t2856551035  : public Il2CppObject
{
public:
	// WebSocketSharp.Opcode WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey2::opcode
	uint8_t ___opcode_0;
	// System.Byte[] WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey2::data
	ByteU5BU5D_t3397334013* ___data_1;
	// System.Action WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey2::completed
	Action_t3226471752 * ___completed_2;
	// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey2::$this
	WebSocketSessionManager_t2802512518 * ___U24this_3;

public:
	inline static int32_t get_offset_of_opcode_0() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey2_t2856551035, ___opcode_0)); }
	inline uint8_t get_opcode_0() const { return ___opcode_0; }
	inline uint8_t* get_address_of_opcode_0() { return &___opcode_0; }
	inline void set_opcode_0(uint8_t value)
	{
		___opcode_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey2_t2856551035, ___data_1)); }
	inline ByteU5BU5D_t3397334013* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3397334013* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey2_t2856551035, ___completed_2)); }
	inline Action_t3226471752 * get_completed_2() const { return ___completed_2; }
	inline Action_t3226471752 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_t3226471752 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier(&___completed_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey2_t2856551035, ___U24this_3)); }
	inline WebSocketSessionManager_t2802512518 * get_U24this_3() const { return ___U24this_3; }
	inline WebSocketSessionManager_t2802512518 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(WebSocketSessionManager_t2802512518 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
