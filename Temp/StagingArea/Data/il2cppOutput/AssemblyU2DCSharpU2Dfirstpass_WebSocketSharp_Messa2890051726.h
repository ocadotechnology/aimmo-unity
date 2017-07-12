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
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.MessageEventArgs
struct  MessageEventArgs_t2890051726  : public EventArgs_t3289624707
{
public:
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// System.Boolean WebSocketSharp.MessageEventArgs::_dataSet
	bool ____dataSet_2;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_3;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_t3397334013* ____rawData_4;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2890051726, ____data_1)); }
	inline String_t* get__data_1() const { return ____data_1; }
	inline String_t** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(String_t* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier(&____data_1, value);
	}

	inline static int32_t get_offset_of__dataSet_2() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2890051726, ____dataSet_2)); }
	inline bool get__dataSet_2() const { return ____dataSet_2; }
	inline bool* get_address_of__dataSet_2() { return &____dataSet_2; }
	inline void set__dataSet_2(bool value)
	{
		____dataSet_2 = value;
	}

	inline static int32_t get_offset_of__opcode_3() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2890051726, ____opcode_3)); }
	inline uint8_t get__opcode_3() const { return ____opcode_3; }
	inline uint8_t* get_address_of__opcode_3() { return &____opcode_3; }
	inline void set__opcode_3(uint8_t value)
	{
		____opcode_3 = value;
	}

	inline static int32_t get_offset_of__rawData_4() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2890051726, ____rawData_4)); }
	inline ByteU5BU5D_t3397334013* get__rawData_4() const { return ____rawData_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__rawData_4() { return &____rawData_4; }
	inline void set__rawData_4(ByteU5BU5D_t3397334013* value)
	{
		____rawData_4 = value;
		Il2CppCodeGenWriteBarrier(&____rawData_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
