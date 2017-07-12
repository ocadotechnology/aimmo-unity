#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Fin2752139063.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Mask1111889066.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Rsv1058189029.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame
struct  WebSocketFrame_t764750278  : public Il2CppObject
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::_extPayloadLength
	ByteU5BU5D_t3397334013* ____extPayloadLength_0;
	// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::_fin
	uint8_t ____fin_1;
	// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::_mask
	uint8_t ____mask_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame::_maskingKey
	ByteU5BU5D_t3397334013* ____maskingKey_3;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::_opcode
	uint8_t ____opcode_4;
	// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::_payloadData
	PayloadData_t3839327312 * ____payloadData_5;
	// System.Byte WebSocketSharp.WebSocketFrame::_payloadLength
	uint8_t ____payloadLength_6;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv1
	uint8_t ____rsv1_7;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv2
	uint8_t ____rsv2_8;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv3
	uint8_t ____rsv3_9;

public:
	inline static int32_t get_offset_of__extPayloadLength_0() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____extPayloadLength_0)); }
	inline ByteU5BU5D_t3397334013* get__extPayloadLength_0() const { return ____extPayloadLength_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__extPayloadLength_0() { return &____extPayloadLength_0; }
	inline void set__extPayloadLength_0(ByteU5BU5D_t3397334013* value)
	{
		____extPayloadLength_0 = value;
		Il2CppCodeGenWriteBarrier(&____extPayloadLength_0, value);
	}

	inline static int32_t get_offset_of__fin_1() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____fin_1)); }
	inline uint8_t get__fin_1() const { return ____fin_1; }
	inline uint8_t* get_address_of__fin_1() { return &____fin_1; }
	inline void set__fin_1(uint8_t value)
	{
		____fin_1 = value;
	}

	inline static int32_t get_offset_of__mask_2() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____mask_2)); }
	inline uint8_t get__mask_2() const { return ____mask_2; }
	inline uint8_t* get_address_of__mask_2() { return &____mask_2; }
	inline void set__mask_2(uint8_t value)
	{
		____mask_2 = value;
	}

	inline static int32_t get_offset_of__maskingKey_3() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____maskingKey_3)); }
	inline ByteU5BU5D_t3397334013* get__maskingKey_3() const { return ____maskingKey_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__maskingKey_3() { return &____maskingKey_3; }
	inline void set__maskingKey_3(ByteU5BU5D_t3397334013* value)
	{
		____maskingKey_3 = value;
		Il2CppCodeGenWriteBarrier(&____maskingKey_3, value);
	}

	inline static int32_t get_offset_of__opcode_4() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____opcode_4)); }
	inline uint8_t get__opcode_4() const { return ____opcode_4; }
	inline uint8_t* get_address_of__opcode_4() { return &____opcode_4; }
	inline void set__opcode_4(uint8_t value)
	{
		____opcode_4 = value;
	}

	inline static int32_t get_offset_of__payloadData_5() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____payloadData_5)); }
	inline PayloadData_t3839327312 * get__payloadData_5() const { return ____payloadData_5; }
	inline PayloadData_t3839327312 ** get_address_of__payloadData_5() { return &____payloadData_5; }
	inline void set__payloadData_5(PayloadData_t3839327312 * value)
	{
		____payloadData_5 = value;
		Il2CppCodeGenWriteBarrier(&____payloadData_5, value);
	}

	inline static int32_t get_offset_of__payloadLength_6() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____payloadLength_6)); }
	inline uint8_t get__payloadLength_6() const { return ____payloadLength_6; }
	inline uint8_t* get_address_of__payloadLength_6() { return &____payloadLength_6; }
	inline void set__payloadLength_6(uint8_t value)
	{
		____payloadLength_6 = value;
	}

	inline static int32_t get_offset_of__rsv1_7() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____rsv1_7)); }
	inline uint8_t get__rsv1_7() const { return ____rsv1_7; }
	inline uint8_t* get_address_of__rsv1_7() { return &____rsv1_7; }
	inline void set__rsv1_7(uint8_t value)
	{
		____rsv1_7 = value;
	}

	inline static int32_t get_offset_of__rsv2_8() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____rsv2_8)); }
	inline uint8_t get__rsv2_8() const { return ____rsv2_8; }
	inline uint8_t* get_address_of__rsv2_8() { return &____rsv2_8; }
	inline void set__rsv2_8(uint8_t value)
	{
		____rsv2_8 = value;
	}

	inline static int32_t get_offset_of__rsv3_9() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278, ____rsv3_9)); }
	inline uint8_t get__rsv3_9() const { return ____rsv3_9; }
	inline uint8_t* get_address_of__rsv3_9() { return &____rsv3_9; }
	inline void set__rsv3_9(uint8_t value)
	{
		____rsv3_9 = value;
	}
};

struct WebSocketFrame_t764750278_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::EmptyPingBytes
	ByteU5BU5D_t3397334013* ___EmptyPingBytes_10;

public:
	inline static int32_t get_offset_of_EmptyPingBytes_10() { return static_cast<int32_t>(offsetof(WebSocketFrame_t764750278_StaticFields, ___EmptyPingBytes_10)); }
	inline ByteU5BU5D_t3397334013* get_EmptyPingBytes_10() const { return ___EmptyPingBytes_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_EmptyPingBytes_10() { return &___EmptyPingBytes_10; }
	inline void set_EmptyPingBytes_10(ByteU5BU5D_t3397334013* value)
	{
		___EmptyPingBytes_10 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyPingBytes_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
