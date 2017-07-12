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

// System.Globalization.CompareInfo
struct CompareInfo_t2310920157;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Globalization.SortKey
struct SortKey_t1270563137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CompareOptions2829943955.h"

// System.Void System.Globalization.CompareInfo::.ctor()
extern "C"  void CompareInfo__ctor_m3537279649 (CompareInfo_t2310920157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.ctor(System.Globalization.CultureInfo)
extern "C"  void CompareInfo__ctor_m2066631099 (CompareInfo_t2310920157 * __this, CultureInfo_t3500843524 * ___ci0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.cctor()
extern "C"  void CompareInfo__cctor_m374454560 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void CompareInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3125905389 (CompareInfo_t2310920157 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::get_UseManagedCollation()
extern "C"  bool CompareInfo_get_UseManagedCollation_m2316526027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::construct_compareinfo(System.String)
extern "C"  void CompareInfo_construct_compareinfo_m1849123306 (CompareInfo_t2310920157 * __this, String_t* ___locale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::free_internal_collator()
extern "C"  void CompareInfo_free_internal_collator_m2713722336 (CompareInfo_t2310920157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_internal_compare_m2427268655 (CompareInfo_t2310920157 * __this, String_t* ___str10, int32_t ___offset11, int32_t ___length12, String_t* ___str23, int32_t ___offset24, int32_t ___length25, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::assign_sortkey(System.Object,System.String,System.Globalization.CompareOptions)
extern "C"  void CompareInfo_assign_sortkey_m4147041957 (CompareInfo_t2310920157 * __this, Il2CppObject * ___key0, String_t* ___source1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C"  int32_t CompareInfo_internal_index_m3516012977 (CompareInfo_t2310920157 * __this, String_t* ___source0, int32_t ___sindex1, int32_t ___count2, String_t* ___value3, int32_t ___options4, bool ___first5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::Finalize()
extern "C"  void CompareInfo_Finalize_m2868735867 (CompareInfo_t2310920157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_managed(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_internal_compare_managed_m1173317301 (CompareInfo_t2310920157 * __this, String_t* ___str10, int32_t ___offset11, int32_t ___length12, String_t* ___str23, int32_t ___offset24, int32_t ___length25, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_switch(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_internal_compare_switch_m1232517870 (CompareInfo_t2310920157 * __this, String_t* ___str10, int32_t ___offset11, int32_t ___length12, String_t* ___str23, int32_t ___offset24, int32_t ___length25, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String)
extern "C"  int32_t CompareInfo_Compare_m529052140 (CompareInfo_t2310920157 * __this, String_t* ___string10, String_t* ___string21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_Compare_m3983294983 (CompareInfo_t2310920157 * __this, String_t* ___string10, String_t* ___string21, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_Compare_m1376863687 (CompareInfo_t2310920157 * __this, String_t* ___string10, int32_t ___offset11, int32_t ___length12, String_t* ___string23, int32_t ___offset24, int32_t ___length25, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::Equals(System.Object)
extern "C"  bool CompareInfo_Equals_m1849093104 (CompareInfo_t2310920157 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::GetHashCode()
extern "C"  int32_t CompareInfo_GetHashCode_m103561552 (CompareInfo_t2310920157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey System.Globalization.CompareInfo::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C"  SortKey_t1270563137 * CompareInfo_GetSortKey_m3691382873 (CompareInfo_t2310920157 * __this, String_t* ___source0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t CompareInfo_IndexOf_m1755461348 (CompareInfo_t2310920157 * __this, String_t* ___source0, String_t* ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_managed(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C"  int32_t CompareInfo_internal_index_managed_m859405335 (CompareInfo_t2310920157 * __this, String_t* ___s10, int32_t ___sindex1, int32_t ___count2, String_t* ___s23, int32_t ___opt4, bool ___first5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_switch(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C"  int32_t CompareInfo_internal_index_switch_m3568425406 (CompareInfo_t2310920157 * __this, String_t* ___s10, int32_t ___sindex1, int32_t ___count2, String_t* ___s23, int32_t ___opt4, bool ___first5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_IndexOf_m3290589503 (CompareInfo_t2310920157 * __this, String_t* ___source0, String_t* ___value1, int32_t ___startIndex2, int32_t ___count3, int32_t ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool CompareInfo_IsPrefix_m4278207924 (CompareInfo_t2310920157 * __this, String_t* ___source0, String_t* ___prefix1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool CompareInfo_IsSuffix_m2927043075 (CompareInfo_t2310920157 * __this, String_t* ___source0, String_t* ___suffix1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t CompareInfo_LastIndexOf_m2978196696 (CompareInfo_t2310920157 * __this, String_t* ___source0, String_t* ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_LastIndexOf_m3171401641 (CompareInfo_t2310920157 * __this, String_t* ___source0, String_t* ___value1, int32_t ___startIndex2, int32_t ___count3, int32_t ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CompareInfo::ToString()
extern "C"  String_t* CompareInfo_ToString_m3102502680 (CompareInfo_t2310920157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::get_LCID()
extern "C"  int32_t CompareInfo_get_LCID_m3346446356 (CompareInfo_t2310920157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
