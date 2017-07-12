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

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3171032996;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2645893724.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_BaseFixupRec3171032996.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C"  void ObjectRecord__ctor_m684939957 (ObjectRecord_t4134110382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern "C"  void ObjectRecord_SetMemberValue_m3741789413 (ObjectRecord_t4134110382 * __this, ObjectManager_t2645893724 * ___manager0, MemberInfo_t * ___member1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern "C"  void ObjectRecord_SetArrayValue_m139432563 (ObjectRecord_t4134110382 * __this, ObjectManager_t2645893724 * ___manager0, Il2CppObject * ___value1, Int32U5BU5D_t3030399641* ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern "C"  void ObjectRecord_SetMemberValue_m1421538287 (ObjectRecord_t4134110382 * __this, ObjectManager_t2645893724 * ___manager0, String_t* ___memberName1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C"  bool ObjectRecord_get_IsInstanceReady_m1260108942 (ObjectRecord_t4134110382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C"  bool ObjectRecord_get_IsUnsolvedObjectReference_m2202692850 (ObjectRecord_t4134110382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C"  bool ObjectRecord_get_IsRegistered_m2303148462 (ObjectRecord_t4134110382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C"  bool ObjectRecord_DoFixups_m1668820712 (ObjectRecord_t4134110382 * __this, bool ___asContainer0, ObjectManager_t2645893724 * ___manager1, bool ___strict2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_RemoveFixup_m2623052473 (ObjectRecord_t4134110382 * __this, BaseFixupRecord_t3171032996 * ___fixupToRemove0, bool ___asContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_UnchainFixup_m3025030310 (ObjectRecord_t4134110382 * __this, BaseFixupRecord_t3171032996 * ___fixup0, BaseFixupRecord_t3171032996 * ___prevFixup1, bool ___asContainer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_ChainFixup_m1061945698 (ObjectRecord_t4134110382 * __this, BaseFixupRecord_t3171032996 * ___fixup0, bool ___asContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  bool ObjectRecord_LoadData_m2015274273 (ObjectRecord_t4134110382 * __this, ObjectManager_t2645893724 * ___manager0, Il2CppObject * ___selector1, StreamingContext_t1417235061  ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C"  bool ObjectRecord_get_HasPendingFixups_m670959802 (ObjectRecord_t4134110382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
