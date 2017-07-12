#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Timer
struct Timer_t791717973;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t2917099865;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t713841488;

#include "System_System_ComponentModel_Component2826673791.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Timers.Timer
struct  Timer_t4294691011  : public Component_t2826673791
{
public:
	// System.Double System.Timers.Timer::interval
	double ___interval_4;
	// System.Boolean System.Timers.Timer::autoReset
	bool ___autoReset_5;
	// System.Threading.Timer System.Timers.Timer::timer
	Timer_t791717973 * ___timer_6;
	// System.Object System.Timers.Timer::_lock
	Il2CppObject * ____lock_7;
	// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::so
	Il2CppObject * ___so_8;
	// System.Timers.ElapsedEventHandler System.Timers.Timer::Elapsed
	ElapsedEventHandler_t713841488 * ___Elapsed_9;

public:
	inline static int32_t get_offset_of_interval_4() { return static_cast<int32_t>(offsetof(Timer_t4294691011, ___interval_4)); }
	inline double get_interval_4() const { return ___interval_4; }
	inline double* get_address_of_interval_4() { return &___interval_4; }
	inline void set_interval_4(double value)
	{
		___interval_4 = value;
	}

	inline static int32_t get_offset_of_autoReset_5() { return static_cast<int32_t>(offsetof(Timer_t4294691011, ___autoReset_5)); }
	inline bool get_autoReset_5() const { return ___autoReset_5; }
	inline bool* get_address_of_autoReset_5() { return &___autoReset_5; }
	inline void set_autoReset_5(bool value)
	{
		___autoReset_5 = value;
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Timer_t4294691011, ___timer_6)); }
	inline Timer_t791717973 * get_timer_6() const { return ___timer_6; }
	inline Timer_t791717973 ** get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(Timer_t791717973 * value)
	{
		___timer_6 = value;
		Il2CppCodeGenWriteBarrier(&___timer_6, value);
	}

	inline static int32_t get_offset_of__lock_7() { return static_cast<int32_t>(offsetof(Timer_t4294691011, ____lock_7)); }
	inline Il2CppObject * get__lock_7() const { return ____lock_7; }
	inline Il2CppObject ** get_address_of__lock_7() { return &____lock_7; }
	inline void set__lock_7(Il2CppObject * value)
	{
		____lock_7 = value;
		Il2CppCodeGenWriteBarrier(&____lock_7, value);
	}

	inline static int32_t get_offset_of_so_8() { return static_cast<int32_t>(offsetof(Timer_t4294691011, ___so_8)); }
	inline Il2CppObject * get_so_8() const { return ___so_8; }
	inline Il2CppObject ** get_address_of_so_8() { return &___so_8; }
	inline void set_so_8(Il2CppObject * value)
	{
		___so_8 = value;
		Il2CppCodeGenWriteBarrier(&___so_8, value);
	}

	inline static int32_t get_offset_of_Elapsed_9() { return static_cast<int32_t>(offsetof(Timer_t4294691011, ___Elapsed_9)); }
	inline ElapsedEventHandler_t713841488 * get_Elapsed_9() const { return ___Elapsed_9; }
	inline ElapsedEventHandler_t713841488 ** get_address_of_Elapsed_9() { return &___Elapsed_9; }
	inline void set_Elapsed_9(ElapsedEventHandler_t713841488 * value)
	{
		___Elapsed_9 = value;
		Il2CppCodeGenWriteBarrier(&___Elapsed_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
