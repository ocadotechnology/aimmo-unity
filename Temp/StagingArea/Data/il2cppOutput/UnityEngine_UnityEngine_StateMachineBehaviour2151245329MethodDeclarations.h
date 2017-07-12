#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t2151245329;
// UnityEngine.Animator
struct Animator_t69676727;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo2577870592.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim4078305555.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C"  void StateMachineBehaviour__ctor_m153194 (StateMachineBehaviour_t2151245329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateEnter_m1095276890 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateUpdate_m2021794605 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateExit_m1490844990 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateMove_m3403753809 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateIK_m3200380538 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateMachineEnter_m1007088766 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, int32_t ___stateMachinePathHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateMachineExit_m526258580 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, int32_t ___stateMachinePathHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateEnter_m2847783286 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t4078305555  ___controller3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateUpdate_m811412975 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t4078305555  ___controller3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateExit_m4064436078 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t4078305555  ___controller3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateMove_m1941561287 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t4078305555  ___controller3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateIK_m726770682 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, AnimatorStateInfo_t2577870592  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t4078305555  ___controller3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateMachineEnter_m1524239226 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t4078305555  ___controller2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateMachineExit_m2213014568 (StateMachineBehaviour_t2151245329 * __this, Animator_t69676727 * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t4078305555  ___controller2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
