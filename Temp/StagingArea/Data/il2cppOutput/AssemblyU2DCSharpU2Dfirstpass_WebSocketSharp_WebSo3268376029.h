#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t1146723439;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t3488732344;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t3911206805;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t15112628;
// System.Object
struct Il2CppObject;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t1909060290;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_t2691851108;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_t2709708561;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Uri
struct Uri_t19570940;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t1159130081;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t3230782241;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t3388497467;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t1481358898;
// System.EventHandler
struct EventHandler_t277755526;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Compr4066553457.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_WebSo2935910988.h"
#include "mscorlib_System_TimeSpan3430258949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket
struct  WebSocket_t3268376029  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t1146723439 * ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_t3226471752 * ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t3488732344 * ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_t4248997468 * ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t3911206805 * ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_exitReceiving
	AutoResetEvent_t15112628 * ____exitReceiving_10;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_11;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_12;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	Il2CppObject * ____forMessageEventQueue_13;
	// System.Object WebSocketSharp.WebSocket::_forSend
	Il2CppObject * ____forSend_14;
	// System.Object WebSocketSharp.WebSocket::_forState
	Il2CppObject * ____forState_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_t743994179 * ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t1909060290 * ____handshakeRequestChecker_20;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_21;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_23;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t2598199114 * ____logger_24;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_t2691851108 * ____message_25;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_t2709708561 * ____messageEventQueue_26;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_27;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_28;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_29;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_30;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t1642385972* ____protocols_31;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_32;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_t3911206805 * ____proxyCredentials_33;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t19570940 * ____proxyUri_34;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_35;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_receivePong
	AutoResetEvent_t15112628 * ____receivePong_36;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_37;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_t1159130081 * ____sslConfig_38;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_t3255436806 * ____stream_39;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t408947970 * ____tcpClient_40;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t19570940 * ____uri_41;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t3430258949  ____waitTime_43;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t3230782241 * ___OnClose_47;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t3388497467 * ___OnError_48;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t1481358898 * ___OnMessage_49;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t277755526 * ___OnOpen_50;

public:
	inline static int32_t get_offset_of__authChallenge_0() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____authChallenge_0)); }
	inline AuthenticationChallenge_t1146723439 * get__authChallenge_0() const { return ____authChallenge_0; }
	inline AuthenticationChallenge_t1146723439 ** get_address_of__authChallenge_0() { return &____authChallenge_0; }
	inline void set__authChallenge_0(AuthenticationChallenge_t1146723439 * value)
	{
		____authChallenge_0 = value;
		Il2CppCodeGenWriteBarrier(&____authChallenge_0, value);
	}

	inline static int32_t get_offset_of__base64Key_1() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____base64Key_1)); }
	inline String_t* get__base64Key_1() const { return ____base64Key_1; }
	inline String_t** get_address_of__base64Key_1() { return &____base64Key_1; }
	inline void set__base64Key_1(String_t* value)
	{
		____base64Key_1 = value;
		Il2CppCodeGenWriteBarrier(&____base64Key_1, value);
	}

	inline static int32_t get_offset_of__client_2() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____client_2)); }
	inline bool get__client_2() const { return ____client_2; }
	inline bool* get_address_of__client_2() { return &____client_2; }
	inline void set__client_2(bool value)
	{
		____client_2 = value;
	}

	inline static int32_t get_offset_of__closeContext_3() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____closeContext_3)); }
	inline Action_t3226471752 * get__closeContext_3() const { return ____closeContext_3; }
	inline Action_t3226471752 ** get_address_of__closeContext_3() { return &____closeContext_3; }
	inline void set__closeContext_3(Action_t3226471752 * value)
	{
		____closeContext_3 = value;
		Il2CppCodeGenWriteBarrier(&____closeContext_3, value);
	}

	inline static int32_t get_offset_of__compression_4() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____compression_4)); }
	inline uint8_t get__compression_4() const { return ____compression_4; }
	inline uint8_t* get_address_of__compression_4() { return &____compression_4; }
	inline void set__compression_4(uint8_t value)
	{
		____compression_4 = value;
	}

	inline static int32_t get_offset_of__context_5() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____context_5)); }
	inline WebSocketContext_t3488732344 * get__context_5() const { return ____context_5; }
	inline WebSocketContext_t3488732344 ** get_address_of__context_5() { return &____context_5; }
	inline void set__context_5(WebSocketContext_t3488732344 * value)
	{
		____context_5 = value;
		Il2CppCodeGenWriteBarrier(&____context_5, value);
	}

	inline static int32_t get_offset_of__cookies_6() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____cookies_6)); }
	inline CookieCollection_t4248997468 * get__cookies_6() const { return ____cookies_6; }
	inline CookieCollection_t4248997468 ** get_address_of__cookies_6() { return &____cookies_6; }
	inline void set__cookies_6(CookieCollection_t4248997468 * value)
	{
		____cookies_6 = value;
		Il2CppCodeGenWriteBarrier(&____cookies_6, value);
	}

	inline static int32_t get_offset_of__credentials_7() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____credentials_7)); }
	inline NetworkCredential_t3911206805 * get__credentials_7() const { return ____credentials_7; }
	inline NetworkCredential_t3911206805 ** get_address_of__credentials_7() { return &____credentials_7; }
	inline void set__credentials_7(NetworkCredential_t3911206805 * value)
	{
		____credentials_7 = value;
		Il2CppCodeGenWriteBarrier(&____credentials_7, value);
	}

	inline static int32_t get_offset_of__emitOnPing_8() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____emitOnPing_8)); }
	inline bool get__emitOnPing_8() const { return ____emitOnPing_8; }
	inline bool* get_address_of__emitOnPing_8() { return &____emitOnPing_8; }
	inline void set__emitOnPing_8(bool value)
	{
		____emitOnPing_8 = value;
	}

	inline static int32_t get_offset_of__enableRedirection_9() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____enableRedirection_9)); }
	inline bool get__enableRedirection_9() const { return ____enableRedirection_9; }
	inline bool* get_address_of__enableRedirection_9() { return &____enableRedirection_9; }
	inline void set__enableRedirection_9(bool value)
	{
		____enableRedirection_9 = value;
	}

	inline static int32_t get_offset_of__exitReceiving_10() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____exitReceiving_10)); }
	inline AutoResetEvent_t15112628 * get__exitReceiving_10() const { return ____exitReceiving_10; }
	inline AutoResetEvent_t15112628 ** get_address_of__exitReceiving_10() { return &____exitReceiving_10; }
	inline void set__exitReceiving_10(AutoResetEvent_t15112628 * value)
	{
		____exitReceiving_10 = value;
		Il2CppCodeGenWriteBarrier(&____exitReceiving_10, value);
	}

	inline static int32_t get_offset_of__extensions_11() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____extensions_11)); }
	inline String_t* get__extensions_11() const { return ____extensions_11; }
	inline String_t** get_address_of__extensions_11() { return &____extensions_11; }
	inline void set__extensions_11(String_t* value)
	{
		____extensions_11 = value;
		Il2CppCodeGenWriteBarrier(&____extensions_11, value);
	}

	inline static int32_t get_offset_of__extensionsRequested_12() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____extensionsRequested_12)); }
	inline bool get__extensionsRequested_12() const { return ____extensionsRequested_12; }
	inline bool* get_address_of__extensionsRequested_12() { return &____extensionsRequested_12; }
	inline void set__extensionsRequested_12(bool value)
	{
		____extensionsRequested_12 = value;
	}

	inline static int32_t get_offset_of__forMessageEventQueue_13() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____forMessageEventQueue_13)); }
	inline Il2CppObject * get__forMessageEventQueue_13() const { return ____forMessageEventQueue_13; }
	inline Il2CppObject ** get_address_of__forMessageEventQueue_13() { return &____forMessageEventQueue_13; }
	inline void set__forMessageEventQueue_13(Il2CppObject * value)
	{
		____forMessageEventQueue_13 = value;
		Il2CppCodeGenWriteBarrier(&____forMessageEventQueue_13, value);
	}

	inline static int32_t get_offset_of__forSend_14() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____forSend_14)); }
	inline Il2CppObject * get__forSend_14() const { return ____forSend_14; }
	inline Il2CppObject ** get_address_of__forSend_14() { return &____forSend_14; }
	inline void set__forSend_14(Il2CppObject * value)
	{
		____forSend_14 = value;
		Il2CppCodeGenWriteBarrier(&____forSend_14, value);
	}

	inline static int32_t get_offset_of__forState_15() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____forState_15)); }
	inline Il2CppObject * get__forState_15() const { return ____forState_15; }
	inline Il2CppObject ** get_address_of__forState_15() { return &____forState_15; }
	inline void set__forState_15(Il2CppObject * value)
	{
		____forState_15 = value;
		Il2CppCodeGenWriteBarrier(&____forState_15, value);
	}

	inline static int32_t get_offset_of__fragmentsBuffer_16() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____fragmentsBuffer_16)); }
	inline MemoryStream_t743994179 * get__fragmentsBuffer_16() const { return ____fragmentsBuffer_16; }
	inline MemoryStream_t743994179 ** get_address_of__fragmentsBuffer_16() { return &____fragmentsBuffer_16; }
	inline void set__fragmentsBuffer_16(MemoryStream_t743994179 * value)
	{
		____fragmentsBuffer_16 = value;
		Il2CppCodeGenWriteBarrier(&____fragmentsBuffer_16, value);
	}

	inline static int32_t get_offset_of__fragmentsCompressed_17() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____fragmentsCompressed_17)); }
	inline bool get__fragmentsCompressed_17() const { return ____fragmentsCompressed_17; }
	inline bool* get_address_of__fragmentsCompressed_17() { return &____fragmentsCompressed_17; }
	inline void set__fragmentsCompressed_17(bool value)
	{
		____fragmentsCompressed_17 = value;
	}

	inline static int32_t get_offset_of__fragmentsOpcode_18() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____fragmentsOpcode_18)); }
	inline uint8_t get__fragmentsOpcode_18() const { return ____fragmentsOpcode_18; }
	inline uint8_t* get_address_of__fragmentsOpcode_18() { return &____fragmentsOpcode_18; }
	inline void set__fragmentsOpcode_18(uint8_t value)
	{
		____fragmentsOpcode_18 = value;
	}

	inline static int32_t get_offset_of__handshakeRequestChecker_20() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____handshakeRequestChecker_20)); }
	inline Func_2_t1909060290 * get__handshakeRequestChecker_20() const { return ____handshakeRequestChecker_20; }
	inline Func_2_t1909060290 ** get_address_of__handshakeRequestChecker_20() { return &____handshakeRequestChecker_20; }
	inline void set__handshakeRequestChecker_20(Func_2_t1909060290 * value)
	{
		____handshakeRequestChecker_20 = value;
		Il2CppCodeGenWriteBarrier(&____handshakeRequestChecker_20, value);
	}

	inline static int32_t get_offset_of__ignoreExtensions_21() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____ignoreExtensions_21)); }
	inline bool get__ignoreExtensions_21() const { return ____ignoreExtensions_21; }
	inline bool* get_address_of__ignoreExtensions_21() { return &____ignoreExtensions_21; }
	inline void set__ignoreExtensions_21(bool value)
	{
		____ignoreExtensions_21 = value;
	}

	inline static int32_t get_offset_of__inContinuation_22() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____inContinuation_22)); }
	inline bool get__inContinuation_22() const { return ____inContinuation_22; }
	inline bool* get_address_of__inContinuation_22() { return &____inContinuation_22; }
	inline void set__inContinuation_22(bool value)
	{
		____inContinuation_22 = value;
	}

	inline static int32_t get_offset_of__inMessage_23() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____inMessage_23)); }
	inline bool get__inMessage_23() const { return ____inMessage_23; }
	inline bool* get_address_of__inMessage_23() { return &____inMessage_23; }
	inline void set__inMessage_23(bool value)
	{
		____inMessage_23 = value;
	}

	inline static int32_t get_offset_of__logger_24() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____logger_24)); }
	inline Logger_t2598199114 * get__logger_24() const { return ____logger_24; }
	inline Logger_t2598199114 ** get_address_of__logger_24() { return &____logger_24; }
	inline void set__logger_24(Logger_t2598199114 * value)
	{
		____logger_24 = value;
		Il2CppCodeGenWriteBarrier(&____logger_24, value);
	}

	inline static int32_t get_offset_of__message_25() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____message_25)); }
	inline Action_1_t2691851108 * get__message_25() const { return ____message_25; }
	inline Action_1_t2691851108 ** get_address_of__message_25() { return &____message_25; }
	inline void set__message_25(Action_1_t2691851108 * value)
	{
		____message_25 = value;
		Il2CppCodeGenWriteBarrier(&____message_25, value);
	}

	inline static int32_t get_offset_of__messageEventQueue_26() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____messageEventQueue_26)); }
	inline Queue_1_t2709708561 * get__messageEventQueue_26() const { return ____messageEventQueue_26; }
	inline Queue_1_t2709708561 ** get_address_of__messageEventQueue_26() { return &____messageEventQueue_26; }
	inline void set__messageEventQueue_26(Queue_1_t2709708561 * value)
	{
		____messageEventQueue_26 = value;
		Il2CppCodeGenWriteBarrier(&____messageEventQueue_26, value);
	}

	inline static int32_t get_offset_of__nonceCount_27() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____nonceCount_27)); }
	inline uint32_t get__nonceCount_27() const { return ____nonceCount_27; }
	inline uint32_t* get_address_of__nonceCount_27() { return &____nonceCount_27; }
	inline void set__nonceCount_27(uint32_t value)
	{
		____nonceCount_27 = value;
	}

	inline static int32_t get_offset_of__origin_28() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____origin_28)); }
	inline String_t* get__origin_28() const { return ____origin_28; }
	inline String_t** get_address_of__origin_28() { return &____origin_28; }
	inline void set__origin_28(String_t* value)
	{
		____origin_28 = value;
		Il2CppCodeGenWriteBarrier(&____origin_28, value);
	}

	inline static int32_t get_offset_of__preAuth_29() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____preAuth_29)); }
	inline bool get__preAuth_29() const { return ____preAuth_29; }
	inline bool* get_address_of__preAuth_29() { return &____preAuth_29; }
	inline void set__preAuth_29(bool value)
	{
		____preAuth_29 = value;
	}

	inline static int32_t get_offset_of__protocol_30() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____protocol_30)); }
	inline String_t* get__protocol_30() const { return ____protocol_30; }
	inline String_t** get_address_of__protocol_30() { return &____protocol_30; }
	inline void set__protocol_30(String_t* value)
	{
		____protocol_30 = value;
		Il2CppCodeGenWriteBarrier(&____protocol_30, value);
	}

	inline static int32_t get_offset_of__protocols_31() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____protocols_31)); }
	inline StringU5BU5D_t1642385972* get__protocols_31() const { return ____protocols_31; }
	inline StringU5BU5D_t1642385972** get_address_of__protocols_31() { return &____protocols_31; }
	inline void set__protocols_31(StringU5BU5D_t1642385972* value)
	{
		____protocols_31 = value;
		Il2CppCodeGenWriteBarrier(&____protocols_31, value);
	}

	inline static int32_t get_offset_of__protocolsRequested_32() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____protocolsRequested_32)); }
	inline bool get__protocolsRequested_32() const { return ____protocolsRequested_32; }
	inline bool* get_address_of__protocolsRequested_32() { return &____protocolsRequested_32; }
	inline void set__protocolsRequested_32(bool value)
	{
		____protocolsRequested_32 = value;
	}

	inline static int32_t get_offset_of__proxyCredentials_33() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____proxyCredentials_33)); }
	inline NetworkCredential_t3911206805 * get__proxyCredentials_33() const { return ____proxyCredentials_33; }
	inline NetworkCredential_t3911206805 ** get_address_of__proxyCredentials_33() { return &____proxyCredentials_33; }
	inline void set__proxyCredentials_33(NetworkCredential_t3911206805 * value)
	{
		____proxyCredentials_33 = value;
		Il2CppCodeGenWriteBarrier(&____proxyCredentials_33, value);
	}

	inline static int32_t get_offset_of__proxyUri_34() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____proxyUri_34)); }
	inline Uri_t19570940 * get__proxyUri_34() const { return ____proxyUri_34; }
	inline Uri_t19570940 ** get_address_of__proxyUri_34() { return &____proxyUri_34; }
	inline void set__proxyUri_34(Uri_t19570940 * value)
	{
		____proxyUri_34 = value;
		Il2CppCodeGenWriteBarrier(&____proxyUri_34, value);
	}

	inline static int32_t get_offset_of__readyState_35() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____readyState_35)); }
	inline uint16_t get__readyState_35() const { return ____readyState_35; }
	inline uint16_t* get_address_of__readyState_35() { return &____readyState_35; }
	inline void set__readyState_35(uint16_t value)
	{
		____readyState_35 = value;
	}

	inline static int32_t get_offset_of__receivePong_36() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____receivePong_36)); }
	inline AutoResetEvent_t15112628 * get__receivePong_36() const { return ____receivePong_36; }
	inline AutoResetEvent_t15112628 ** get_address_of__receivePong_36() { return &____receivePong_36; }
	inline void set__receivePong_36(AutoResetEvent_t15112628 * value)
	{
		____receivePong_36 = value;
		Il2CppCodeGenWriteBarrier(&____receivePong_36, value);
	}

	inline static int32_t get_offset_of__secure_37() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____secure_37)); }
	inline bool get__secure_37() const { return ____secure_37; }
	inline bool* get_address_of__secure_37() { return &____secure_37; }
	inline void set__secure_37(bool value)
	{
		____secure_37 = value;
	}

	inline static int32_t get_offset_of__sslConfig_38() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____sslConfig_38)); }
	inline ClientSslConfiguration_t1159130081 * get__sslConfig_38() const { return ____sslConfig_38; }
	inline ClientSslConfiguration_t1159130081 ** get_address_of__sslConfig_38() { return &____sslConfig_38; }
	inline void set__sslConfig_38(ClientSslConfiguration_t1159130081 * value)
	{
		____sslConfig_38 = value;
		Il2CppCodeGenWriteBarrier(&____sslConfig_38, value);
	}

	inline static int32_t get_offset_of__stream_39() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____stream_39)); }
	inline Stream_t3255436806 * get__stream_39() const { return ____stream_39; }
	inline Stream_t3255436806 ** get_address_of__stream_39() { return &____stream_39; }
	inline void set__stream_39(Stream_t3255436806 * value)
	{
		____stream_39 = value;
		Il2CppCodeGenWriteBarrier(&____stream_39, value);
	}

	inline static int32_t get_offset_of__tcpClient_40() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____tcpClient_40)); }
	inline TcpClient_t408947970 * get__tcpClient_40() const { return ____tcpClient_40; }
	inline TcpClient_t408947970 ** get_address_of__tcpClient_40() { return &____tcpClient_40; }
	inline void set__tcpClient_40(TcpClient_t408947970 * value)
	{
		____tcpClient_40 = value;
		Il2CppCodeGenWriteBarrier(&____tcpClient_40, value);
	}

	inline static int32_t get_offset_of__uri_41() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____uri_41)); }
	inline Uri_t19570940 * get__uri_41() const { return ____uri_41; }
	inline Uri_t19570940 ** get_address_of__uri_41() { return &____uri_41; }
	inline void set__uri_41(Uri_t19570940 * value)
	{
		____uri_41 = value;
		Il2CppCodeGenWriteBarrier(&____uri_41, value);
	}

	inline static int32_t get_offset_of__waitTime_43() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ____waitTime_43)); }
	inline TimeSpan_t3430258949  get__waitTime_43() const { return ____waitTime_43; }
	inline TimeSpan_t3430258949 * get_address_of__waitTime_43() { return &____waitTime_43; }
	inline void set__waitTime_43(TimeSpan_t3430258949  value)
	{
		____waitTime_43 = value;
	}

	inline static int32_t get_offset_of_OnClose_47() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnClose_47)); }
	inline EventHandler_1_t3230782241 * get_OnClose_47() const { return ___OnClose_47; }
	inline EventHandler_1_t3230782241 ** get_address_of_OnClose_47() { return &___OnClose_47; }
	inline void set_OnClose_47(EventHandler_1_t3230782241 * value)
	{
		___OnClose_47 = value;
		Il2CppCodeGenWriteBarrier(&___OnClose_47, value);
	}

	inline static int32_t get_offset_of_OnError_48() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnError_48)); }
	inline EventHandler_1_t3388497467 * get_OnError_48() const { return ___OnError_48; }
	inline EventHandler_1_t3388497467 ** get_address_of_OnError_48() { return &___OnError_48; }
	inline void set_OnError_48(EventHandler_1_t3388497467 * value)
	{
		___OnError_48 = value;
		Il2CppCodeGenWriteBarrier(&___OnError_48, value);
	}

	inline static int32_t get_offset_of_OnMessage_49() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnMessage_49)); }
	inline EventHandler_1_t1481358898 * get_OnMessage_49() const { return ___OnMessage_49; }
	inline EventHandler_1_t1481358898 ** get_address_of_OnMessage_49() { return &___OnMessage_49; }
	inline void set_OnMessage_49(EventHandler_1_t1481358898 * value)
	{
		___OnMessage_49 = value;
		Il2CppCodeGenWriteBarrier(&___OnMessage_49, value);
	}

	inline static int32_t get_offset_of_OnOpen_50() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029, ___OnOpen_50)); }
	inline EventHandler_t277755526 * get_OnOpen_50() const { return ___OnOpen_50; }
	inline EventHandler_t277755526 ** get_address_of_OnOpen_50() { return &___OnOpen_50; }
	inline void set_OnOpen_50(EventHandler_t277755526 * value)
	{
		___OnOpen_50 = value;
		Il2CppCodeGenWriteBarrier(&___OnOpen_50, value);
	}
};

struct WebSocket_t3268376029_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_t3397334013* ___EmptyBytes_44;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_45;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t2510243513 * ___RandomNumber_46;

public:
	inline static int32_t get_offset_of_EmptyBytes_44() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029_StaticFields, ___EmptyBytes_44)); }
	inline ByteU5BU5D_t3397334013* get_EmptyBytes_44() const { return ___EmptyBytes_44; }
	inline ByteU5BU5D_t3397334013** get_address_of_EmptyBytes_44() { return &___EmptyBytes_44; }
	inline void set_EmptyBytes_44(ByteU5BU5D_t3397334013* value)
	{
		___EmptyBytes_44 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyBytes_44, value);
	}

	inline static int32_t get_offset_of_FragmentLength_45() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029_StaticFields, ___FragmentLength_45)); }
	inline int32_t get_FragmentLength_45() const { return ___FragmentLength_45; }
	inline int32_t* get_address_of_FragmentLength_45() { return &___FragmentLength_45; }
	inline void set_FragmentLength_45(int32_t value)
	{
		___FragmentLength_45 = value;
	}

	inline static int32_t get_offset_of_RandomNumber_46() { return static_cast<int32_t>(offsetof(WebSocket_t3268376029_StaticFields, ___RandomNumber_46)); }
	inline RandomNumberGenerator_t2510243513 * get_RandomNumber_46() const { return ___RandomNumber_46; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_RandomNumber_46() { return &___RandomNumber_46; }
	inline void set_RandomNumber_46(RandomNumberGenerator_t2510243513 * value)
	{
		___RandomNumber_46 = value;
		Il2CppCodeGenWriteBarrier(&___RandomNumber_46, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
