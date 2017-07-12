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
// System.Func`2<System.String[],WebSocketSharp.HttpResponse>
struct Func_2_t1532221928;

#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_HttpB4283398485.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HttpResponse
struct  HttpResponse_t2820540315  : public HttpBase_t4283398485
{
public:
	// System.String WebSocketSharp.HttpResponse::_code
	String_t* ____code_5;
	// System.String WebSocketSharp.HttpResponse::_reason
	String_t* ____reason_6;

public:
	inline static int32_t get_offset_of__code_5() { return static_cast<int32_t>(offsetof(HttpResponse_t2820540315, ____code_5)); }
	inline String_t* get__code_5() const { return ____code_5; }
	inline String_t** get_address_of__code_5() { return &____code_5; }
	inline void set__code_5(String_t* value)
	{
		____code_5 = value;
		Il2CppCodeGenWriteBarrier(&____code_5, value);
	}

	inline static int32_t get_offset_of__reason_6() { return static_cast<int32_t>(offsetof(HttpResponse_t2820540315, ____reason_6)); }
	inline String_t* get__reason_6() const { return ____reason_6; }
	inline String_t** get_address_of__reason_6() { return &____reason_6; }
	inline void set__reason_6(String_t* value)
	{
		____reason_6 = value;
		Il2CppCodeGenWriteBarrier(&____reason_6, value);
	}
};

struct HttpResponse_t2820540315_StaticFields
{
public:
	// System.Func`2<System.String[],WebSocketSharp.HttpResponse> WebSocketSharp.HttpResponse::<>f__mg$cache0
	Func_2_t1532221928 * ___U3CU3Ef__mgU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_7() { return static_cast<int32_t>(offsetof(HttpResponse_t2820540315_StaticFields, ___U3CU3Ef__mgU24cache0_7)); }
	inline Func_2_t1532221928 * get_U3CU3Ef__mgU24cache0_7() const { return ___U3CU3Ef__mgU24cache0_7; }
	inline Func_2_t1532221928 ** get_address_of_U3CU3Ef__mgU24cache0_7() { return &___U3CU3Ef__mgU24cache0_7; }
	inline void set_U3CU3Ef__mgU24cache0_7(Func_2_t1532221928 * value)
	{
		___U3CU3Ef__mgU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
