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

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3171032996;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord4134110382.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2645893724.h"

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C"  void BaseFixupRecord__ctor_m885244951 (BaseFixupRecord_t3171032996 * __this, ObjectRecord_t4134110382 * ___objectToBeFixed0, ObjectRecord_t4134110382 * ___objectRequired1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C"  bool BaseFixupRecord_DoFixup_m1821597450 (BaseFixupRecord_t3171032996 * __this, ObjectManager_t2645893724 * ___manager0, bool ___strict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
