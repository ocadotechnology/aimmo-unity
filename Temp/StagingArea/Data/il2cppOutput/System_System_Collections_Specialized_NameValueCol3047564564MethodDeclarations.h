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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C"  void NameValueCollection__ctor_m1767369537 (NameValueCollection_t3047564564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32)
extern "C"  void NameValueCollection__ctor_m2132991174 (NameValueCollection_t3047564564 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.Specialized.NameValueCollection)
extern "C"  void NameValueCollection__ctor_m4035682250 (NameValueCollection_t3047564564 * __this, NameValueCollection_t3047564564 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameValueCollection__ctor_m3660918416 (NameValueCollection_t3047564564 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::get_AllKeys()
extern "C"  StringU5BU5D_t1642385972* NameValueCollection_get_AllKeys_m1515107960 (NameValueCollection_t3047564564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C"  String_t* NameValueCollection_get_Item_m2776418562 (NameValueCollection_t3047564564 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern "C"  void NameValueCollection_set_Item_m3775607929 (NameValueCollection_t3047564564 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.Collections.Specialized.NameValueCollection)
extern "C"  void NameValueCollection_Add_m2977622107 (NameValueCollection_t3047564564 * __this, NameValueCollection_t3047564564 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C"  void NameValueCollection_Add_m263445674 (NameValueCollection_t3047564564 * __this, String_t* ___name0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Clear()
extern "C"  void NameValueCollection_Clear_m1967473574 (NameValueCollection_t3047564564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C"  String_t* NameValueCollection_Get_m861415899 (NameValueCollection_t3047564564 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern "C"  String_t* NameValueCollection_Get_m2509739626 (NameValueCollection_t3047564564 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C"  String_t* NameValueCollection_AsSingleString_m10599052 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C"  String_t* NameValueCollection_GetKey_m3871624648 (NameValueCollection_t3047564564 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.Int32)
extern "C"  StringU5BU5D_t1642385972* NameValueCollection_GetValues_m4268450057 (NameValueCollection_t3047564564 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern "C"  StringU5BU5D_t1642385972* NameValueCollection_GetValues_m1275908180 (NameValueCollection_t3047564564 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
extern "C"  StringU5BU5D_t1642385972* NameValueCollection_AsStringArray_m1681029335 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern "C"  void NameValueCollection_Remove_m629217025 (NameValueCollection_t3047564564 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern "C"  void NameValueCollection_Set_m2969274643 (NameValueCollection_t3047564564 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C"  void NameValueCollection_InvalidateCachedArrays_m1142700554 (NameValueCollection_t3047564564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
