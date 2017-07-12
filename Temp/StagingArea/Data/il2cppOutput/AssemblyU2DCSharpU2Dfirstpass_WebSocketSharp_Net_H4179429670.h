#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes>
struct Func_2_t1102535652;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpConnection,WebSocketSharp.Net.HttpConnection>
struct Dictionary_2_t3932468307;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerContext>
struct List_1_t363829541;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpListenerContext,WebSocketSharp.Net.HttpListenerContext>
struct Dictionary_2_t2381547847;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// WebSocketSharp.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3269177542;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t353436505;
// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerAsyncResult>
struct List_1_t2876060817;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"
#include "mscorlib_System_Boolean3825574718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListener
struct  HttpListener_t4179429670  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.HttpListener::_authSchemes
	int32_t ____authSchemes_0;
	// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes> WebSocketSharp.Net.HttpListener::_authSchemeSelector
	Func_2_t1102535652 * ____authSchemeSelector_1;
	// System.String WebSocketSharp.Net.HttpListener::_certFolderPath
	String_t* ____certFolderPath_2;
	// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpConnection,WebSocketSharp.Net.HttpConnection> WebSocketSharp.Net.HttpListener::_connections
	Dictionary_2_t3932468307 * ____connections_3;
	// System.Object WebSocketSharp.Net.HttpListener::_connectionsSync
	Il2CppObject * ____connectionsSync_4;
	// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerContext> WebSocketSharp.Net.HttpListener::_ctxQueue
	List_1_t363829541 * ____ctxQueue_5;
	// System.Object WebSocketSharp.Net.HttpListener::_ctxQueueSync
	Il2CppObject * ____ctxQueueSync_6;
	// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpListenerContext,WebSocketSharp.Net.HttpListenerContext> WebSocketSharp.Net.HttpListener::_ctxRegistry
	Dictionary_2_t2381547847 * ____ctxRegistry_7;
	// System.Object WebSocketSharp.Net.HttpListener::_ctxRegistrySync
	Il2CppObject * ____ctxRegistrySync_8;
	// System.Boolean WebSocketSharp.Net.HttpListener::_disposed
	bool ____disposed_10;
	// System.Boolean WebSocketSharp.Net.HttpListener::_ignoreWriteExceptions
	bool ____ignoreWriteExceptions_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Net.HttpListener::_listening
	bool ____listening_12;
	// WebSocketSharp.Logger WebSocketSharp.Net.HttpListener::_logger
	Logger_t2598199114 * ____logger_13;
	// WebSocketSharp.Net.HttpListenerPrefixCollection WebSocketSharp.Net.HttpListener::_prefixes
	HttpListenerPrefixCollection_t3269177542 * ____prefixes_14;
	// System.String WebSocketSharp.Net.HttpListener::_realm
	String_t* ____realm_15;
	// System.Boolean WebSocketSharp.Net.HttpListener::_reuseAddress
	bool ____reuseAddress_16;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.HttpListener::_sslConfig
	ServerSslConfiguration_t204724213 * ____sslConfig_17;
	// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.HttpListener::_userCredFinder
	Func_2_t353436505 * ____userCredFinder_18;
	// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerAsyncResult> WebSocketSharp.Net.HttpListener::_waitQueue
	List_1_t2876060817 * ____waitQueue_19;
	// System.Object WebSocketSharp.Net.HttpListener::_waitQueueSync
	Il2CppObject * ____waitQueueSync_20;

public:
	inline static int32_t get_offset_of__authSchemes_0() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____authSchemes_0)); }
	inline int32_t get__authSchemes_0() const { return ____authSchemes_0; }
	inline int32_t* get_address_of__authSchemes_0() { return &____authSchemes_0; }
	inline void set__authSchemes_0(int32_t value)
	{
		____authSchemes_0 = value;
	}

	inline static int32_t get_offset_of__authSchemeSelector_1() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____authSchemeSelector_1)); }
	inline Func_2_t1102535652 * get__authSchemeSelector_1() const { return ____authSchemeSelector_1; }
	inline Func_2_t1102535652 ** get_address_of__authSchemeSelector_1() { return &____authSchemeSelector_1; }
	inline void set__authSchemeSelector_1(Func_2_t1102535652 * value)
	{
		____authSchemeSelector_1 = value;
		Il2CppCodeGenWriteBarrier(&____authSchemeSelector_1, value);
	}

	inline static int32_t get_offset_of__certFolderPath_2() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____certFolderPath_2)); }
	inline String_t* get__certFolderPath_2() const { return ____certFolderPath_2; }
	inline String_t** get_address_of__certFolderPath_2() { return &____certFolderPath_2; }
	inline void set__certFolderPath_2(String_t* value)
	{
		____certFolderPath_2 = value;
		Il2CppCodeGenWriteBarrier(&____certFolderPath_2, value);
	}

	inline static int32_t get_offset_of__connections_3() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____connections_3)); }
	inline Dictionary_2_t3932468307 * get__connections_3() const { return ____connections_3; }
	inline Dictionary_2_t3932468307 ** get_address_of__connections_3() { return &____connections_3; }
	inline void set__connections_3(Dictionary_2_t3932468307 * value)
	{
		____connections_3 = value;
		Il2CppCodeGenWriteBarrier(&____connections_3, value);
	}

	inline static int32_t get_offset_of__connectionsSync_4() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____connectionsSync_4)); }
	inline Il2CppObject * get__connectionsSync_4() const { return ____connectionsSync_4; }
	inline Il2CppObject ** get_address_of__connectionsSync_4() { return &____connectionsSync_4; }
	inline void set__connectionsSync_4(Il2CppObject * value)
	{
		____connectionsSync_4 = value;
		Il2CppCodeGenWriteBarrier(&____connectionsSync_4, value);
	}

	inline static int32_t get_offset_of__ctxQueue_5() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____ctxQueue_5)); }
	inline List_1_t363829541 * get__ctxQueue_5() const { return ____ctxQueue_5; }
	inline List_1_t363829541 ** get_address_of__ctxQueue_5() { return &____ctxQueue_5; }
	inline void set__ctxQueue_5(List_1_t363829541 * value)
	{
		____ctxQueue_5 = value;
		Il2CppCodeGenWriteBarrier(&____ctxQueue_5, value);
	}

	inline static int32_t get_offset_of__ctxQueueSync_6() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____ctxQueueSync_6)); }
	inline Il2CppObject * get__ctxQueueSync_6() const { return ____ctxQueueSync_6; }
	inline Il2CppObject ** get_address_of__ctxQueueSync_6() { return &____ctxQueueSync_6; }
	inline void set__ctxQueueSync_6(Il2CppObject * value)
	{
		____ctxQueueSync_6 = value;
		Il2CppCodeGenWriteBarrier(&____ctxQueueSync_6, value);
	}

	inline static int32_t get_offset_of__ctxRegistry_7() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____ctxRegistry_7)); }
	inline Dictionary_2_t2381547847 * get__ctxRegistry_7() const { return ____ctxRegistry_7; }
	inline Dictionary_2_t2381547847 ** get_address_of__ctxRegistry_7() { return &____ctxRegistry_7; }
	inline void set__ctxRegistry_7(Dictionary_2_t2381547847 * value)
	{
		____ctxRegistry_7 = value;
		Il2CppCodeGenWriteBarrier(&____ctxRegistry_7, value);
	}

	inline static int32_t get_offset_of__ctxRegistrySync_8() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____ctxRegistrySync_8)); }
	inline Il2CppObject * get__ctxRegistrySync_8() const { return ____ctxRegistrySync_8; }
	inline Il2CppObject ** get_address_of__ctxRegistrySync_8() { return &____ctxRegistrySync_8; }
	inline void set__ctxRegistrySync_8(Il2CppObject * value)
	{
		____ctxRegistrySync_8 = value;
		Il2CppCodeGenWriteBarrier(&____ctxRegistrySync_8, value);
	}

	inline static int32_t get_offset_of__disposed_10() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____disposed_10)); }
	inline bool get__disposed_10() const { return ____disposed_10; }
	inline bool* get_address_of__disposed_10() { return &____disposed_10; }
	inline void set__disposed_10(bool value)
	{
		____disposed_10 = value;
	}

	inline static int32_t get_offset_of__ignoreWriteExceptions_11() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____ignoreWriteExceptions_11)); }
	inline bool get__ignoreWriteExceptions_11() const { return ____ignoreWriteExceptions_11; }
	inline bool* get_address_of__ignoreWriteExceptions_11() { return &____ignoreWriteExceptions_11; }
	inline void set__ignoreWriteExceptions_11(bool value)
	{
		____ignoreWriteExceptions_11 = value;
	}

	inline static int32_t get_offset_of__listening_12() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____listening_12)); }
	inline bool get__listening_12() const { return ____listening_12; }
	inline bool* get_address_of__listening_12() { return &____listening_12; }
	inline void set__listening_12(bool value)
	{
		____listening_12 = value;
	}

	inline static int32_t get_offset_of__logger_13() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____logger_13)); }
	inline Logger_t2598199114 * get__logger_13() const { return ____logger_13; }
	inline Logger_t2598199114 ** get_address_of__logger_13() { return &____logger_13; }
	inline void set__logger_13(Logger_t2598199114 * value)
	{
		____logger_13 = value;
		Il2CppCodeGenWriteBarrier(&____logger_13, value);
	}

	inline static int32_t get_offset_of__prefixes_14() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____prefixes_14)); }
	inline HttpListenerPrefixCollection_t3269177542 * get__prefixes_14() const { return ____prefixes_14; }
	inline HttpListenerPrefixCollection_t3269177542 ** get_address_of__prefixes_14() { return &____prefixes_14; }
	inline void set__prefixes_14(HttpListenerPrefixCollection_t3269177542 * value)
	{
		____prefixes_14 = value;
		Il2CppCodeGenWriteBarrier(&____prefixes_14, value);
	}

	inline static int32_t get_offset_of__realm_15() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____realm_15)); }
	inline String_t* get__realm_15() const { return ____realm_15; }
	inline String_t** get_address_of__realm_15() { return &____realm_15; }
	inline void set__realm_15(String_t* value)
	{
		____realm_15 = value;
		Il2CppCodeGenWriteBarrier(&____realm_15, value);
	}

	inline static int32_t get_offset_of__reuseAddress_16() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____reuseAddress_16)); }
	inline bool get__reuseAddress_16() const { return ____reuseAddress_16; }
	inline bool* get_address_of__reuseAddress_16() { return &____reuseAddress_16; }
	inline void set__reuseAddress_16(bool value)
	{
		____reuseAddress_16 = value;
	}

	inline static int32_t get_offset_of__sslConfig_17() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____sslConfig_17)); }
	inline ServerSslConfiguration_t204724213 * get__sslConfig_17() const { return ____sslConfig_17; }
	inline ServerSslConfiguration_t204724213 ** get_address_of__sslConfig_17() { return &____sslConfig_17; }
	inline void set__sslConfig_17(ServerSslConfiguration_t204724213 * value)
	{
		____sslConfig_17 = value;
		Il2CppCodeGenWriteBarrier(&____sslConfig_17, value);
	}

	inline static int32_t get_offset_of__userCredFinder_18() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____userCredFinder_18)); }
	inline Func_2_t353436505 * get__userCredFinder_18() const { return ____userCredFinder_18; }
	inline Func_2_t353436505 ** get_address_of__userCredFinder_18() { return &____userCredFinder_18; }
	inline void set__userCredFinder_18(Func_2_t353436505 * value)
	{
		____userCredFinder_18 = value;
		Il2CppCodeGenWriteBarrier(&____userCredFinder_18, value);
	}

	inline static int32_t get_offset_of__waitQueue_19() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____waitQueue_19)); }
	inline List_1_t2876060817 * get__waitQueue_19() const { return ____waitQueue_19; }
	inline List_1_t2876060817 ** get_address_of__waitQueue_19() { return &____waitQueue_19; }
	inline void set__waitQueue_19(List_1_t2876060817 * value)
	{
		____waitQueue_19 = value;
		Il2CppCodeGenWriteBarrier(&____waitQueue_19, value);
	}

	inline static int32_t get_offset_of__waitQueueSync_20() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670, ____waitQueueSync_20)); }
	inline Il2CppObject * get__waitQueueSync_20() const { return ____waitQueueSync_20; }
	inline Il2CppObject ** get_address_of__waitQueueSync_20() { return &____waitQueueSync_20; }
	inline void set__waitQueueSync_20(Il2CppObject * value)
	{
		____waitQueueSync_20 = value;
		Il2CppCodeGenWriteBarrier(&____waitQueueSync_20, value);
	}
};

struct HttpListener_t4179429670_StaticFields
{
public:
	// System.String WebSocketSharp.Net.HttpListener::_defaultRealm
	String_t* ____defaultRealm_9;

public:
	inline static int32_t get_offset_of__defaultRealm_9() { return static_cast<int32_t>(offsetof(HttpListener_t4179429670_StaticFields, ____defaultRealm_9)); }
	inline String_t* get__defaultRealm_9() const { return ____defaultRealm_9; }
	inline String_t** get_address_of__defaultRealm_9() { return &____defaultRealm_9; }
	inline void set__defaultRealm_9(String_t* value)
	{
		____defaultRealm_9 = value;
		Il2CppCodeGenWriteBarrier(&____defaultRealm_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
