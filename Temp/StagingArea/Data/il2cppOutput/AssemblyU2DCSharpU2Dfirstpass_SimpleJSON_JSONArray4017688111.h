#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat154260442.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t4017688111  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator0::$locvar0
	Enumerator_t154260442  ___U24locvar0_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::<N>__0
	JSONNode_t1250409636 * ___U3CNU3E__0_1;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<>c__Iterator0::$this
	JSONArray_t3986483147 * ___U24this_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::$current
	JSONNode_t1250409636 * ___U24current_3;
	// System.Boolean SimpleJSON.JSONArray/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONArray/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t4017688111, ___U24locvar0_0)); }
	inline Enumerator_t154260442  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t154260442 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t154260442  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t4017688111, ___U3CNU3E__0_1)); }
	inline JSONNode_t1250409636 * get_U3CNU3E__0_1() const { return ___U3CNU3E__0_1; }
	inline JSONNode_t1250409636 ** get_address_of_U3CNU3E__0_1() { return &___U3CNU3E__0_1; }
	inline void set_U3CNU3E__0_1(JSONNode_t1250409636 * value)
	{
		___U3CNU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t4017688111, ___U24this_2)); }
	inline JSONArray_t3986483147 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t3986483147 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t3986483147 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t4017688111, ___U24current_3)); }
	inline JSONNode_t1250409636 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t1250409636 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t1250409636 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t4017688111, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t4017688111, ___U24PC_5)); }
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
