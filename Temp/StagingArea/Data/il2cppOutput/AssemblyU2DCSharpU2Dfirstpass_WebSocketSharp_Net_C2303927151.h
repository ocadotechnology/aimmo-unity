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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.Chunk
struct  Chunk_t2303927151  : public Il2CppObject
{
public:
	// System.Byte[] WebSocketSharp.Net.Chunk::_data
	ByteU5BU5D_t3397334013* ____data_0;
	// System.Int32 WebSocketSharp.Net.Chunk::_offset
	int32_t ____offset_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(Chunk_t2303927151, ____data_0)); }
	inline ByteU5BU5D_t3397334013* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_t3397334013* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier(&____data_0, value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(Chunk_t2303927151, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
