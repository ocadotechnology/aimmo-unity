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

// System.Threading.ExecutionContext
struct ExecutionContext_t1392266323;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Security.SecurityContext
struct SecurityContext_t3554639385;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_ExecutionContext1392266323.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Security_SecurityContext3554639385.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C"  void ExecutionContext__ctor_m247602348 (ExecutionContext_t1392266323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern "C"  void ExecutionContext__ctor_m550470476 (ExecutionContext_t1392266323 * __this, ExecutionContext_t1392266323 * ___ec0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ExecutionContext__ctor_m573218565 (ExecutionContext_t1392266323 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern "C"  ExecutionContext_t1392266323 * ExecutionContext_Capture_m20586159 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ExecutionContext_GetObjectData_m1456913356 (ExecutionContext_t1392266323 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern "C"  SecurityContext_t3554639385 * ExecutionContext_get_SecurityContext_m216088539 (ExecutionContext_t1392266323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C"  void ExecutionContext_set_SecurityContext_m1228391060 (ExecutionContext_t1392266323 * __this, SecurityContext_t3554639385 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C"  bool ExecutionContext_get_FlowSuppressed_m1728459637 (ExecutionContext_t1392266323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern "C"  bool ExecutionContext_IsFlowSuppressed_m907608672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
