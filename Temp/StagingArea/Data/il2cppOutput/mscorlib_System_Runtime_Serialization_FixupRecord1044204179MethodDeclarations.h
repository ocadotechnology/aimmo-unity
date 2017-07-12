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

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t1044204179;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord4134110382.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2645893724.h"

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C"  void FixupRecord__ctor_m991048410 (FixupRecord_t1044204179 * __this, ObjectRecord_t4134110382 * ___objectToBeFixed0, MemberInfo_t * ___member1, ObjectRecord_t4134110382 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void FixupRecord_FixupImpl_m2837267335 (FixupRecord_t1044204179 * __this, ObjectManager_t2645893724 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
