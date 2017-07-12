#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketException
struct  WebSocketException_t1348391352  : public Exception_t1927440687
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::_code
	uint16_t ____code_11;

public:
	inline static int32_t get_offset_of__code_11() { return static_cast<int32_t>(offsetof(WebSocketException_t1348391352, ____code_11)); }
	inline uint16_t get__code_11() const { return ____code_11; }
	inline uint16_t* get_address_of__code_11() { return &____code_11; }
	inline void set__code_11(uint16_t value)
	{
		____code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
