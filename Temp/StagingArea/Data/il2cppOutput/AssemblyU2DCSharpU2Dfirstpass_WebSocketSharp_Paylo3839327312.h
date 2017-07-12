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
// System.String
struct String_t;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.PayloadData
struct  PayloadData_t3839327312  : public Il2CppObject
{
public:
	// System.UInt16 WebSocketSharp.PayloadData::_code
	uint16_t ____code_0;
	// System.Boolean WebSocketSharp.PayloadData::_codeSet
	bool ____codeSet_1;
	// System.Byte[] WebSocketSharp.PayloadData::_data
	ByteU5BU5D_t3397334013* ____data_2;
	// System.Int64 WebSocketSharp.PayloadData::_extDataLength
	int64_t ____extDataLength_3;
	// System.Int64 WebSocketSharp.PayloadData::_length
	int64_t ____length_4;
	// System.String WebSocketSharp.PayloadData::_reason
	String_t* ____reason_5;
	// System.Boolean WebSocketSharp.PayloadData::_reasonSet
	bool ____reasonSet_6;

public:
	inline static int32_t get_offset_of__code_0() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ____code_0)); }
	inline uint16_t get__code_0() const { return ____code_0; }
	inline uint16_t* get_address_of__code_0() { return &____code_0; }
	inline void set__code_0(uint16_t value)
	{
		____code_0 = value;
	}

	inline static int32_t get_offset_of__codeSet_1() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ____codeSet_1)); }
	inline bool get__codeSet_1() const { return ____codeSet_1; }
	inline bool* get_address_of__codeSet_1() { return &____codeSet_1; }
	inline void set__codeSet_1(bool value)
	{
		____codeSet_1 = value;
	}

	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ____data_2)); }
	inline ByteU5BU5D_t3397334013* get__data_2() const { return ____data_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(ByteU5BU5D_t3397334013* value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier(&____data_2, value);
	}

	inline static int32_t get_offset_of__extDataLength_3() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ____extDataLength_3)); }
	inline int64_t get__extDataLength_3() const { return ____extDataLength_3; }
	inline int64_t* get_address_of__extDataLength_3() { return &____extDataLength_3; }
	inline void set__extDataLength_3(int64_t value)
	{
		____extDataLength_3 = value;
	}

	inline static int32_t get_offset_of__length_4() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ____length_4)); }
	inline int64_t get__length_4() const { return ____length_4; }
	inline int64_t* get_address_of__length_4() { return &____length_4; }
	inline void set__length_4(int64_t value)
	{
		____length_4 = value;
	}

	inline static int32_t get_offset_of__reason_5() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ____reason_5)); }
	inline String_t* get__reason_5() const { return ____reason_5; }
	inline String_t** get_address_of__reason_5() { return &____reason_5; }
	inline void set__reason_5(String_t* value)
	{
		____reason_5 = value;
		Il2CppCodeGenWriteBarrier(&____reason_5, value);
	}

	inline static int32_t get_offset_of__reasonSet_6() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312, ____reasonSet_6)); }
	inline bool get__reasonSet_6() const { return ____reasonSet_6; }
	inline bool* get_address_of__reasonSet_6() { return &____reasonSet_6; }
	inline void set__reasonSet_6(bool value)
	{
		____reasonSet_6 = value;
	}
};

struct PayloadData_t3839327312_StaticFields
{
public:
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData::Empty
	PayloadData_t3839327312 * ___Empty_7;
	// System.UInt64 WebSocketSharp.PayloadData::MaxLength
	uint64_t ___MaxLength_8;

public:
	inline static int32_t get_offset_of_Empty_7() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312_StaticFields, ___Empty_7)); }
	inline PayloadData_t3839327312 * get_Empty_7() const { return ___Empty_7; }
	inline PayloadData_t3839327312 ** get_address_of_Empty_7() { return &___Empty_7; }
	inline void set_Empty_7(PayloadData_t3839327312 * value)
	{
		___Empty_7 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_7, value);
	}

	inline static int32_t get_offset_of_MaxLength_8() { return static_cast<int32_t>(offsetof(PayloadData_t3839327312_StaticFields, ___MaxLength_8)); }
	inline uint64_t get_MaxLength_8() const { return ___MaxLength_8; }
	inline uint64_t* get_address_of_MaxLength_8() { return &___MaxLength_8; }
	inline void set_MaxLength_8(uint64_t value)
	{
		___MaxLength_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
