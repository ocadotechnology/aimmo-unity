#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebSocketSharp.Net.Cookie>
struct List_1_t1195309592;
// System.Object
struct Il2CppObject;
// System.Comparison`1<WebSocketSharp.Net.Cookie>
struct Comparison_1_t3087927311;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.CookieCollection
struct  CookieCollection_t4248997468  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::_list
	List_1_t1195309592 * ____list_0;
	// System.Object WebSocketSharp.Net.CookieCollection::_sync
	Il2CppObject * ____sync_1;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CookieCollection_t4248997468, ____list_0)); }
	inline List_1_t1195309592 * get__list_0() const { return ____list_0; }
	inline List_1_t1195309592 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(List_1_t1195309592 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}

	inline static int32_t get_offset_of__sync_1() { return static_cast<int32_t>(offsetof(CookieCollection_t4248997468, ____sync_1)); }
	inline Il2CppObject * get__sync_1() const { return ____sync_1; }
	inline Il2CppObject ** get_address_of__sync_1() { return &____sync_1; }
	inline void set__sync_1(Il2CppObject * value)
	{
		____sync_1 = value;
		Il2CppCodeGenWriteBarrier(&____sync_1, value);
	}
};

struct CookieCollection_t4248997468_StaticFields
{
public:
	// System.Comparison`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::<>f__mg$cache0
	Comparison_1_t3087927311 * ___U3CU3Ef__mgU24cache0_2;
	// System.Comparison`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::<>f__mg$cache1
	Comparison_1_t3087927311 * ___U3CU3Ef__mgU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(CookieCollection_t4248997468_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Comparison_1_t3087927311 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Comparison_1_t3087927311 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Comparison_1_t3087927311 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_3() { return static_cast<int32_t>(offsetof(CookieCollection_t4248997468_StaticFields, ___U3CU3Ef__mgU24cache1_3)); }
	inline Comparison_1_t3087927311 * get_U3CU3Ef__mgU24cache1_3() const { return ___U3CU3Ef__mgU24cache1_3; }
	inline Comparison_1_t3087927311 ** get_address_of_U3CU3Ef__mgU24cache1_3() { return &___U3CU3Ef__mgU24cache1_3; }
	inline void set_U3CU3Ef__mgU24cache1_3(Comparison_1_t3087927311 * value)
	{
		___U3CU3Ef__mgU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
