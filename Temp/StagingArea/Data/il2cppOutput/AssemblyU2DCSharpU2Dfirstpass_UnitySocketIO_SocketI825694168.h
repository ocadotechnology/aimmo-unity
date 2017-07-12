#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.WebSocket
struct WebSocket_t3268376029;
// System.Threading.Thread
struct Thread_t241561612;
// UnitySocketIO.IO.Encoder
struct Encoder_t312907062;
// UnitySocketIO.IO.Decoder
struct Decoder_t1728682230;
// UnitySocketIO.IO.Parser
struct Parser_t3968527057;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<UnitySocketIO.Events.SocketIOEvent>>>
struct Dictionary_2_t2682623995;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Queue`1<UnitySocketIO.Events.SocketIOEvent>
struct Queue_1_t1416581054;
// System.Collections.Generic.Queue`1<UnitySocketIO.Packet.SocketPacket>
struct Queue_1_t3028170516;
// System.Collections.Generic.List`1<UnitySocketIO.Events.Ack>
struct List_1_t3787164161;

#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_SocketI938190752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.SocketIO.NativeSocketIO
struct  NativeSocketIO_t825694168  : public BaseSocketIO_t938190752
{
public:
	// WebSocketSharp.WebSocket UnitySocketIO.SocketIO.NativeSocketIO::socket
	WebSocket_t3268376029 * ___socket_4;
	// System.Boolean UnitySocketIO.SocketIO.NativeSocketIO::connected
	bool ___connected_5;
	// System.Threading.Thread UnitySocketIO.SocketIO.NativeSocketIO::socketThread
	Thread_t241561612 * ___socketThread_6;
	// System.Threading.Thread UnitySocketIO.SocketIO.NativeSocketIO::pingThread
	Thread_t241561612 * ___pingThread_7;
	// UnitySocketIO.IO.Encoder UnitySocketIO.SocketIO.NativeSocketIO::encoder
	Encoder_t312907062 * ___encoder_8;
	// UnitySocketIO.IO.Decoder UnitySocketIO.SocketIO.NativeSocketIO::decoder
	Decoder_t1728682230 * ___decoder_9;
	// UnitySocketIO.IO.Parser UnitySocketIO.SocketIO.NativeSocketIO::parser
	Parser_t3968527057 * ___parser_10;
	// System.Int32 UnitySocketIO.SocketIO.NativeSocketIO::packetID
	int32_t ___packetID_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<UnitySocketIO.Events.SocketIOEvent>>> UnitySocketIO.SocketIO.NativeSocketIO::eventHandlers
	Dictionary_2_t2682623995 * ___eventHandlers_12;
	// System.Object UnitySocketIO.SocketIO.NativeSocketIO::eventQueueLock
	Il2CppObject * ___eventQueueLock_13;
	// System.Collections.Generic.Queue`1<UnitySocketIO.Events.SocketIOEvent> UnitySocketIO.SocketIO.NativeSocketIO::eventQueue
	Queue_1_t1416581054 * ___eventQueue_14;
	// System.Object UnitySocketIO.SocketIO.NativeSocketIO::ackQueueLock
	Il2CppObject * ___ackQueueLock_15;
	// System.Collections.Generic.Queue`1<UnitySocketIO.Packet.SocketPacket> UnitySocketIO.SocketIO.NativeSocketIO::ackQueue
	Queue_1_t3028170516 * ___ackQueue_16;
	// System.Collections.Generic.List`1<UnitySocketIO.Events.Ack> UnitySocketIO.SocketIO.NativeSocketIO::ackList
	List_1_t3787164161 * ___ackList_17;
	// System.Boolean UnitySocketIO.SocketIO.NativeSocketIO::isConnected
	bool ___isConnected_18;
	// System.Boolean UnitySocketIO.SocketIO.NativeSocketIO::pinging
	bool ___pinging_19;
	// System.Boolean UnitySocketIO.SocketIO.NativeSocketIO::pong
	bool ___pong_20;

public:
	inline static int32_t get_offset_of_socket_4() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___socket_4)); }
	inline WebSocket_t3268376029 * get_socket_4() const { return ___socket_4; }
	inline WebSocket_t3268376029 ** get_address_of_socket_4() { return &___socket_4; }
	inline void set_socket_4(WebSocket_t3268376029 * value)
	{
		___socket_4 = value;
		Il2CppCodeGenWriteBarrier(&___socket_4, value);
	}

	inline static int32_t get_offset_of_connected_5() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___connected_5)); }
	inline bool get_connected_5() const { return ___connected_5; }
	inline bool* get_address_of_connected_5() { return &___connected_5; }
	inline void set_connected_5(bool value)
	{
		___connected_5 = value;
	}

	inline static int32_t get_offset_of_socketThread_6() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___socketThread_6)); }
	inline Thread_t241561612 * get_socketThread_6() const { return ___socketThread_6; }
	inline Thread_t241561612 ** get_address_of_socketThread_6() { return &___socketThread_6; }
	inline void set_socketThread_6(Thread_t241561612 * value)
	{
		___socketThread_6 = value;
		Il2CppCodeGenWriteBarrier(&___socketThread_6, value);
	}

	inline static int32_t get_offset_of_pingThread_7() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___pingThread_7)); }
	inline Thread_t241561612 * get_pingThread_7() const { return ___pingThread_7; }
	inline Thread_t241561612 ** get_address_of_pingThread_7() { return &___pingThread_7; }
	inline void set_pingThread_7(Thread_t241561612 * value)
	{
		___pingThread_7 = value;
		Il2CppCodeGenWriteBarrier(&___pingThread_7, value);
	}

	inline static int32_t get_offset_of_encoder_8() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___encoder_8)); }
	inline Encoder_t312907062 * get_encoder_8() const { return ___encoder_8; }
	inline Encoder_t312907062 ** get_address_of_encoder_8() { return &___encoder_8; }
	inline void set_encoder_8(Encoder_t312907062 * value)
	{
		___encoder_8 = value;
		Il2CppCodeGenWriteBarrier(&___encoder_8, value);
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___decoder_9)); }
	inline Decoder_t1728682230 * get_decoder_9() const { return ___decoder_9; }
	inline Decoder_t1728682230 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(Decoder_t1728682230 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_9, value);
	}

	inline static int32_t get_offset_of_parser_10() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___parser_10)); }
	inline Parser_t3968527057 * get_parser_10() const { return ___parser_10; }
	inline Parser_t3968527057 ** get_address_of_parser_10() { return &___parser_10; }
	inline void set_parser_10(Parser_t3968527057 * value)
	{
		___parser_10 = value;
		Il2CppCodeGenWriteBarrier(&___parser_10, value);
	}

	inline static int32_t get_offset_of_packetID_11() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___packetID_11)); }
	inline int32_t get_packetID_11() const { return ___packetID_11; }
	inline int32_t* get_address_of_packetID_11() { return &___packetID_11; }
	inline void set_packetID_11(int32_t value)
	{
		___packetID_11 = value;
	}

	inline static int32_t get_offset_of_eventHandlers_12() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___eventHandlers_12)); }
	inline Dictionary_2_t2682623995 * get_eventHandlers_12() const { return ___eventHandlers_12; }
	inline Dictionary_2_t2682623995 ** get_address_of_eventHandlers_12() { return &___eventHandlers_12; }
	inline void set_eventHandlers_12(Dictionary_2_t2682623995 * value)
	{
		___eventHandlers_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventHandlers_12, value);
	}

	inline static int32_t get_offset_of_eventQueueLock_13() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___eventQueueLock_13)); }
	inline Il2CppObject * get_eventQueueLock_13() const { return ___eventQueueLock_13; }
	inline Il2CppObject ** get_address_of_eventQueueLock_13() { return &___eventQueueLock_13; }
	inline void set_eventQueueLock_13(Il2CppObject * value)
	{
		___eventQueueLock_13 = value;
		Il2CppCodeGenWriteBarrier(&___eventQueueLock_13, value);
	}

	inline static int32_t get_offset_of_eventQueue_14() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___eventQueue_14)); }
	inline Queue_1_t1416581054 * get_eventQueue_14() const { return ___eventQueue_14; }
	inline Queue_1_t1416581054 ** get_address_of_eventQueue_14() { return &___eventQueue_14; }
	inline void set_eventQueue_14(Queue_1_t1416581054 * value)
	{
		___eventQueue_14 = value;
		Il2CppCodeGenWriteBarrier(&___eventQueue_14, value);
	}

	inline static int32_t get_offset_of_ackQueueLock_15() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___ackQueueLock_15)); }
	inline Il2CppObject * get_ackQueueLock_15() const { return ___ackQueueLock_15; }
	inline Il2CppObject ** get_address_of_ackQueueLock_15() { return &___ackQueueLock_15; }
	inline void set_ackQueueLock_15(Il2CppObject * value)
	{
		___ackQueueLock_15 = value;
		Il2CppCodeGenWriteBarrier(&___ackQueueLock_15, value);
	}

	inline static int32_t get_offset_of_ackQueue_16() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___ackQueue_16)); }
	inline Queue_1_t3028170516 * get_ackQueue_16() const { return ___ackQueue_16; }
	inline Queue_1_t3028170516 ** get_address_of_ackQueue_16() { return &___ackQueue_16; }
	inline void set_ackQueue_16(Queue_1_t3028170516 * value)
	{
		___ackQueue_16 = value;
		Il2CppCodeGenWriteBarrier(&___ackQueue_16, value);
	}

	inline static int32_t get_offset_of_ackList_17() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___ackList_17)); }
	inline List_1_t3787164161 * get_ackList_17() const { return ___ackList_17; }
	inline List_1_t3787164161 ** get_address_of_ackList_17() { return &___ackList_17; }
	inline void set_ackList_17(List_1_t3787164161 * value)
	{
		___ackList_17 = value;
		Il2CppCodeGenWriteBarrier(&___ackList_17, value);
	}

	inline static int32_t get_offset_of_isConnected_18() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___isConnected_18)); }
	inline bool get_isConnected_18() const { return ___isConnected_18; }
	inline bool* get_address_of_isConnected_18() { return &___isConnected_18; }
	inline void set_isConnected_18(bool value)
	{
		___isConnected_18 = value;
	}

	inline static int32_t get_offset_of_pinging_19() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___pinging_19)); }
	inline bool get_pinging_19() const { return ___pinging_19; }
	inline bool* get_address_of_pinging_19() { return &___pinging_19; }
	inline void set_pinging_19(bool value)
	{
		___pinging_19 = value;
	}

	inline static int32_t get_offset_of_pong_20() { return static_cast<int32_t>(offsetof(NativeSocketIO_t825694168, ___pong_20)); }
	inline bool get_pong_20() const { return ___pong_20; }
	inline bool* get_address_of_pong_20() { return &___pong_20; }
	inline void set_pong_20(bool value)
	{
		___pong_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
