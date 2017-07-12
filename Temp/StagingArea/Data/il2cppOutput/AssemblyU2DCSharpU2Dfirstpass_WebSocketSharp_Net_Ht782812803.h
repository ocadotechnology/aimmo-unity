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
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Exception
struct Exception_t1927440687;
// System.Object
struct Il2CppObject;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpStreamAsyncResult
struct  HttpStreamAsyncResult_t782812803  : public Il2CppObject
{
public:
	// System.Byte[] WebSocketSharp.Net.HttpStreamAsyncResult::_buffer
	ByteU5BU5D_t3397334013* ____buffer_0;
	// System.AsyncCallback WebSocketSharp.Net.HttpStreamAsyncResult::_callback
	AsyncCallback_t163412349 * ____callback_1;
	// System.Boolean WebSocketSharp.Net.HttpStreamAsyncResult::_completed
	bool ____completed_2;
	// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::_count
	int32_t ____count_3;
	// System.Exception WebSocketSharp.Net.HttpStreamAsyncResult::_exception
	Exception_t1927440687 * ____exception_4;
	// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::_offset
	int32_t ____offset_5;
	// System.Object WebSocketSharp.Net.HttpStreamAsyncResult::_state
	Il2CppObject * ____state_6;
	// System.Object WebSocketSharp.Net.HttpStreamAsyncResult::_sync
	Il2CppObject * ____sync_7;
	// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::_syncRead
	int32_t ____syncRead_8;
	// System.Threading.ManualResetEvent WebSocketSharp.Net.HttpStreamAsyncResult::_waitHandle
	ManualResetEvent_t926074657 * ____waitHandle_9;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____buffer_0)); }
	inline ByteU5BU5D_t3397334013* get__buffer_0() const { return ____buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(ByteU5BU5D_t3397334013* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_0, value);
	}

	inline static int32_t get_offset_of__callback_1() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____callback_1)); }
	inline AsyncCallback_t163412349 * get__callback_1() const { return ____callback_1; }
	inline AsyncCallback_t163412349 ** get_address_of__callback_1() { return &____callback_1; }
	inline void set__callback_1(AsyncCallback_t163412349 * value)
	{
		____callback_1 = value;
		Il2CppCodeGenWriteBarrier(&____callback_1, value);
	}

	inline static int32_t get_offset_of__completed_2() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____completed_2)); }
	inline bool get__completed_2() const { return ____completed_2; }
	inline bool* get_address_of__completed_2() { return &____completed_2; }
	inline void set__completed_2(bool value)
	{
		____completed_2 = value;
	}

	inline static int32_t get_offset_of__count_3() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____count_3)); }
	inline int32_t get__count_3() const { return ____count_3; }
	inline int32_t* get_address_of__count_3() { return &____count_3; }
	inline void set__count_3(int32_t value)
	{
		____count_3 = value;
	}

	inline static int32_t get_offset_of__exception_4() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____exception_4)); }
	inline Exception_t1927440687 * get__exception_4() const { return ____exception_4; }
	inline Exception_t1927440687 ** get_address_of__exception_4() { return &____exception_4; }
	inline void set__exception_4(Exception_t1927440687 * value)
	{
		____exception_4 = value;
		Il2CppCodeGenWriteBarrier(&____exception_4, value);
	}

	inline static int32_t get_offset_of__offset_5() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____offset_5)); }
	inline int32_t get__offset_5() const { return ____offset_5; }
	inline int32_t* get_address_of__offset_5() { return &____offset_5; }
	inline void set__offset_5(int32_t value)
	{
		____offset_5 = value;
	}

	inline static int32_t get_offset_of__state_6() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____state_6)); }
	inline Il2CppObject * get__state_6() const { return ____state_6; }
	inline Il2CppObject ** get_address_of__state_6() { return &____state_6; }
	inline void set__state_6(Il2CppObject * value)
	{
		____state_6 = value;
		Il2CppCodeGenWriteBarrier(&____state_6, value);
	}

	inline static int32_t get_offset_of__sync_7() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____sync_7)); }
	inline Il2CppObject * get__sync_7() const { return ____sync_7; }
	inline Il2CppObject ** get_address_of__sync_7() { return &____sync_7; }
	inline void set__sync_7(Il2CppObject * value)
	{
		____sync_7 = value;
		Il2CppCodeGenWriteBarrier(&____sync_7, value);
	}

	inline static int32_t get_offset_of__syncRead_8() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____syncRead_8)); }
	inline int32_t get__syncRead_8() const { return ____syncRead_8; }
	inline int32_t* get_address_of__syncRead_8() { return &____syncRead_8; }
	inline void set__syncRead_8(int32_t value)
	{
		____syncRead_8 = value;
	}

	inline static int32_t get_offset_of__waitHandle_9() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t782812803, ____waitHandle_9)); }
	inline ManualResetEvent_t926074657 * get__waitHandle_9() const { return ____waitHandle_9; }
	inline ManualResetEvent_t926074657 ** get_address_of__waitHandle_9() { return &____waitHandle_9; }
	inline void set__waitHandle_9(ManualResetEvent_t926074657 * value)
	{
		____waitHandle_9 = value;
		Il2CppCodeGenWriteBarrier(&____waitHandle_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
