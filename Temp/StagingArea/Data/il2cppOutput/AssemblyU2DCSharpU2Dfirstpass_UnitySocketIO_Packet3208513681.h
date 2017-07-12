#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Packet_197509952.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocketIO_Packet_128979569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.Packet.SocketPacket
struct  SocketPacket_t3208513681  : public Il2CppObject
{
public:
	// UnitySocketIO.Packet.EnginePacketType UnitySocketIO.Packet.SocketPacket::enginePacketType
	int32_t ___enginePacketType_0;
	// UnitySocketIO.Packet.SocketPacketType UnitySocketIO.Packet.SocketPacket::socketPacketType
	int32_t ___socketPacketType_1;
	// System.Int32 UnitySocketIO.Packet.SocketPacket::attachments
	int32_t ___attachments_2;
	// System.String UnitySocketIO.Packet.SocketPacket::nsp
	String_t* ___nsp_3;
	// System.Int32 UnitySocketIO.Packet.SocketPacket::id
	int32_t ___id_4;
	// System.String UnitySocketIO.Packet.SocketPacket::json
	String_t* ___json_5;

public:
	inline static int32_t get_offset_of_enginePacketType_0() { return static_cast<int32_t>(offsetof(SocketPacket_t3208513681, ___enginePacketType_0)); }
	inline int32_t get_enginePacketType_0() const { return ___enginePacketType_0; }
	inline int32_t* get_address_of_enginePacketType_0() { return &___enginePacketType_0; }
	inline void set_enginePacketType_0(int32_t value)
	{
		___enginePacketType_0 = value;
	}

	inline static int32_t get_offset_of_socketPacketType_1() { return static_cast<int32_t>(offsetof(SocketPacket_t3208513681, ___socketPacketType_1)); }
	inline int32_t get_socketPacketType_1() const { return ___socketPacketType_1; }
	inline int32_t* get_address_of_socketPacketType_1() { return &___socketPacketType_1; }
	inline void set_socketPacketType_1(int32_t value)
	{
		___socketPacketType_1 = value;
	}

	inline static int32_t get_offset_of_attachments_2() { return static_cast<int32_t>(offsetof(SocketPacket_t3208513681, ___attachments_2)); }
	inline int32_t get_attachments_2() const { return ___attachments_2; }
	inline int32_t* get_address_of_attachments_2() { return &___attachments_2; }
	inline void set_attachments_2(int32_t value)
	{
		___attachments_2 = value;
	}

	inline static int32_t get_offset_of_nsp_3() { return static_cast<int32_t>(offsetof(SocketPacket_t3208513681, ___nsp_3)); }
	inline String_t* get_nsp_3() const { return ___nsp_3; }
	inline String_t** get_address_of_nsp_3() { return &___nsp_3; }
	inline void set_nsp_3(String_t* value)
	{
		___nsp_3 = value;
		Il2CppCodeGenWriteBarrier(&___nsp_3, value);
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(SocketPacket_t3208513681, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_json_5() { return static_cast<int32_t>(offsetof(SocketPacket_t3208513681, ___json_5)); }
	inline String_t* get_json_5() const { return ___json_5; }
	inline String_t** get_address_of_json_5() { return &___json_5; }
	inline void set_json_5(String_t* value)
	{
		___json_5 = value;
		Il2CppCodeGenWriteBarrier(&___json_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
