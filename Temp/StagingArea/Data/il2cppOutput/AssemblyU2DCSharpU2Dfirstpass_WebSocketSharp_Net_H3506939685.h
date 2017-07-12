#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.AsyncCallback
struct AsyncCallback_t163412349;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
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

// WebSocketSharp.Net.HttpListenerAsyncResult
struct  HttpListenerAsyncResult_t3506939685  : public Il2CppObject
{
public:
	// System.AsyncCallback WebSocketSharp.Net.HttpListenerAsyncResult::_callback
	AsyncCallback_t163412349 * ____callback_0;
	// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::_completed
	bool ____completed_1;
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListenerAsyncResult::_context
	HttpListenerContext_t994708409 * ____context_2;
	// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::_endCalled
	bool ____endCalled_3;
	// System.Exception WebSocketSharp.Net.HttpListenerAsyncResult::_exception
	Exception_t1927440687 * ____exception_4;
	// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::_inGet
	bool ____inGet_5;
	// System.Object WebSocketSharp.Net.HttpListenerAsyncResult::_state
	Il2CppObject * ____state_6;
	// System.Object WebSocketSharp.Net.HttpListenerAsyncResult::_sync
	Il2CppObject * ____sync_7;
	// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::_syncCompleted
	bool ____syncCompleted_8;
	// System.Threading.ManualResetEvent WebSocketSharp.Net.HttpListenerAsyncResult::_waitHandle
	ManualResetEvent_t926074657 * ____waitHandle_9;

public:
	inline static int32_t get_offset_of__callback_0() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____callback_0)); }
	inline AsyncCallback_t163412349 * get__callback_0() const { return ____callback_0; }
	inline AsyncCallback_t163412349 ** get_address_of__callback_0() { return &____callback_0; }
	inline void set__callback_0(AsyncCallback_t163412349 * value)
	{
		____callback_0 = value;
		Il2CppCodeGenWriteBarrier(&____callback_0, value);
	}

	inline static int32_t get_offset_of__completed_1() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____completed_1)); }
	inline bool get__completed_1() const { return ____completed_1; }
	inline bool* get_address_of__completed_1() { return &____completed_1; }
	inline void set__completed_1(bool value)
	{
		____completed_1 = value;
	}

	inline static int32_t get_offset_of__context_2() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____context_2)); }
	inline HttpListenerContext_t994708409 * get__context_2() const { return ____context_2; }
	inline HttpListenerContext_t994708409 ** get_address_of__context_2() { return &____context_2; }
	inline void set__context_2(HttpListenerContext_t994708409 * value)
	{
		____context_2 = value;
		Il2CppCodeGenWriteBarrier(&____context_2, value);
	}

	inline static int32_t get_offset_of__endCalled_3() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____endCalled_3)); }
	inline bool get__endCalled_3() const { return ____endCalled_3; }
	inline bool* get_address_of__endCalled_3() { return &____endCalled_3; }
	inline void set__endCalled_3(bool value)
	{
		____endCalled_3 = value;
	}

	inline static int32_t get_offset_of__exception_4() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____exception_4)); }
	inline Exception_t1927440687 * get__exception_4() const { return ____exception_4; }
	inline Exception_t1927440687 ** get_address_of__exception_4() { return &____exception_4; }
	inline void set__exception_4(Exception_t1927440687 * value)
	{
		____exception_4 = value;
		Il2CppCodeGenWriteBarrier(&____exception_4, value);
	}

	inline static int32_t get_offset_of__inGet_5() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____inGet_5)); }
	inline bool get__inGet_5() const { return ____inGet_5; }
	inline bool* get_address_of__inGet_5() { return &____inGet_5; }
	inline void set__inGet_5(bool value)
	{
		____inGet_5 = value;
	}

	inline static int32_t get_offset_of__state_6() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____state_6)); }
	inline Il2CppObject * get__state_6() const { return ____state_6; }
	inline Il2CppObject ** get_address_of__state_6() { return &____state_6; }
	inline void set__state_6(Il2CppObject * value)
	{
		____state_6 = value;
		Il2CppCodeGenWriteBarrier(&____state_6, value);
	}

	inline static int32_t get_offset_of__sync_7() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____sync_7)); }
	inline Il2CppObject * get__sync_7() const { return ____sync_7; }
	inline Il2CppObject ** get_address_of__sync_7() { return &____sync_7; }
	inline void set__sync_7(Il2CppObject * value)
	{
		____sync_7 = value;
		Il2CppCodeGenWriteBarrier(&____sync_7, value);
	}

	inline static int32_t get_offset_of__syncCompleted_8() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____syncCompleted_8)); }
	inline bool get__syncCompleted_8() const { return ____syncCompleted_8; }
	inline bool* get_address_of__syncCompleted_8() { return &____syncCompleted_8; }
	inline void set__syncCompleted_8(bool value)
	{
		____syncCompleted_8 = value;
	}

	inline static int32_t get_offset_of__waitHandle_9() { return static_cast<int32_t>(offsetof(HttpListenerAsyncResult_t3506939685, ____waitHandle_9)); }
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
