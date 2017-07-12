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

// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Globalization_TextInfo3620182823.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
extern "C"  void TextInfo__ctor_m2782608694 (TextInfo_t3620182823 * __this, CultureInfo_t3500843524 * ___ci0, int32_t ___lcid1, void* ___data2, bool ___read_only3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.TextInfo)
extern "C"  void TextInfo__ctor_m1263401274 (TextInfo_t3620182823 * __this, TextInfo_t3620182823 * ___textInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m4238883895 (TextInfo_t3620182823 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_ListSeparator()
extern "C"  String_t* TextInfo_get_ListSeparator_m3426465394 (TextInfo_t3620182823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_CultureName()
extern "C"  String_t* TextInfo_get_CultureName_m1675775132 (TextInfo_t3620182823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
extern "C"  bool TextInfo_Equals_m3277307958 (TextInfo_t3620182823 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.TextInfo::GetHashCode()
extern "C"  int32_t TextInfo_GetHashCode_m2424856298 (TextInfo_t3620182823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToString()
extern "C"  String_t* TextInfo_ToString_m3325858116 (TextInfo_t3620182823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
extern "C"  Il2CppChar TextInfo_ToLower_m2088701136 (TextInfo_t3620182823 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
extern "C"  Il2CppChar TextInfo_ToUpper_m299550697 (TextInfo_t3620182823 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToLower(System.String)
extern "C"  String_t* TextInfo_ToLower_m2178569214 (TextInfo_t3620182823 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToUpper(System.String)
extern "C"  String_t* TextInfo_ToUpper_m2522535645 (TextInfo_t3620182823 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.TextInfo::Clone()
extern "C"  Il2CppObject * TextInfo_Clone_m1096841305 (TextInfo_t3620182823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
