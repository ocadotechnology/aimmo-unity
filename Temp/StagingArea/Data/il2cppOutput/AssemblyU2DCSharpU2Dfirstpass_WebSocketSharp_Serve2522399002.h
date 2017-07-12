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
// System.Net.Sockets.TcpListener
struct TcpListener_t1551297625;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.Threading.Thread
struct Thread_t241561612;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1683165547;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// System.Object
struct Il2CppObject;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t353436505;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Serve3054640078.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketServer
struct  WebSocketServer_t2522399002  : public Il2CppObject
{
public:
	// System.Net.IPAddress WebSocketSharp.Server.WebSocketServer::_address
	IPAddress_t1399971723 * ____address_0;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_allowForwardedRequest
	bool ____allowForwardedRequest_1;
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Server.WebSocketServer::_authSchemes
	int32_t ____authSchemes_2;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_dnsStyle
	bool ____dnsStyle_4;
	// System.String WebSocketSharp.Server.WebSocketServer::_hostname
	String_t* ____hostname_5;
	// System.Net.Sockets.TcpListener WebSocketSharp.Server.WebSocketServer::_listener
	TcpListener_t1551297625 * ____listener_6;
	// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketServer::_logger
	Logger_t2598199114 * ____logger_7;
	// System.Int32 WebSocketSharp.Server.WebSocketServer::_port
	int32_t ____port_8;
	// System.String WebSocketSharp.Server.WebSocketServer::_realm
	String_t* ____realm_9;
	// System.String WebSocketSharp.Server.WebSocketServer::_realmInUse
	String_t* ____realmInUse_10;
	// System.Threading.Thread WebSocketSharp.Server.WebSocketServer::_receiveThread
	Thread_t241561612 * ____receiveThread_11;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_reuseAddress
	bool ____reuseAddress_12;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_secure
	bool ____secure_13;
	// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.WebSocketServer::_services
	WebSocketServiceManager_t1683165547 * ____services_14;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::_sslConfig
	ServerSslConfiguration_t204724213 * ____sslConfig_15;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::_sslConfigInUse
	ServerSslConfiguration_t204724213 * ____sslConfigInUse_16;
	// WebSocketSharp.Server.ServerState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.WebSocketServer::_state
	int32_t ____state_17;
	// System.Object WebSocketSharp.Server.WebSocketServer::_sync
	Il2CppObject * ____sync_18;
	// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Server.WebSocketServer::_userCredFinder
	Func_2_t353436505 * ____userCredFinder_19;

public:
	inline static int32_t get_offset_of__address_0() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____address_0)); }
	inline IPAddress_t1399971723 * get__address_0() const { return ____address_0; }
	inline IPAddress_t1399971723 ** get_address_of__address_0() { return &____address_0; }
	inline void set__address_0(IPAddress_t1399971723 * value)
	{
		____address_0 = value;
		Il2CppCodeGenWriteBarrier(&____address_0, value);
	}

	inline static int32_t get_offset_of__allowForwardedRequest_1() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____allowForwardedRequest_1)); }
	inline bool get__allowForwardedRequest_1() const { return ____allowForwardedRequest_1; }
	inline bool* get_address_of__allowForwardedRequest_1() { return &____allowForwardedRequest_1; }
	inline void set__allowForwardedRequest_1(bool value)
	{
		____allowForwardedRequest_1 = value;
	}

	inline static int32_t get_offset_of__authSchemes_2() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____authSchemes_2)); }
	inline int32_t get__authSchemes_2() const { return ____authSchemes_2; }
	inline int32_t* get_address_of__authSchemes_2() { return &____authSchemes_2; }
	inline void set__authSchemes_2(int32_t value)
	{
		____authSchemes_2 = value;
	}

	inline static int32_t get_offset_of__dnsStyle_4() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____dnsStyle_4)); }
	inline bool get__dnsStyle_4() const { return ____dnsStyle_4; }
	inline bool* get_address_of__dnsStyle_4() { return &____dnsStyle_4; }
	inline void set__dnsStyle_4(bool value)
	{
		____dnsStyle_4 = value;
	}

	inline static int32_t get_offset_of__hostname_5() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____hostname_5)); }
	inline String_t* get__hostname_5() const { return ____hostname_5; }
	inline String_t** get_address_of__hostname_5() { return &____hostname_5; }
	inline void set__hostname_5(String_t* value)
	{
		____hostname_5 = value;
		Il2CppCodeGenWriteBarrier(&____hostname_5, value);
	}

	inline static int32_t get_offset_of__listener_6() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____listener_6)); }
	inline TcpListener_t1551297625 * get__listener_6() const { return ____listener_6; }
	inline TcpListener_t1551297625 ** get_address_of__listener_6() { return &____listener_6; }
	inline void set__listener_6(TcpListener_t1551297625 * value)
	{
		____listener_6 = value;
		Il2CppCodeGenWriteBarrier(&____listener_6, value);
	}

	inline static int32_t get_offset_of__logger_7() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____logger_7)); }
	inline Logger_t2598199114 * get__logger_7() const { return ____logger_7; }
	inline Logger_t2598199114 ** get_address_of__logger_7() { return &____logger_7; }
	inline void set__logger_7(Logger_t2598199114 * value)
	{
		____logger_7 = value;
		Il2CppCodeGenWriteBarrier(&____logger_7, value);
	}

	inline static int32_t get_offset_of__port_8() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____port_8)); }
	inline int32_t get__port_8() const { return ____port_8; }
	inline int32_t* get_address_of__port_8() { return &____port_8; }
	inline void set__port_8(int32_t value)
	{
		____port_8 = value;
	}

	inline static int32_t get_offset_of__realm_9() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____realm_9)); }
	inline String_t* get__realm_9() const { return ____realm_9; }
	inline String_t** get_address_of__realm_9() { return &____realm_9; }
	inline void set__realm_9(String_t* value)
	{
		____realm_9 = value;
		Il2CppCodeGenWriteBarrier(&____realm_9, value);
	}

	inline static int32_t get_offset_of__realmInUse_10() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____realmInUse_10)); }
	inline String_t* get__realmInUse_10() const { return ____realmInUse_10; }
	inline String_t** get_address_of__realmInUse_10() { return &____realmInUse_10; }
	inline void set__realmInUse_10(String_t* value)
	{
		____realmInUse_10 = value;
		Il2CppCodeGenWriteBarrier(&____realmInUse_10, value);
	}

	inline static int32_t get_offset_of__receiveThread_11() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____receiveThread_11)); }
	inline Thread_t241561612 * get__receiveThread_11() const { return ____receiveThread_11; }
	inline Thread_t241561612 ** get_address_of__receiveThread_11() { return &____receiveThread_11; }
	inline void set__receiveThread_11(Thread_t241561612 * value)
	{
		____receiveThread_11 = value;
		Il2CppCodeGenWriteBarrier(&____receiveThread_11, value);
	}

	inline static int32_t get_offset_of__reuseAddress_12() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____reuseAddress_12)); }
	inline bool get__reuseAddress_12() const { return ____reuseAddress_12; }
	inline bool* get_address_of__reuseAddress_12() { return &____reuseAddress_12; }
	inline void set__reuseAddress_12(bool value)
	{
		____reuseAddress_12 = value;
	}

	inline static int32_t get_offset_of__secure_13() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____secure_13)); }
	inline bool get__secure_13() const { return ____secure_13; }
	inline bool* get_address_of__secure_13() { return &____secure_13; }
	inline void set__secure_13(bool value)
	{
		____secure_13 = value;
	}

	inline static int32_t get_offset_of__services_14() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____services_14)); }
	inline WebSocketServiceManager_t1683165547 * get__services_14() const { return ____services_14; }
	inline WebSocketServiceManager_t1683165547 ** get_address_of__services_14() { return &____services_14; }
	inline void set__services_14(WebSocketServiceManager_t1683165547 * value)
	{
		____services_14 = value;
		Il2CppCodeGenWriteBarrier(&____services_14, value);
	}

	inline static int32_t get_offset_of__sslConfig_15() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____sslConfig_15)); }
	inline ServerSslConfiguration_t204724213 * get__sslConfig_15() const { return ____sslConfig_15; }
	inline ServerSslConfiguration_t204724213 ** get_address_of__sslConfig_15() { return &____sslConfig_15; }
	inline void set__sslConfig_15(ServerSslConfiguration_t204724213 * value)
	{
		____sslConfig_15 = value;
		Il2CppCodeGenWriteBarrier(&____sslConfig_15, value);
	}

	inline static int32_t get_offset_of__sslConfigInUse_16() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____sslConfigInUse_16)); }
	inline ServerSslConfiguration_t204724213 * get__sslConfigInUse_16() const { return ____sslConfigInUse_16; }
	inline ServerSslConfiguration_t204724213 ** get_address_of__sslConfigInUse_16() { return &____sslConfigInUse_16; }
	inline void set__sslConfigInUse_16(ServerSslConfiguration_t204724213 * value)
	{
		____sslConfigInUse_16 = value;
		Il2CppCodeGenWriteBarrier(&____sslConfigInUse_16, value);
	}

	inline static int32_t get_offset_of__state_17() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____state_17)); }
	inline int32_t get__state_17() const { return ____state_17; }
	inline int32_t* get_address_of__state_17() { return &____state_17; }
	inline void set__state_17(int32_t value)
	{
		____state_17 = value;
	}

	inline static int32_t get_offset_of__sync_18() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____sync_18)); }
	inline Il2CppObject * get__sync_18() const { return ____sync_18; }
	inline Il2CppObject ** get_address_of__sync_18() { return &____sync_18; }
	inline void set__sync_18(Il2CppObject * value)
	{
		____sync_18 = value;
		Il2CppCodeGenWriteBarrier(&____sync_18, value);
	}

	inline static int32_t get_offset_of__userCredFinder_19() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002, ____userCredFinder_19)); }
	inline Func_2_t353436505 * get__userCredFinder_19() const { return ____userCredFinder_19; }
	inline Func_2_t353436505 ** get_address_of__userCredFinder_19() { return &____userCredFinder_19; }
	inline void set__userCredFinder_19(Func_2_t353436505 * value)
	{
		____userCredFinder_19 = value;
		Il2CppCodeGenWriteBarrier(&____userCredFinder_19, value);
	}
};

struct WebSocketServer_t2522399002_StaticFields
{
public:
	// System.String WebSocketSharp.Server.WebSocketServer::_defaultRealm
	String_t* ____defaultRealm_3;

public:
	inline static int32_t get_offset_of__defaultRealm_3() { return static_cast<int32_t>(offsetof(WebSocketServer_t2522399002_StaticFields, ____defaultRealm_3)); }
	inline String_t* get__defaultRealm_3() const { return ____defaultRealm_3; }
	inline String_t** get_address_of__defaultRealm_3() { return &____defaultRealm_3; }
	inline void set__defaultRealm_3(String_t* value)
	{
		____defaultRealm_3 = value;
		Il2CppCodeGenWriteBarrier(&____defaultRealm_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
