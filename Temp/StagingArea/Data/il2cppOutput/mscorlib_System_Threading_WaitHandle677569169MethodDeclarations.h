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

// System.Threading.WaitHandle
struct WaitHandle_t677569169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C"  void WaitHandle__ctor_m1256161634 (WaitHandle_t677569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C"  void WaitHandle__cctor_m2138880789 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C"  void WaitHandle_System_IDisposable_Dispose_m4264261745 (WaitHandle_t677569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Close()
extern "C"  void WaitHandle_Close_m3077368078 (WaitHandle_t677569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C"  IntPtr_t WaitHandle_get_Handle_m3264724944 (WaitHandle_t677569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C"  void WaitHandle_set_Handle_m2541455323 (WaitHandle_t677569169 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_internal_m1464117309 (WaitHandle_t677569169 * __this, IntPtr_t ___handle0, int32_t ___ms1, bool ___exitContext2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C"  void WaitHandle_Dispose_m441403862 (WaitHandle_t677569169 * __this, bool ___explicitDisposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C"  bool WaitHandle_WaitOne_m370363697 (WaitHandle_t677569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_m1663572919 (WaitHandle_t677569169 * __this, int32_t ___millisecondsTimeout0, bool ___exitContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32)
extern "C"  bool WaitHandle_WaitOne_m3743599356 (WaitHandle_t677569169 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.TimeSpan)
extern "C"  bool WaitHandle_WaitOne_m2163633347 (WaitHandle_t677569169 * __this, TimeSpan_t3430258949  ___timeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.TimeSpan,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_m2376716864 (WaitHandle_t677569169 * __this, TimeSpan_t3430258949  ___timeout0, bool ___exitContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C"  void WaitHandle_CheckDisposed_m2858088315 (WaitHandle_t677569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C"  void WaitHandle_Finalize_m3037611358 (WaitHandle_t677569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
