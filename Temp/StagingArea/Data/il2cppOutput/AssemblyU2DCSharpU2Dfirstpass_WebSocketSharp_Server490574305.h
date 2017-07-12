#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.Threading.Thread
struct Thread_t241561612;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1683165547;
// System.Object
struct Il2CppObject;
// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>
struct EventHandler_1_t3804744336;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Serve3054640078.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.HttpServer
struct  HttpServer_t490574305  : public Il2CppObject
{
public:
	// System.Net.IPAddress WebSocketSharp.Server.HttpServer::_address
	IPAddress_t1399971723 * ____address_0;
	// System.String WebSocketSharp.Server.HttpServer::_hostname
	String_t* ____hostname_1;
	// WebSocketSharp.Net.HttpListener WebSocketSharp.Server.HttpServer::_listener
	HttpListener_t4179429670 * ____listener_2;
	// WebSocketSharp.Logger WebSocketSharp.Server.HttpServer::_logger
	Logger_t2598199114 * ____logger_3;
	// System.Int32 WebSocketSharp.Server.HttpServer::_port
	int32_t ____port_4;
	// System.Threading.Thread WebSocketSharp.Server.HttpServer::_receiveThread
	Thread_t241561612 * ____receiveThread_5;
	// System.String WebSocketSharp.Server.HttpServer::_rootPath
	String_t* ____rootPath_6;
	// System.Boolean WebSocketSharp.Server.HttpServer::_secure
	bool ____secure_7;
	// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.HttpServer::_services
	WebSocketServiceManager_t1683165547 * ____services_8;
	// WebSocketSharp.Server.ServerState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.HttpServer::_state
	int32_t ____state_9;
	// System.Object WebSocketSharp.Server.HttpServer::_sync
	Il2CppObject * ____sync_10;
	// System.Boolean WebSocketSharp.Server.HttpServer::_windows
	bool ____windows_11;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnConnect
	EventHandler_1_t3804744336 * ___OnConnect_12;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnDelete
	EventHandler_1_t3804744336 * ___OnDelete_13;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnGet
	EventHandler_1_t3804744336 * ___OnGet_14;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnHead
	EventHandler_1_t3804744336 * ___OnHead_15;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnOptions
	EventHandler_1_t3804744336 * ___OnOptions_16;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnPatch
	EventHandler_1_t3804744336 * ___OnPatch_17;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnPost
	EventHandler_1_t3804744336 * ___OnPost_18;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnPut
	EventHandler_1_t3804744336 * ___OnPut_19;
	// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs> WebSocketSharp.Server.HttpServer::OnTrace
	EventHandler_1_t3804744336 * ___OnTrace_20;

public:
	inline static int32_t get_offset_of__address_0() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____address_0)); }
	inline IPAddress_t1399971723 * get__address_0() const { return ____address_0; }
	inline IPAddress_t1399971723 ** get_address_of__address_0() { return &____address_0; }
	inline void set__address_0(IPAddress_t1399971723 * value)
	{
		____address_0 = value;
		Il2CppCodeGenWriteBarrier(&____address_0, value);
	}

	inline static int32_t get_offset_of__hostname_1() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____hostname_1)); }
	inline String_t* get__hostname_1() const { return ____hostname_1; }
	inline String_t** get_address_of__hostname_1() { return &____hostname_1; }
	inline void set__hostname_1(String_t* value)
	{
		____hostname_1 = value;
		Il2CppCodeGenWriteBarrier(&____hostname_1, value);
	}

	inline static int32_t get_offset_of__listener_2() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____listener_2)); }
	inline HttpListener_t4179429670 * get__listener_2() const { return ____listener_2; }
	inline HttpListener_t4179429670 ** get_address_of__listener_2() { return &____listener_2; }
	inline void set__listener_2(HttpListener_t4179429670 * value)
	{
		____listener_2 = value;
		Il2CppCodeGenWriteBarrier(&____listener_2, value);
	}

	inline static int32_t get_offset_of__logger_3() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____logger_3)); }
	inline Logger_t2598199114 * get__logger_3() const { return ____logger_3; }
	inline Logger_t2598199114 ** get_address_of__logger_3() { return &____logger_3; }
	inline void set__logger_3(Logger_t2598199114 * value)
	{
		____logger_3 = value;
		Il2CppCodeGenWriteBarrier(&____logger_3, value);
	}

	inline static int32_t get_offset_of__port_4() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____port_4)); }
	inline int32_t get__port_4() const { return ____port_4; }
	inline int32_t* get_address_of__port_4() { return &____port_4; }
	inline void set__port_4(int32_t value)
	{
		____port_4 = value;
	}

	inline static int32_t get_offset_of__receiveThread_5() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____receiveThread_5)); }
	inline Thread_t241561612 * get__receiveThread_5() const { return ____receiveThread_5; }
	inline Thread_t241561612 ** get_address_of__receiveThread_5() { return &____receiveThread_5; }
	inline void set__receiveThread_5(Thread_t241561612 * value)
	{
		____receiveThread_5 = value;
		Il2CppCodeGenWriteBarrier(&____receiveThread_5, value);
	}

	inline static int32_t get_offset_of__rootPath_6() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____rootPath_6)); }
	inline String_t* get__rootPath_6() const { return ____rootPath_6; }
	inline String_t** get_address_of__rootPath_6() { return &____rootPath_6; }
	inline void set__rootPath_6(String_t* value)
	{
		____rootPath_6 = value;
		Il2CppCodeGenWriteBarrier(&____rootPath_6, value);
	}

	inline static int32_t get_offset_of__secure_7() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____secure_7)); }
	inline bool get__secure_7() const { return ____secure_7; }
	inline bool* get_address_of__secure_7() { return &____secure_7; }
	inline void set__secure_7(bool value)
	{
		____secure_7 = value;
	}

	inline static int32_t get_offset_of__services_8() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____services_8)); }
	inline WebSocketServiceManager_t1683165547 * get__services_8() const { return ____services_8; }
	inline WebSocketServiceManager_t1683165547 ** get_address_of__services_8() { return &____services_8; }
	inline void set__services_8(WebSocketServiceManager_t1683165547 * value)
	{
		____services_8 = value;
		Il2CppCodeGenWriteBarrier(&____services_8, value);
	}

	inline static int32_t get_offset_of__state_9() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____state_9)); }
	inline int32_t get__state_9() const { return ____state_9; }
	inline int32_t* get_address_of__state_9() { return &____state_9; }
	inline void set__state_9(int32_t value)
	{
		____state_9 = value;
	}

	inline static int32_t get_offset_of__sync_10() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____sync_10)); }
	inline Il2CppObject * get__sync_10() const { return ____sync_10; }
	inline Il2CppObject ** get_address_of__sync_10() { return &____sync_10; }
	inline void set__sync_10(Il2CppObject * value)
	{
		____sync_10 = value;
		Il2CppCodeGenWriteBarrier(&____sync_10, value);
	}

	inline static int32_t get_offset_of__windows_11() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ____windows_11)); }
	inline bool get__windows_11() const { return ____windows_11; }
	inline bool* get_address_of__windows_11() { return &____windows_11; }
	inline void set__windows_11(bool value)
	{
		____windows_11 = value;
	}

	inline static int32_t get_offset_of_OnConnect_12() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnConnect_12)); }
	inline EventHandler_1_t3804744336 * get_OnConnect_12() const { return ___OnConnect_12; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnConnect_12() { return &___OnConnect_12; }
	inline void set_OnConnect_12(EventHandler_1_t3804744336 * value)
	{
		___OnConnect_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnConnect_12, value);
	}

	inline static int32_t get_offset_of_OnDelete_13() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnDelete_13)); }
	inline EventHandler_1_t3804744336 * get_OnDelete_13() const { return ___OnDelete_13; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnDelete_13() { return &___OnDelete_13; }
	inline void set_OnDelete_13(EventHandler_1_t3804744336 * value)
	{
		___OnDelete_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnDelete_13, value);
	}

	inline static int32_t get_offset_of_OnGet_14() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnGet_14)); }
	inline EventHandler_1_t3804744336 * get_OnGet_14() const { return ___OnGet_14; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnGet_14() { return &___OnGet_14; }
	inline void set_OnGet_14(EventHandler_1_t3804744336 * value)
	{
		___OnGet_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnGet_14, value);
	}

	inline static int32_t get_offset_of_OnHead_15() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnHead_15)); }
	inline EventHandler_1_t3804744336 * get_OnHead_15() const { return ___OnHead_15; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnHead_15() { return &___OnHead_15; }
	inline void set_OnHead_15(EventHandler_1_t3804744336 * value)
	{
		___OnHead_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnHead_15, value);
	}

	inline static int32_t get_offset_of_OnOptions_16() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnOptions_16)); }
	inline EventHandler_1_t3804744336 * get_OnOptions_16() const { return ___OnOptions_16; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnOptions_16() { return &___OnOptions_16; }
	inline void set_OnOptions_16(EventHandler_1_t3804744336 * value)
	{
		___OnOptions_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnOptions_16, value);
	}

	inline static int32_t get_offset_of_OnPatch_17() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnPatch_17)); }
	inline EventHandler_1_t3804744336 * get_OnPatch_17() const { return ___OnPatch_17; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnPatch_17() { return &___OnPatch_17; }
	inline void set_OnPatch_17(EventHandler_1_t3804744336 * value)
	{
		___OnPatch_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnPatch_17, value);
	}

	inline static int32_t get_offset_of_OnPost_18() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnPost_18)); }
	inline EventHandler_1_t3804744336 * get_OnPost_18() const { return ___OnPost_18; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnPost_18() { return &___OnPost_18; }
	inline void set_OnPost_18(EventHandler_1_t3804744336 * value)
	{
		___OnPost_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnPost_18, value);
	}

	inline static int32_t get_offset_of_OnPut_19() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnPut_19)); }
	inline EventHandler_1_t3804744336 * get_OnPut_19() const { return ___OnPut_19; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnPut_19() { return &___OnPut_19; }
	inline void set_OnPut_19(EventHandler_1_t3804744336 * value)
	{
		___OnPut_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnPut_19, value);
	}

	inline static int32_t get_offset_of_OnTrace_20() { return static_cast<int32_t>(offsetof(HttpServer_t490574305, ___OnTrace_20)); }
	inline EventHandler_1_t3804744336 * get_OnTrace_20() const { return ___OnTrace_20; }
	inline EventHandler_1_t3804744336 ** get_address_of_OnTrace_20() { return &___OnTrace_20; }
	inline void set_OnTrace_20(EventHandler_1_t3804744336 * value)
	{
		___OnTrace_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrace_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
