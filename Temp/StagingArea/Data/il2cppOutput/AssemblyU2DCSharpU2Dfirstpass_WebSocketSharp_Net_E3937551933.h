#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>
struct List_1_t4193866914;
// System.String
struct String_t;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener>
struct Dictionary_2_t59835555;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpConnection,WebSocketSharp.Net.HttpConnection>
struct Dictionary_2_t3932468307;
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.EndPointListener
struct  EndPointListener_t3937551933  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix> WebSocketSharp.Net.EndPointListener::_all
	List_1_t4193866914 * ____all_0;
	// System.Net.IPEndPoint WebSocketSharp.Net.EndPointListener::_endpoint
	IPEndPoint_t2615413766 * ____endpoint_2;
	// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener> WebSocketSharp.Net.EndPointListener::_prefixes
	Dictionary_2_t59835555 * ____prefixes_3;
	// System.Boolean WebSocketSharp.Net.EndPointListener::_secure
	bool ____secure_4;
	// System.Net.Sockets.Socket WebSocketSharp.Net.EndPointListener::_socket
	Socket_t3821512045 * ____socket_5;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.EndPointListener::_sslConfig
	ServerSslConfiguration_t204724213 * ____sslConfig_6;
	// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix> WebSocketSharp.Net.EndPointListener::_unhandled
	List_1_t4193866914 * ____unhandled_7;
	// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpConnection,WebSocketSharp.Net.HttpConnection> WebSocketSharp.Net.EndPointListener::_unregistered
	Dictionary_2_t3932468307 * ____unregistered_8;
	// System.Object WebSocketSharp.Net.EndPointListener::_unregisteredSync
	Il2CppObject * ____unregisteredSync_9;

public:
	inline static int32_t get_offset_of__all_0() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____all_0)); }
	inline List_1_t4193866914 * get__all_0() const { return ____all_0; }
	inline List_1_t4193866914 ** get_address_of__all_0() { return &____all_0; }
	inline void set__all_0(List_1_t4193866914 * value)
	{
		____all_0 = value;
		Il2CppCodeGenWriteBarrier(&____all_0, value);
	}

	inline static int32_t get_offset_of__endpoint_2() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____endpoint_2)); }
	inline IPEndPoint_t2615413766 * get__endpoint_2() const { return ____endpoint_2; }
	inline IPEndPoint_t2615413766 ** get_address_of__endpoint_2() { return &____endpoint_2; }
	inline void set__endpoint_2(IPEndPoint_t2615413766 * value)
	{
		____endpoint_2 = value;
		Il2CppCodeGenWriteBarrier(&____endpoint_2, value);
	}

	inline static int32_t get_offset_of__prefixes_3() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____prefixes_3)); }
	inline Dictionary_2_t59835555 * get__prefixes_3() const { return ____prefixes_3; }
	inline Dictionary_2_t59835555 ** get_address_of__prefixes_3() { return &____prefixes_3; }
	inline void set__prefixes_3(Dictionary_2_t59835555 * value)
	{
		____prefixes_3 = value;
		Il2CppCodeGenWriteBarrier(&____prefixes_3, value);
	}

	inline static int32_t get_offset_of__secure_4() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____secure_4)); }
	inline bool get__secure_4() const { return ____secure_4; }
	inline bool* get_address_of__secure_4() { return &____secure_4; }
	inline void set__secure_4(bool value)
	{
		____secure_4 = value;
	}

	inline static int32_t get_offset_of__socket_5() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____socket_5)); }
	inline Socket_t3821512045 * get__socket_5() const { return ____socket_5; }
	inline Socket_t3821512045 ** get_address_of__socket_5() { return &____socket_5; }
	inline void set__socket_5(Socket_t3821512045 * value)
	{
		____socket_5 = value;
		Il2CppCodeGenWriteBarrier(&____socket_5, value);
	}

	inline static int32_t get_offset_of__sslConfig_6() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____sslConfig_6)); }
	inline ServerSslConfiguration_t204724213 * get__sslConfig_6() const { return ____sslConfig_6; }
	inline ServerSslConfiguration_t204724213 ** get_address_of__sslConfig_6() { return &____sslConfig_6; }
	inline void set__sslConfig_6(ServerSslConfiguration_t204724213 * value)
	{
		____sslConfig_6 = value;
		Il2CppCodeGenWriteBarrier(&____sslConfig_6, value);
	}

	inline static int32_t get_offset_of__unhandled_7() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____unhandled_7)); }
	inline List_1_t4193866914 * get__unhandled_7() const { return ____unhandled_7; }
	inline List_1_t4193866914 ** get_address_of__unhandled_7() { return &____unhandled_7; }
	inline void set__unhandled_7(List_1_t4193866914 * value)
	{
		____unhandled_7 = value;
		Il2CppCodeGenWriteBarrier(&____unhandled_7, value);
	}

	inline static int32_t get_offset_of__unregistered_8() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____unregistered_8)); }
	inline Dictionary_2_t3932468307 * get__unregistered_8() const { return ____unregistered_8; }
	inline Dictionary_2_t3932468307 ** get_address_of__unregistered_8() { return &____unregistered_8; }
	inline void set__unregistered_8(Dictionary_2_t3932468307 * value)
	{
		____unregistered_8 = value;
		Il2CppCodeGenWriteBarrier(&____unregistered_8, value);
	}

	inline static int32_t get_offset_of__unregisteredSync_9() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933, ____unregisteredSync_9)); }
	inline Il2CppObject * get__unregisteredSync_9() const { return ____unregisteredSync_9; }
	inline Il2CppObject ** get_address_of__unregisteredSync_9() { return &____unregisteredSync_9; }
	inline void set__unregisteredSync_9(Il2CppObject * value)
	{
		____unregisteredSync_9 = value;
		Il2CppCodeGenWriteBarrier(&____unregisteredSync_9, value);
	}
};

struct EndPointListener_t3937551933_StaticFields
{
public:
	// System.String WebSocketSharp.Net.EndPointListener::_defaultCertFolderPath
	String_t* ____defaultCertFolderPath_1;
	// System.AsyncCallback WebSocketSharp.Net.EndPointListener::<>f__mg$cache0
	AsyncCallback_t163412349 * ___U3CU3Ef__mgU24cache0_10;
	// System.AsyncCallback WebSocketSharp.Net.EndPointListener::<>f__mg$cache1
	AsyncCallback_t163412349 * ___U3CU3Ef__mgU24cache1_11;

public:
	inline static int32_t get_offset_of__defaultCertFolderPath_1() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933_StaticFields, ____defaultCertFolderPath_1)); }
	inline String_t* get__defaultCertFolderPath_1() const { return ____defaultCertFolderPath_1; }
	inline String_t** get_address_of__defaultCertFolderPath_1() { return &____defaultCertFolderPath_1; }
	inline void set__defaultCertFolderPath_1(String_t* value)
	{
		____defaultCertFolderPath_1 = value;
		Il2CppCodeGenWriteBarrier(&____defaultCertFolderPath_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_10() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933_StaticFields, ___U3CU3Ef__mgU24cache0_10)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__mgU24cache0_10() const { return ___U3CU3Ef__mgU24cache0_10; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__mgU24cache0_10() { return &___U3CU3Ef__mgU24cache0_10; }
	inline void set_U3CU3Ef__mgU24cache0_10(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__mgU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_11() { return static_cast<int32_t>(offsetof(EndPointListener_t3937551933_StaticFields, ___U3CU3Ef__mgU24cache1_11)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__mgU24cache1_11() const { return ___U3CU3Ef__mgU24cache1_11; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__mgU24cache1_11() { return &___U3CU3Ef__mgU24cache1_11; }
	inline void set_U3CU3Ef__mgU24cache1_11(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__mgU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
