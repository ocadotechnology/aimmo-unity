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

// System.Threading.CompressedStack
struct CompressedStack_t1568001503;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_CompressedStack1568001503.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern "C"  void CompressedStack__ctor_m2080709323 (CompressedStack_t1568001503 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern "C"  void CompressedStack__ctor_m276924800 (CompressedStack_t1568001503 * __this, CompressedStack_t1568001503 * ___cs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern "C"  CompressedStack_t1568001503 * CompressedStack_CreateCopy_m3321727874 (CompressedStack_t1568001503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern "C"  CompressedStack_t1568001503 * CompressedStack_Capture_m179370023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void CompressedStack_GetObjectData_m2387204186 (CompressedStack_t1568001503 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C"  bool CompressedStack_IsEmpty_m2144176681 (CompressedStack_t1568001503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
