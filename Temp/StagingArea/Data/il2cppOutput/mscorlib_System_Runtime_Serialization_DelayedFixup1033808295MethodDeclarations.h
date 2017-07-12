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

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t1033808295;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord4134110382.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2645893724.h"

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C"  void DelayedFixupRecord__ctor_m638928292 (DelayedFixupRecord_t1033808295 * __this, ObjectRecord_t4134110382 * ___objectToBeFixed0, String_t* ___memberName1, ObjectRecord_t4134110382 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void DelayedFixupRecord_FixupImpl_m4249966635 (DelayedFixupRecord_t1033808295 * __this, ObjectManager_t2645893724 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
