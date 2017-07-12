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

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2645893724;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4134110382;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3171032996;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_BaseFixupRec3171032996.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord4134110382.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectManager__ctor_m1422617760 (ObjectManager_t2645893724 * __this, Il2CppObject * ___selector0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C"  void ObjectManager_DoFixups_m835924385 (ObjectManager_t2645893724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C"  ObjectRecord_t4134110382 * ObjectManager_GetObjectRecord_m2119386789 (ObjectManager_t2645893724 * __this, int64_t ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C"  Il2CppObject * ObjectManager_GetObject_m2241027343 (ObjectManager_t2645893724 * __this, int64_t ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C"  void ObjectManager_RaiseDeserializationEvent_m1611173032 (ObjectManager_t2645893724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializingEvent_m1841526046 (ObjectManager_t2645893724 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializedEvent_m512850179 (ObjectManager_t2645893724 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C"  void ObjectManager_AddFixup_m4148241867 (ObjectManager_t2645893724 * __this, BaseFixupRecord_t3171032996 * ___record0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m2602188984 (ObjectManager_t2645893724 * __this, int64_t ___arrayToBeFixed0, int32_t ___index1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m1047672528 (ObjectManager_t2645893724 * __this, int64_t ___arrayToBeFixed0, Int32U5BU5D_t3030399641* ___indices1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C"  void ObjectManager_RecordDelayedFixup_m1895730844 (ObjectManager_t2645893724 * __this, int64_t ___objectToBeFixed0, String_t* ___memberName1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C"  void ObjectManager_RecordFixup_m3572285566 (ObjectManager_t2645893724 * __this, int64_t ___objectToBeFixed0, MemberInfo_t * ___member1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ObjectManager_RegisterObjectInternal_m879109503 (ObjectManager_t2645893724 * __this, Il2CppObject * ___obj0, ObjectRecord_t4134110382 * ___record1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectManager_RegisterObject_m872610295 (ObjectManager_t2645893724 * __this, Il2CppObject * ___obj0, int64_t ___objectID1, SerializationInfo_t228987430 * ___info2, int64_t ___idOfContainingObj3, MemberInfo_t * ___member4, Int32U5BU5D_t3030399641* ___arrayIndex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
