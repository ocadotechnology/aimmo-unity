#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.StackFrame
struct StackFrame_t2050294881;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_LogLe2748531832.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.LogData
struct  LogData_t4095822710  : public Il2CppObject
{
public:
	// System.Diagnostics.StackFrame WebSocketSharp.LogData::_caller
	StackFrame_t2050294881 * ____caller_0;
	// System.DateTime WebSocketSharp.LogData::_date
	DateTime_t693205669  ____date_1;
	// WebSocketSharp.LogLevel WebSocketSharp.LogData::_level
	int32_t ____level_2;
	// System.String WebSocketSharp.LogData::_message
	String_t* ____message_3;

public:
	inline static int32_t get_offset_of__caller_0() { return static_cast<int32_t>(offsetof(LogData_t4095822710, ____caller_0)); }
	inline StackFrame_t2050294881 * get__caller_0() const { return ____caller_0; }
	inline StackFrame_t2050294881 ** get_address_of__caller_0() { return &____caller_0; }
	inline void set__caller_0(StackFrame_t2050294881 * value)
	{
		____caller_0 = value;
		Il2CppCodeGenWriteBarrier(&____caller_0, value);
	}

	inline static int32_t get_offset_of__date_1() { return static_cast<int32_t>(offsetof(LogData_t4095822710, ____date_1)); }
	inline DateTime_t693205669  get__date_1() const { return ____date_1; }
	inline DateTime_t693205669 * get_address_of__date_1() { return &____date_1; }
	inline void set__date_1(DateTime_t693205669  value)
	{
		____date_1 = value;
	}

	inline static int32_t get_offset_of__level_2() { return static_cast<int32_t>(offsetof(LogData_t4095822710, ____level_2)); }
	inline int32_t get__level_2() const { return ____level_2; }
	inline int32_t* get_address_of__level_2() { return &____level_2; }
	inline void set__level_2(int32_t value)
	{
		____level_2 = value;
	}

	inline static int32_t get_offset_of__message_3() { return static_cast<int32_t>(offsetof(LogData_t4095822710, ____message_3)); }
	inline String_t* get__message_3() const { return ____message_3; }
	inline String_t** get_address_of__message_3() { return &____message_3; }
	inline void set__message_3(String_t* value)
	{
		____message_3 = value;
		Il2CppCodeGenWriteBarrier(&____message_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
