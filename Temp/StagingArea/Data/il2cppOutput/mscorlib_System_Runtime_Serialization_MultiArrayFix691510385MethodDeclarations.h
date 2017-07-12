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

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t691510385;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord4134110382.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2645893724.h"

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C"  void MultiArrayFixupRecord__ctor_m3486976229 (MultiArrayFixupRecord_t691510385 * __this, ObjectRecord_t4134110382 * ___objectToBeFixed0, Int32U5BU5D_t3030399641* ___indices1, ObjectRecord_t4134110382 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void MultiArrayFixupRecord_FixupImpl_m3100166835 (MultiArrayFixupRecord_t691510385 * __this, ObjectManager_t2645893724 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
