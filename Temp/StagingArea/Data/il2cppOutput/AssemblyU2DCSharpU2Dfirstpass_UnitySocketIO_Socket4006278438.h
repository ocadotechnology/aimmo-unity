#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<UnitySocketIO.Events.SocketIOEvent>>>
struct Dictionary_2_t2682623995;
// System.Object
struct Il2CppObject;
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

// UnitySocketIO.SocketIO.WebGLSocketIO
struct  WebGLSocketIO_t4006278438  : public BaseSocketIO_t938190752
{
public:
	// System.Int32 UnitySocketIO.SocketIO.WebGLSocketIO::packetID
	int32_t ___packetID_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<UnitySocketIO.Events.SocketIOEvent>>> UnitySocketIO.SocketIO.WebGLSocketIO::eventHandlers
	Dictionary_2_t2682623995 * ___eventHandlers_5;
	// System.Object UnitySocketIO.SocketIO.WebGLSocketIO::ackQueueLock
	Il2CppObject * ___ackQueueLock_6;
	// System.Collections.Generic.Queue`1<UnitySocketIO.Packet.SocketPacket> UnitySocketIO.SocketIO.WebGLSocketIO::ackQueue
	Queue_1_t3028170516 * ___ackQueue_7;
	// System.Collections.Generic.List`1<UnitySocketIO.Events.Ack> UnitySocketIO.SocketIO.WebGLSocketIO::ackList
	List_1_t3787164161 * ___ackList_8;
	// System.Boolean UnitySocketIO.SocketIO.WebGLSocketIO::isReady
	bool ___isReady_9;

public:
	inline static int32_t get_offset_of_packetID_4() { return static_cast<int32_t>(offsetof(WebGLSocketIO_t4006278438, ___packetID_4)); }
	inline int32_t get_packetID_4() const { return ___packetID_4; }
	inline int32_t* get_address_of_packetID_4() { return &___packetID_4; }
	inline void set_packetID_4(int32_t value)
	{
		___packetID_4 = value;
	}

	inline static int32_t get_offset_of_eventHandlers_5() { return static_cast<int32_t>(offsetof(WebGLSocketIO_t4006278438, ___eventHandlers_5)); }
	inline Dictionary_2_t2682623995 * get_eventHandlers_5() const { return ___eventHandlers_5; }
	inline Dictionary_2_t2682623995 ** get_address_of_eventHandlers_5() { return &___eventHandlers_5; }
	inline void set_eventHandlers_5(Dictionary_2_t2682623995 * value)
	{
		___eventHandlers_5 = value;
		Il2CppCodeGenWriteBarrier(&___eventHandlers_5, value);
	}

	inline static int32_t get_offset_of_ackQueueLock_6() { return static_cast<int32_t>(offsetof(WebGLSocketIO_t4006278438, ___ackQueueLock_6)); }
	inline Il2CppObject * get_ackQueueLock_6() const { return ___ackQueueLock_6; }
	inline Il2CppObject ** get_address_of_ackQueueLock_6() { return &___ackQueueLock_6; }
	inline void set_ackQueueLock_6(Il2CppObject * value)
	{
		___ackQueueLock_6 = value;
		Il2CppCodeGenWriteBarrier(&___ackQueueLock_6, value);
	}

	inline static int32_t get_offset_of_ackQueue_7() { return static_cast<int32_t>(offsetof(WebGLSocketIO_t4006278438, ___ackQueue_7)); }
	inline Queue_1_t3028170516 * get_ackQueue_7() const { return ___ackQueue_7; }
	inline Queue_1_t3028170516 ** get_address_of_ackQueue_7() { return &___ackQueue_7; }
	inline void set_ackQueue_7(Queue_1_t3028170516 * value)
	{
		___ackQueue_7 = value;
		Il2CppCodeGenWriteBarrier(&___ackQueue_7, value);
	}

	inline static int32_t get_offset_of_ackList_8() { return static_cast<int32_t>(offsetof(WebGLSocketIO_t4006278438, ___ackList_8)); }
	inline List_1_t3787164161 * get_ackList_8() const { return ___ackList_8; }
	inline List_1_t3787164161 ** get_address_of_ackList_8() { return &___ackList_8; }
	inline void set_ackList_8(List_1_t3787164161 * value)
	{
		___ackList_8 = value;
		Il2CppCodeGenWriteBarrier(&___ackList_8, value);
	}

	inline static int32_t get_offset_of_isReady_9() { return static_cast<int32_t>(offsetof(WebGLSocketIO_t4006278438, ___isReady_9)); }
	inline bool get_isReady_9() const { return ___isReady_9; }
	inline bool* get_address_of_isReady_9() { return &___isReady_9; }
	inline void set_isReady_9(bool value)
	{
		___isReady_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
