#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t994708409;
// WebSocketSharp.Server.HttpServer
struct HttpServer_t490574305;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.HttpServer/<receiveRequest>c__AnonStorey0
struct  U3CreceiveRequestU3Ec__AnonStorey0_t2614482259  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Server.HttpServer/<receiveRequest>c__AnonStorey0::ctx
	HttpListenerContext_t994708409 * ___ctx_0;
	// WebSocketSharp.Server.HttpServer WebSocketSharp.Server.HttpServer/<receiveRequest>c__AnonStorey0::$this
	HttpServer_t490574305 * ___U24this_1;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey0_t2614482259, ___ctx_0)); }
	inline HttpListenerContext_t994708409 * get_ctx_0() const { return ___ctx_0; }
	inline HttpListenerContext_t994708409 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(HttpListenerContext_t994708409 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey0_t2614482259, ___U24this_1)); }
	inline HttpServer_t490574305 * get_U24this_1() const { return ___U24this_1; }
	inline HttpServer_t490574305 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(HttpServer_t490574305 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
