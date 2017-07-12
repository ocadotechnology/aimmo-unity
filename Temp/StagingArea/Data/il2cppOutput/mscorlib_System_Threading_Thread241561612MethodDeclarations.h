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

// System.Threading.Thread
struct Thread_t241561612;
// System.Threading.ThreadStart
struct ThreadStart_t3437517264;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t2412552885;
// System.Runtime.Remoting.Contexts.Context
struct Context_t502196753;
// System.MulticastDelegate
struct MulticastDelegate_t3201952435;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Threading.ExecutionContext
struct ExecutionContext_t1392266323;
// System.Threading.CompressedStack
struct CompressedStack_t1568001503;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_ThreadStart3437517264.h"
#include "mscorlib_System_Threading_ParameterizedThreadStart2412552885.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_MulticastDelegate3201952435.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Threading_ThreadState1158972609.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C"  void Thread__ctor_m4175494164 (Thread_t241561612 * __this, ThreadStart_t3437517264 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
extern "C"  void Thread__ctor_m583758171 (Thread_t241561612 * __this, ParameterizedThreadStart_t2412552885 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
extern "C"  void Thread__cctor_m1889167542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C"  Context_t502196753 * Thread_get_CurrentContext_m3123598616 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C"  Thread_t241561612 * Thread_CurrentThread_internal_m4279124828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C"  Thread_t241561612 * Thread_get_CurrentThread_m3667342817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::FreeLocalSlotValues(System.Int32,System.Boolean)
extern "C"  void Thread_FreeLocalSlotValues_m2948667652 (Il2CppObject * __this /* static, unused */, int32_t ___slot0, bool ___thread_local1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C"  int32_t Thread_GetDomainID_m21918982 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort_internal()
extern "C"  void Thread_ResetAbort_internal_m1678787734 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort()
extern "C"  void Thread_ResetAbort_m229968412 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep_internal(System.Int32)
extern "C"  void Thread_Sleep_internal_m2720556847 (Il2CppObject * __this /* static, unused */, int32_t ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C"  void Thread_Sleep_m1248422015 (Il2CppObject * __this /* static, unused */, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C"  IntPtr_t Thread_Thread_internal_m169770020 (Thread_t241561612 * __this, MulticastDelegate_t3201952435 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
extern "C"  void Thread_Thread_init_m3428457272 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C"  CultureInfo_t3500843524 * Thread_GetCachedCurrentCulture_m450033007 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C"  ByteU5BU5D_t3397334013* Thread_GetSerializedCurrentCulture_m3761778900 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C"  void Thread_SetCachedCurrentCulture_m1219220170 (Thread_t241561612 * __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C"  CultureInfo_t3500843524 * Thread_GetCachedCurrentUICulture_m5590127 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C"  ByteU5BU5D_t3397334013* Thread_GetSerializedCurrentUICulture_m4048400942 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C"  void Thread_SetCachedCurrentUICulture_m1504514384 (Thread_t241561612 * __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C"  CultureInfo_t3500843524 * Thread_get_CurrentCulture_m1387904254 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C"  CultureInfo_t3500843524 * Thread_get_CurrentUICulture_m4211585028 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C"  void Thread_set_IsBackground_m2222126055 (Thread_t241561612 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C"  void Thread_SetName_internal_m314513552 (Thread_t241561612 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C"  void Thread_set_Name_m1343706609 (Thread_t241561612 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort_internal(System.Object)
extern "C"  void Thread_Abort_internal_m3382411109 (Thread_t241561612 * __this, Il2CppObject * ___stateInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
extern "C"  void Thread_Abort_m524248451 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Thread::Join_internal(System.Int32,System.IntPtr)
extern "C"  bool Thread_Join_internal_m970254198 (Thread_t241561612 * __this, int32_t ___ms0, IntPtr_t ___handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Thread::Join(System.Int32)
extern "C"  bool Thread_Join_m2431562402 (Thread_t241561612 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C"  void Thread_Start_m1419497481 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C"  void Thread_Thread_free_internal_m2869491064 (Thread_t241561612 * __this, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C"  void Thread_Finalize_m3231208127 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C"  void Thread_SetState_m3198426726 (Thread_t241561612 * __this, int32_t ___set0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C"  void Thread_ClrState_m822263449 (Thread_t241561612 * __this, int32_t ___clr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C"  int32_t Thread_GetNewManagedId_m2298866089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C"  int32_t Thread_GetNewManagedId_internal_m3211695465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern "C"  ExecutionContext_t1392266323 * Thread_get_ExecutionContext_m922067206 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C"  int32_t Thread_get_ManagedThreadId_m1995754972 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C"  int32_t Thread_GetHashCode_m2038641494 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start(System.Object)
extern "C"  void Thread_Start_m2652746659 (Thread_t241561612 * __this, Il2CppObject * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C"  CompressedStack_t1568001503 * Thread_GetCompressedStack_m1220107123 (Thread_t241561612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
