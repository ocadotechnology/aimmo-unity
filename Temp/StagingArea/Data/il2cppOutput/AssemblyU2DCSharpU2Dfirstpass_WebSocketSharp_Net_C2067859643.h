#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebSocketSharp.Net.Chunk>
struct List_1_t1673048283;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_In126533044.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.ChunkStream
struct  ChunkStream_t2067859643  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.Net.ChunkStream::_chunkRead
	int32_t ____chunkRead_0;
	// System.Int32 WebSocketSharp.Net.ChunkStream::_chunkSize
	int32_t ____chunkSize_1;
	// System.Collections.Generic.List`1<WebSocketSharp.Net.Chunk> WebSocketSharp.Net.ChunkStream::_chunks
	List_1_t1673048283 * ____chunks_2;
	// System.Boolean WebSocketSharp.Net.ChunkStream::_gotIt
	bool ____gotIt_3;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.ChunkStream::_headers
	WebHeaderCollection_t1932982249 * ____headers_4;
	// System.Text.StringBuilder WebSocketSharp.Net.ChunkStream::_saved
	StringBuilder_t1221177846 * ____saved_5;
	// System.Boolean WebSocketSharp.Net.ChunkStream::_sawCr
	bool ____sawCr_6;
	// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::_state
	int32_t ____state_7;
	// System.Int32 WebSocketSharp.Net.ChunkStream::_trailerState
	int32_t ____trailerState_8;

public:
	inline static int32_t get_offset_of__chunkRead_0() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____chunkRead_0)); }
	inline int32_t get__chunkRead_0() const { return ____chunkRead_0; }
	inline int32_t* get_address_of__chunkRead_0() { return &____chunkRead_0; }
	inline void set__chunkRead_0(int32_t value)
	{
		____chunkRead_0 = value;
	}

	inline static int32_t get_offset_of__chunkSize_1() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____chunkSize_1)); }
	inline int32_t get__chunkSize_1() const { return ____chunkSize_1; }
	inline int32_t* get_address_of__chunkSize_1() { return &____chunkSize_1; }
	inline void set__chunkSize_1(int32_t value)
	{
		____chunkSize_1 = value;
	}

	inline static int32_t get_offset_of__chunks_2() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____chunks_2)); }
	inline List_1_t1673048283 * get__chunks_2() const { return ____chunks_2; }
	inline List_1_t1673048283 ** get_address_of__chunks_2() { return &____chunks_2; }
	inline void set__chunks_2(List_1_t1673048283 * value)
	{
		____chunks_2 = value;
		Il2CppCodeGenWriteBarrier(&____chunks_2, value);
	}

	inline static int32_t get_offset_of__gotIt_3() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____gotIt_3)); }
	inline bool get__gotIt_3() const { return ____gotIt_3; }
	inline bool* get_address_of__gotIt_3() { return &____gotIt_3; }
	inline void set__gotIt_3(bool value)
	{
		____gotIt_3 = value;
	}

	inline static int32_t get_offset_of__headers_4() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____headers_4)); }
	inline WebHeaderCollection_t1932982249 * get__headers_4() const { return ____headers_4; }
	inline WebHeaderCollection_t1932982249 ** get_address_of__headers_4() { return &____headers_4; }
	inline void set__headers_4(WebHeaderCollection_t1932982249 * value)
	{
		____headers_4 = value;
		Il2CppCodeGenWriteBarrier(&____headers_4, value);
	}

	inline static int32_t get_offset_of__saved_5() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____saved_5)); }
	inline StringBuilder_t1221177846 * get__saved_5() const { return ____saved_5; }
	inline StringBuilder_t1221177846 ** get_address_of__saved_5() { return &____saved_5; }
	inline void set__saved_5(StringBuilder_t1221177846 * value)
	{
		____saved_5 = value;
		Il2CppCodeGenWriteBarrier(&____saved_5, value);
	}

	inline static int32_t get_offset_of__sawCr_6() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____sawCr_6)); }
	inline bool get__sawCr_6() const { return ____sawCr_6; }
	inline bool* get_address_of__sawCr_6() { return &____sawCr_6; }
	inline void set__sawCr_6(bool value)
	{
		____sawCr_6 = value;
	}

	inline static int32_t get_offset_of__state_7() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____state_7)); }
	inline int32_t get__state_7() const { return ____state_7; }
	inline int32_t* get_address_of__state_7() { return &____state_7; }
	inline void set__state_7(int32_t value)
	{
		____state_7 = value;
	}

	inline static int32_t get_offset_of__trailerState_8() { return static_cast<int32_t>(offsetof(ChunkStream_t2067859643, ____trailerState_8)); }
	inline int32_t get__trailerState_8() const { return ____trailerState_8; }
	inline int32_t* get_address_of__trailerState_8() { return &____trailerState_8; }
	inline void set__trailerState_8(int32_t value)
	{
		____trailerState_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
