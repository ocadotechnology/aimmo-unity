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

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1994227600;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord4134110382.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2645893724.h"

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ArrayFixupRecord__ctor_m3659990982 (ArrayFixupRecord_t1994227600 * __this, ObjectRecord_t4134110382 * ___objectToBeFixed0, int32_t ___index1, ObjectRecord_t4134110382 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void ArrayFixupRecord_FixupImpl_m2377725358 (ArrayFixupRecord_t1994227600 * __this, ObjectManager_t2645893724 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
