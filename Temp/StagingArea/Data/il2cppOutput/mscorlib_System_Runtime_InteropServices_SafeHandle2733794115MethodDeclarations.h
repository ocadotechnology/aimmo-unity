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

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t2733794115;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C"  void SafeHandle__ctor_m1890452380 (SafeHandle_t2733794115 * __this, IntPtr_t ___invalidHandleValue0, bool ___ownsHandle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C"  void SafeHandle_Close_m1146946803 (SafeHandle_t2733794115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern "C"  void SafeHandle_DangerousAddRef_m3138941540 (SafeHandle_t2733794115 * __this, bool* ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern "C"  IntPtr_t SafeHandle_DangerousGetHandle_m1328172664 (SafeHandle_t2733794115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern "C"  void SafeHandle_DangerousRelease_m2167699172 (SafeHandle_t2733794115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C"  void SafeHandle_Dispose_m1233016688 (SafeHandle_t2733794115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C"  void SafeHandle_Dispose_m3871883741 (SafeHandle_t2733794115 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C"  void SafeHandle_SetHandle_m1980208835 (SafeHandle_t2733794115 * __this, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C"  void SafeHandle_Finalize_m1839546519 (SafeHandle_t2733794115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
