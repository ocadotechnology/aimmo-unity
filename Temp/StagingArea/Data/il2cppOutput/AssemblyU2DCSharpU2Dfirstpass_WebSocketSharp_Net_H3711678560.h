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

#include "mscorlib_System_Security_Principal_GenericIdentity607870731.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpDigestIdentity
struct  HttpDigestIdentity_t3711678560  : public GenericIdentity_t607870731
{
public:
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpDigestIdentity::_parameters
	NameValueCollection_t3047564564 * ____parameters_2;

public:
	inline static int32_t get_offset_of__parameters_2() { return static_cast<int32_t>(offsetof(HttpDigestIdentity_t3711678560, ____parameters_2)); }
	inline NameValueCollection_t3047564564 * get__parameters_2() const { return ____parameters_2; }
	inline NameValueCollection_t3047564564 ** get_address_of__parameters_2() { return &____parameters_2; }
	inline void set__parameters_2(NameValueCollection_t3047564564 * value)
	{
		____parameters_2 = value;
		Il2CppCodeGenWriteBarrier(&____parameters_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
