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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestObject
struct  TestObject_t623592145  : public Il2CppObject
{
public:
	// System.Int32 TestObject::test
	int32_t ___test_0;
	// System.String TestObject::test2
	String_t* ___test2_1;

public:
	inline static int32_t get_offset_of_test_0() { return static_cast<int32_t>(offsetof(TestObject_t623592145, ___test_0)); }
	inline int32_t get_test_0() const { return ___test_0; }
	inline int32_t* get_address_of_test_0() { return &___test_0; }
	inline void set_test_0(int32_t value)
	{
		___test_0 = value;
	}

	inline static int32_t get_offset_of_test2_1() { return static_cast<int32_t>(offsetof(TestObject_t623592145, ___test2_1)); }
	inline String_t* get_test2_1() const { return ___test2_1; }
	inline String_t** get_address_of_test2_1() { return &___test2_1; }
	inline void set_test2_1(String_t* value)
	{
		___test2_1 = value;
		Il2CppCodeGenWriteBarrier(&___test2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
