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
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0
struct  U3CSplitHeaderValueU3Ec__Iterator0_t2473694690  : public Il2CppObject
{
public:
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::value
	String_t* ___value_0;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::<len>__0
	int32_t ___U3ClenU3E__0_1;
	// System.Char[] WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::separators
	CharU5BU5D_t1328083999* ___separators_2;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::<seps>__1
	String_t* ___U3CsepsU3E__1_3;
	// System.Text.StringBuilder WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::<buff>__2
	StringBuilder_t1221177846 * ___U3CbuffU3E__2_4;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::<escaped>__3
	bool ___U3CescapedU3E__3_5;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::<quoted>__4
	bool ___U3CquotedU3E__4_6;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::<i>__5
	int32_t ___U3CiU3E__5_7;
	// System.Char WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::<c>__6
	Il2CppChar ___U3CcU3E__6_8;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::$current
	String_t* ___U24current_9;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::$disposing
	bool ___U24disposing_10;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}

	inline static int32_t get_offset_of_U3ClenU3E__0_1() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U3ClenU3E__0_1)); }
	inline int32_t get_U3ClenU3E__0_1() const { return ___U3ClenU3E__0_1; }
	inline int32_t* get_address_of_U3ClenU3E__0_1() { return &___U3ClenU3E__0_1; }
	inline void set_U3ClenU3E__0_1(int32_t value)
	{
		___U3ClenU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_separators_2() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___separators_2)); }
	inline CharU5BU5D_t1328083999* get_separators_2() const { return ___separators_2; }
	inline CharU5BU5D_t1328083999** get_address_of_separators_2() { return &___separators_2; }
	inline void set_separators_2(CharU5BU5D_t1328083999* value)
	{
		___separators_2 = value;
		Il2CppCodeGenWriteBarrier(&___separators_2, value);
	}

	inline static int32_t get_offset_of_U3CsepsU3E__1_3() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U3CsepsU3E__1_3)); }
	inline String_t* get_U3CsepsU3E__1_3() const { return ___U3CsepsU3E__1_3; }
	inline String_t** get_address_of_U3CsepsU3E__1_3() { return &___U3CsepsU3E__1_3; }
	inline void set_U3CsepsU3E__1_3(String_t* value)
	{
		___U3CsepsU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsepsU3E__1_3, value);
	}

	inline static int32_t get_offset_of_U3CbuffU3E__2_4() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U3CbuffU3E__2_4)); }
	inline StringBuilder_t1221177846 * get_U3CbuffU3E__2_4() const { return ___U3CbuffU3E__2_4; }
	inline StringBuilder_t1221177846 ** get_address_of_U3CbuffU3E__2_4() { return &___U3CbuffU3E__2_4; }
	inline void set_U3CbuffU3E__2_4(StringBuilder_t1221177846 * value)
	{
		___U3CbuffU3E__2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbuffU3E__2_4, value);
	}

	inline static int32_t get_offset_of_U3CescapedU3E__3_5() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U3CescapedU3E__3_5)); }
	inline bool get_U3CescapedU3E__3_5() const { return ___U3CescapedU3E__3_5; }
	inline bool* get_address_of_U3CescapedU3E__3_5() { return &___U3CescapedU3E__3_5; }
	inline void set_U3CescapedU3E__3_5(bool value)
	{
		___U3CescapedU3E__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CquotedU3E__4_6() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U3CquotedU3E__4_6)); }
	inline bool get_U3CquotedU3E__4_6() const { return ___U3CquotedU3E__4_6; }
	inline bool* get_address_of_U3CquotedU3E__4_6() { return &___U3CquotedU3E__4_6; }
	inline void set_U3CquotedU3E__4_6(bool value)
	{
		___U3CquotedU3E__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__5_7() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U3CiU3E__5_7)); }
	inline int32_t get_U3CiU3E__5_7() const { return ___U3CiU3E__5_7; }
	inline int32_t* get_address_of_U3CiU3E__5_7() { return &___U3CiU3E__5_7; }
	inline void set_U3CiU3E__5_7(int32_t value)
	{
		___U3CiU3E__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E__6_8() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U3CcU3E__6_8)); }
	inline Il2CppChar get_U3CcU3E__6_8() const { return ___U3CcU3E__6_8; }
	inline Il2CppChar* get_address_of_U3CcU3E__6_8() { return &___U3CcU3E__6_8; }
	inline void set_U3CcU3E__6_8(Il2CppChar value)
	{
		___U3CcU3E__6_8 = value;
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U24current_9)); }
	inline String_t* get_U24current_9() const { return ___U24current_9; }
	inline String_t** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(String_t* value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_9, value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ec__Iterator0_t2473694690, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
