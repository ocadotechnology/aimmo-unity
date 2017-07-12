#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// WebSocketSharp.Server.WebSocketServer
struct WebSocketServer_t2522399002;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketServer/<receiveRequest>c__AnonStorey0
struct  U3CreceiveRequestU3Ec__AnonStorey0_t1358907818  : public Il2CppObject
{
public:
	// System.Net.Sockets.TcpClient WebSocketSharp.Server.WebSocketServer/<receiveRequest>c__AnonStorey0::cl
	TcpClient_t408947970 * ___cl_0;
	// WebSocketSharp.Server.WebSocketServer WebSocketSharp.Server.WebSocketServer/<receiveRequest>c__AnonStorey0::$this
	WebSocketServer_t2522399002 * ___U24this_1;

public:
	inline static int32_t get_offset_of_cl_0() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey0_t1358907818, ___cl_0)); }
	inline TcpClient_t408947970 * get_cl_0() const { return ___cl_0; }
	inline TcpClient_t408947970 ** get_address_of_cl_0() { return &___cl_0; }
	inline void set_cl_0(TcpClient_t408947970 * value)
	{
		___cl_0 = value;
		Il2CppCodeGenWriteBarrier(&___cl_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey0_t1358907818, ___U24this_1)); }
	inline WebSocketServer_t2522399002 * get_U24this_1() const { return ___U24this_1; }
	inline WebSocketServer_t2522399002 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(WebSocketServer_t2522399002 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
