#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t2063364415;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AvatarController
struct  AvatarController_t3473942359  : public MonoBehaviour_t1158329972
{
public:
	// System.Single AvatarController::startTime
	float ___startTime_3;
	// UnityEngine.Vector3 AvatarController::currPosition
	Vector3_t2243707580  ___currPosition_4;
	// UnityEngine.Vector3 AvatarController::nextPosition
	Vector3_t2243707580  ___nextPosition_5;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> AvatarController::positionsQueue
	Queue_1_t2063364415 * ___positionsQueue_6;
	// System.Int32 AvatarController::health
	int32_t ___health_7;
	// System.Int32 AvatarController::score
	int32_t ___score_8;

public:
	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(AvatarController_t3473942359, ___startTime_3)); }
	inline float get_startTime_3() const { return ___startTime_3; }
	inline float* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(float value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_currPosition_4() { return static_cast<int32_t>(offsetof(AvatarController_t3473942359, ___currPosition_4)); }
	inline Vector3_t2243707580  get_currPosition_4() const { return ___currPosition_4; }
	inline Vector3_t2243707580 * get_address_of_currPosition_4() { return &___currPosition_4; }
	inline void set_currPosition_4(Vector3_t2243707580  value)
	{
		___currPosition_4 = value;
	}

	inline static int32_t get_offset_of_nextPosition_5() { return static_cast<int32_t>(offsetof(AvatarController_t3473942359, ___nextPosition_5)); }
	inline Vector3_t2243707580  get_nextPosition_5() const { return ___nextPosition_5; }
	inline Vector3_t2243707580 * get_address_of_nextPosition_5() { return &___nextPosition_5; }
	inline void set_nextPosition_5(Vector3_t2243707580  value)
	{
		___nextPosition_5 = value;
	}

	inline static int32_t get_offset_of_positionsQueue_6() { return static_cast<int32_t>(offsetof(AvatarController_t3473942359, ___positionsQueue_6)); }
	inline Queue_1_t2063364415 * get_positionsQueue_6() const { return ___positionsQueue_6; }
	inline Queue_1_t2063364415 ** get_address_of_positionsQueue_6() { return &___positionsQueue_6; }
	inline void set_positionsQueue_6(Queue_1_t2063364415 * value)
	{
		___positionsQueue_6 = value;
		Il2CppCodeGenWriteBarrier(&___positionsQueue_6, value);
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(AvatarController_t3473942359, ___health_7)); }
	inline int32_t get_health_7() const { return ___health_7; }
	inline int32_t* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(int32_t value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(AvatarController_t3473942359, ___score_8)); }
	inline int32_t get_score_8() const { return ___score_8; }
	inline int32_t* get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(int32_t value)
	{
		___score_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
