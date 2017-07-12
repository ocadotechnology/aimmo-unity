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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t4810721  : public Il2CppObject
{
public:
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_0;

public:
	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_ObjectArgumentAssemblyTypeName_0)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_0() const { return ___m_ObjectArgumentAssemblyTypeName_0; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_0() { return &___m_ObjectArgumentAssemblyTypeName_0; }
	inline void set_m_ObjectArgumentAssemblyTypeName_0(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ObjectArgumentAssemblyTypeName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
