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
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t502883108;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_LogLe2748531832.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Logger
struct  Logger_t2598199114  : public Il2CppObject
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_file
	String_t* ____file_0;
	// WebSocketSharp.LogLevel modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_level
	int32_t ____level_1;
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::_output
	Action_2_t502883108 * ____output_2;
	// System.Object WebSocketSharp.Logger::_sync
	Il2CppObject * ____sync_3;

public:
	inline static int32_t get_offset_of__file_0() { return static_cast<int32_t>(offsetof(Logger_t2598199114, ____file_0)); }
	inline String_t* get__file_0() const { return ____file_0; }
	inline String_t** get_address_of__file_0() { return &____file_0; }
	inline void set__file_0(String_t* value)
	{
		____file_0 = value;
		Il2CppCodeGenWriteBarrier(&____file_0, value);
	}

	inline static int32_t get_offset_of__level_1() { return static_cast<int32_t>(offsetof(Logger_t2598199114, ____level_1)); }
	inline int32_t get__level_1() const { return ____level_1; }
	inline int32_t* get_address_of__level_1() { return &____level_1; }
	inline void set__level_1(int32_t value)
	{
		____level_1 = value;
	}

	inline static int32_t get_offset_of__output_2() { return static_cast<int32_t>(offsetof(Logger_t2598199114, ____output_2)); }
	inline Action_2_t502883108 * get__output_2() const { return ____output_2; }
	inline Action_2_t502883108 ** get_address_of__output_2() { return &____output_2; }
	inline void set__output_2(Action_2_t502883108 * value)
	{
		____output_2 = value;
		Il2CppCodeGenWriteBarrier(&____output_2, value);
	}

	inline static int32_t get_offset_of__sync_3() { return static_cast<int32_t>(offsetof(Logger_t2598199114, ____sync_3)); }
	inline Il2CppObject * get__sync_3() const { return ____sync_3; }
	inline Il2CppObject ** get_address_of__sync_3() { return &____sync_3; }
	inline void set__sync_3(Il2CppObject * value)
	{
		____sync_3 = value;
		Il2CppCodeGenWriteBarrier(&____sync_3, value);
	}
};

struct Logger_t2598199114_StaticFields
{
public:
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::<>f__mg$cache0
	Action_2_t502883108 * ___U3CU3Ef__mgU24cache0_4;
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::<>f__mg$cache1
	Action_2_t502883108 * ___U3CU3Ef__mgU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(Logger_t2598199114_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline Action_2_t502883108 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline Action_2_t502883108 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(Action_2_t502883108 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_5() { return static_cast<int32_t>(offsetof(Logger_t2598199114_StaticFields, ___U3CU3Ef__mgU24cache1_5)); }
	inline Action_2_t502883108 * get_U3CU3Ef__mgU24cache1_5() const { return ___U3CU3Ef__mgU24cache1_5; }
	inline Action_2_t502883108 ** get_address_of_U3CU3Ef__mgU24cache1_5() { return &___U3CU3Ef__mgU24cache1_5; }
	inline void set_U3CU3Ef__mgU24cache1_5(Action_2_t502883108 * value)
	{
		___U3CU3Ef__mgU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
