#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebHeaderCollection/<GetObjectData>c__AnonStorey1
struct  U3CGetObjectDataU3Ec__AnonStorey1_t2338822889  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.SerializationInfo WebSocketSharp.Net.WebHeaderCollection/<GetObjectData>c__AnonStorey1::serializationInfo
	SerializationInfo_t228987430 * ___serializationInfo_0;
	// System.Int32 WebSocketSharp.Net.WebHeaderCollection/<GetObjectData>c__AnonStorey1::cnt
	int32_t ___cnt_1;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<GetObjectData>c__AnonStorey1::$this
	WebHeaderCollection_t1932982249 * ___U24this_2;

public:
	inline static int32_t get_offset_of_serializationInfo_0() { return static_cast<int32_t>(offsetof(U3CGetObjectDataU3Ec__AnonStorey1_t2338822889, ___serializationInfo_0)); }
	inline SerializationInfo_t228987430 * get_serializationInfo_0() const { return ___serializationInfo_0; }
	inline SerializationInfo_t228987430 ** get_address_of_serializationInfo_0() { return &___serializationInfo_0; }
	inline void set_serializationInfo_0(SerializationInfo_t228987430 * value)
	{
		___serializationInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___serializationInfo_0, value);
	}

	inline static int32_t get_offset_of_cnt_1() { return static_cast<int32_t>(offsetof(U3CGetObjectDataU3Ec__AnonStorey1_t2338822889, ___cnt_1)); }
	inline int32_t get_cnt_1() const { return ___cnt_1; }
	inline int32_t* get_address_of_cnt_1() { return &___cnt_1; }
	inline void set_cnt_1(int32_t value)
	{
		___cnt_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetObjectDataU3Ec__AnonStorey1_t2338822889, ___U24this_2)); }
	inline WebHeaderCollection_t1932982249 * get_U24this_2() const { return ___U24this_2; }
	inline WebHeaderCollection_t1932982249 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(WebHeaderCollection_t1932982249 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
