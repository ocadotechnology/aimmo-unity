#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t2802512518;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2765411386.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23497699202.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketSessionManager/<>c__Iterator1
struct  U3CU3Ec__Iterator1_t949754915  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager/<>c__Iterator1::$locvar0
	Enumerator_t2765411386  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager/<>c__Iterator1::<res>__0
	KeyValuePair_2_t3497699202  ___U3CresU3E__0_1;
	// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketSessionManager/<>c__Iterator1::$this
	WebSocketSessionManager_t2802512518 * ___U24this_2;
	// System.String WebSocketSharp.Server.WebSocketSessionManager/<>c__Iterator1::$current
	String_t* ___U24current_3;
	// System.Boolean WebSocketSharp.Server.WebSocketSessionManager/<>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 WebSocketSharp.Server.WebSocketSessionManager/<>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t949754915, ___U24locvar0_0)); }
	inline Enumerator_t2765411386  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t2765411386 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t2765411386  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CresU3E__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t949754915, ___U3CresU3E__0_1)); }
	inline KeyValuePair_2_t3497699202  get_U3CresU3E__0_1() const { return ___U3CresU3E__0_1; }
	inline KeyValuePair_2_t3497699202 * get_address_of_U3CresU3E__0_1() { return &___U3CresU3E__0_1; }
	inline void set_U3CresU3E__0_1(KeyValuePair_2_t3497699202  value)
	{
		___U3CresU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t949754915, ___U24this_2)); }
	inline WebSocketSessionManager_t2802512518 * get_U24this_2() const { return ___U24this_2; }
	inline WebSocketSessionManager_t2802512518 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(WebSocketSessionManager_t2802512518 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t949754915, ___U24current_3)); }
	inline String_t* get_U24current_3() const { return ___U24current_3; }
	inline String_t** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(String_t* value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t949754915, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t949754915, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
