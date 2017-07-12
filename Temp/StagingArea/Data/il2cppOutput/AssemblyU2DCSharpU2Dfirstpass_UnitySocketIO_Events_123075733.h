#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocketIO.Events.Ack
struct  Ack_t123075733  : public Il2CppObject
{
public:
	// System.Int32 UnitySocketIO.Events.Ack::packetID
	int32_t ___packetID_0;
	// System.Action`1<System.String> UnitySocketIO.Events.Ack::action
	Action_1_t1831019615 * ___action_1;
	// System.DateTime UnitySocketIO.Events.Ack::time
	DateTime_t693205669  ___time_2;

public:
	inline static int32_t get_offset_of_packetID_0() { return static_cast<int32_t>(offsetof(Ack_t123075733, ___packetID_0)); }
	inline int32_t get_packetID_0() const { return ___packetID_0; }
	inline int32_t* get_address_of_packetID_0() { return &___packetID_0; }
	inline void set_packetID_0(int32_t value)
	{
		___packetID_0 = value;
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Ack_t123075733, ___action_1)); }
	inline Action_1_t1831019615 * get_action_1() const { return ___action_1; }
	inline Action_1_t1831019615 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_1_t1831019615 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Ack_t123075733, ___time_2)); }
	inline DateTime_t693205669  get_time_2() const { return ___time_2; }
	inline DateTime_t693205669 * get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(DateTime_t693205669  value)
	{
		___time_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
