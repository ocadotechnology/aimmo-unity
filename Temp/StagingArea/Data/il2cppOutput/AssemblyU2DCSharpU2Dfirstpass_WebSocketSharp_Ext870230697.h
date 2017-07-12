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
// System.Func`2<System.String,System.Boolean>
struct Func_2_t1989381442;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext
struct  Ext_t870230697  : public Il2CppObject
{
public:

public:
};

struct Ext_t870230697_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Ext::_last
	ByteU5BU5D_t3397334013* ____last_0;
	// System.Int32 WebSocketSharp.Ext::_retry
	int32_t ____retry_1;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.Ext::<>f__am$cache0
	Func_2_t1989381442 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__last_0() { return static_cast<int32_t>(offsetof(Ext_t870230697_StaticFields, ____last_0)); }
	inline ByteU5BU5D_t3397334013* get__last_0() const { return ____last_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__last_0() { return &____last_0; }
	inline void set__last_0(ByteU5BU5D_t3397334013* value)
	{
		____last_0 = value;
		Il2CppCodeGenWriteBarrier(&____last_0, value);
	}

	inline static int32_t get_offset_of__retry_1() { return static_cast<int32_t>(offsetof(Ext_t870230697_StaticFields, ____retry_1)); }
	inline int32_t get__retry_1() const { return ____retry_1; }
	inline int32_t* get_address_of__retry_1() { return &____retry_1; }
	inline void set__retry_1(int32_t value)
	{
		____retry_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(Ext_t870230697_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t1989381442 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t1989381442 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t1989381442 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
