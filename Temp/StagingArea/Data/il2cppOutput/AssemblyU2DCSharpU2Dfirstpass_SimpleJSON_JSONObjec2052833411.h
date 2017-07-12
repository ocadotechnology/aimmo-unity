#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJSON.JSONObject
struct JSONObject_t3061402583;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En190246304.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_922534120.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONObject/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2052833411  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject/<>c__Iterator0::$locvar0
	Enumerator_t190246304  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject/<>c__Iterator0::<N>__0
	KeyValuePair_2_t922534120  ___U3CNU3E__0_1;
	// SimpleJSON.JSONObject SimpleJSON.JSONObject/<>c__Iterator0::$this
	JSONObject_t3061402583 * ___U24this_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<>c__Iterator0::$current
	JSONNode_t1250409636 * ___U24current_3;
	// System.Boolean SimpleJSON.JSONObject/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONObject/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2052833411, ___U24locvar0_0)); }
	inline Enumerator_t190246304  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t190246304 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t190246304  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2052833411, ___U3CNU3E__0_1)); }
	inline KeyValuePair_2_t922534120  get_U3CNU3E__0_1() const { return ___U3CNU3E__0_1; }
	inline KeyValuePair_2_t922534120 * get_address_of_U3CNU3E__0_1() { return &___U3CNU3E__0_1; }
	inline void set_U3CNU3E__0_1(KeyValuePair_2_t922534120  value)
	{
		___U3CNU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2052833411, ___U24this_2)); }
	inline JSONObject_t3061402583 * get_U24this_2() const { return ___U24this_2; }
	inline JSONObject_t3061402583 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONObject_t3061402583 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2052833411, ___U24current_3)); }
	inline JSONNode_t1250409636 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t1250409636 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t1250409636 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2052833411, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2052833411, ___U24PC_5)); }
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
