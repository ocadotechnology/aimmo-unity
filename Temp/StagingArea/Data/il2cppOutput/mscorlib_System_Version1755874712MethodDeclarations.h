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

// System.Version
struct Version_t1755874712;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Version1755874712.h"

// System.Void System.Version::.ctor()
extern "C"  void Version__ctor_m1627908957 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m2972638031 (Version_t1755874712 * __this, String_t* ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m2035466001 (Version_t1755874712 * __this, int32_t ___major0, int32_t ___minor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1025848830 (Version_t1755874712 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m85867749 (Version_t1755874712 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version_CheckedSet_m76493673 (Version_t1755874712 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C"  int32_t Version_get_Build_m4207539494 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C"  int32_t Version_get_Major_m3385239713 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C"  int32_t Version_get_Minor_m3449134197 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C"  int32_t Version_get_Revision_m654005649 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Version::Clone()
extern "C"  Il2CppObject * Version_Clone_m3011851203 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C"  int32_t Version_CompareTo_m3455426781 (Version_t1755874712 * __this, Il2CppObject * ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C"  bool Version_Equals_m637934620 (Version_t1755874712 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m596235198 (Version_t1755874712 * __this, Version_t1755874712 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m2419266375 (Version_t1755874712 * __this, Version_t1755874712 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C"  int32_t Version_GetHashCode_m880841176 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C"  String_t* Version_ToString_m18049552 (Version_t1755874712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C"  Version_t1755874712 * Version_CreateFromString_m3879424010 (Il2CppObject * __this /* static, unused */, String_t* ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m24249905 (Il2CppObject * __this /* static, unused */, Version_t1755874712 * ___v10, Version_t1755874712 * ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m828629926 (Il2CppObject * __this /* static, unused */, Version_t1755874712 * ___v10, Version_t1755874712 * ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_GreaterThan(System.Version,System.Version)
extern "C"  bool Version_op_GreaterThan_m1157947872 (Il2CppObject * __this /* static, unused */, Version_t1755874712 * ___v10, Version_t1755874712 * ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C"  bool Version_op_LessThan_m365556887 (Il2CppObject * __this /* static, unused */, Version_t1755874712 * ___v10, Version_t1755874712 * ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
