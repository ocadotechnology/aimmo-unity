#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Aut29593226.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.AuthenticationBase
struct  AuthenticationBase_t909684845  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.AuthenticationBase::_scheme
	int32_t ____scheme_0;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.AuthenticationBase::Parameters
	NameValueCollection_t3047564564 * ___Parameters_1;

public:
	inline static int32_t get_offset_of__scheme_0() { return static_cast<int32_t>(offsetof(AuthenticationBase_t909684845, ____scheme_0)); }
	inline int32_t get__scheme_0() const { return ____scheme_0; }
	inline int32_t* get_address_of__scheme_0() { return &____scheme_0; }
	inline void set__scheme_0(int32_t value)
	{
		____scheme_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(AuthenticationBase_t909684845, ___Parameters_1)); }
	inline NameValueCollection_t3047564564 * get_Parameters_1() const { return ___Parameters_1; }
	inline NameValueCollection_t3047564564 ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(NameValueCollection_t3047564564 * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier(&___Parameters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
