#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t4810721;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMo857969000.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState3420894182.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3793436469  : public Il2CppObject
{
public:
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t4810721 * ___m_Arguments_1;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_2;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Arguments_1)); }
	inline ArgumentCache_t4810721 * get_m_Arguments_1() const { return ___m_Arguments_1; }
	inline ArgumentCache_t4810721 ** get_address_of_m_Arguments_1() { return &___m_Arguments_1; }
	inline void set_m_Arguments_1(ArgumentCache_t4810721 * value)
	{
		___m_Arguments_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Arguments_1, value);
	}

	inline static int32_t get_offset_of_m_CallState_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_CallState_2)); }
	inline int32_t get_m_CallState_2() const { return ___m_CallState_2; }
	inline int32_t* get_address_of_m_CallState_2() { return &___m_CallState_2; }
	inline void set_m_CallState_2(int32_t value)
	{
		___m_CallState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
