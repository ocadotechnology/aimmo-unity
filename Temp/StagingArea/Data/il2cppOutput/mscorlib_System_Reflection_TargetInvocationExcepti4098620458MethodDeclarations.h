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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t4098620458;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C"  void TargetInvocationException__ctor_m1059845570 (TargetInvocationException_t4098620458 * __this, Exception_t1927440687 * ___inner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TargetInvocationException__ctor_m2308614207 (TargetInvocationException_t4098620458 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___sc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
