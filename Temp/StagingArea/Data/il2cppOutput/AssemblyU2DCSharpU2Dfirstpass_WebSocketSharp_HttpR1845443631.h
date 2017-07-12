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
// System.Func`2<System.String[],WebSocketSharp.HttpRequest>
struct Func_2_t557125244;

#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_HttpB4283398485.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HttpRequest
struct  HttpRequest_t1845443631  : public HttpBase_t4283398485
{
public:
	// System.String WebSocketSharp.HttpRequest::_method
	String_t* ____method_5;
	// System.String WebSocketSharp.HttpRequest::_uri
	String_t* ____uri_6;
	// System.Boolean WebSocketSharp.HttpRequest::_websocketRequest
	bool ____websocketRequest_7;
	// System.Boolean WebSocketSharp.HttpRequest::_websocketRequestSet
	bool ____websocketRequestSet_8;

public:
	inline static int32_t get_offset_of__method_5() { return static_cast<int32_t>(offsetof(HttpRequest_t1845443631, ____method_5)); }
	inline String_t* get__method_5() const { return ____method_5; }
	inline String_t** get_address_of__method_5() { return &____method_5; }
	inline void set__method_5(String_t* value)
	{
		____method_5 = value;
		Il2CppCodeGenWriteBarrier(&____method_5, value);
	}

	inline static int32_t get_offset_of__uri_6() { return static_cast<int32_t>(offsetof(HttpRequest_t1845443631, ____uri_6)); }
	inline String_t* get__uri_6() const { return ____uri_6; }
	inline String_t** get_address_of__uri_6() { return &____uri_6; }
	inline void set__uri_6(String_t* value)
	{
		____uri_6 = value;
		Il2CppCodeGenWriteBarrier(&____uri_6, value);
	}

	inline static int32_t get_offset_of__websocketRequest_7() { return static_cast<int32_t>(offsetof(HttpRequest_t1845443631, ____websocketRequest_7)); }
	inline bool get__websocketRequest_7() const { return ____websocketRequest_7; }
	inline bool* get_address_of__websocketRequest_7() { return &____websocketRequest_7; }
	inline void set__websocketRequest_7(bool value)
	{
		____websocketRequest_7 = value;
	}

	inline static int32_t get_offset_of__websocketRequestSet_8() { return static_cast<int32_t>(offsetof(HttpRequest_t1845443631, ____websocketRequestSet_8)); }
	inline bool get__websocketRequestSet_8() const { return ____websocketRequestSet_8; }
	inline bool* get_address_of__websocketRequestSet_8() { return &____websocketRequestSet_8; }
	inline void set__websocketRequestSet_8(bool value)
	{
		____websocketRequestSet_8 = value;
	}
};

struct HttpRequest_t1845443631_StaticFields
{
public:
	// System.Func`2<System.String[],WebSocketSharp.HttpResponse> WebSocketSharp.HttpRequest::<>f__mg$cache0
	Func_2_t1532221928 * ___U3CU3Ef__mgU24cache0_9;
	// System.Func`2<System.String[],WebSocketSharp.HttpRequest> WebSocketSharp.HttpRequest::<>f__mg$cache1
	Func_2_t557125244 * ___U3CU3Ef__mgU24cache1_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(HttpRequest_t1845443631_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline Func_2_t1532221928 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline Func_2_t1532221928 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(Func_2_t1532221928 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_10() { return static_cast<int32_t>(offsetof(HttpRequest_t1845443631_StaticFields, ___U3CU3Ef__mgU24cache1_10)); }
	inline Func_2_t557125244 * get_U3CU3Ef__mgU24cache1_10() const { return ___U3CU3Ef__mgU24cache1_10; }
	inline Func_2_t557125244 ** get_address_of_U3CU3Ef__mgU24cache1_10() { return &___U3CU3Ef__mgU24cache1_10; }
	inline void set_U3CU3Ef__mgU24cache1_10(Func_2_t557125244 * value)
	{
		___U3CU3Ef__mgU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
