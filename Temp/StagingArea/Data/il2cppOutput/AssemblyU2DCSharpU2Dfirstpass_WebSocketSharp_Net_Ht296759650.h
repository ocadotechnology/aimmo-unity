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

#include "mscorlib_System_Security_Principal_GenericIdentity607870731.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpBasicIdentity
struct  HttpBasicIdentity_t296759650  : public GenericIdentity_t607870731
{
public:
	// System.String WebSocketSharp.Net.HttpBasicIdentity::_password
	String_t* ____password_2;

public:
	inline static int32_t get_offset_of__password_2() { return static_cast<int32_t>(offsetof(HttpBasicIdentity_t296759650, ____password_2)); }
	inline String_t* get__password_2() const { return ____password_2; }
	inline String_t** get_address_of__password_2() { return &____password_2; }
	inline void set__password_2(String_t* value)
	{
		____password_2 = value;
		Il2CppCodeGenWriteBarrier(&____password_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
