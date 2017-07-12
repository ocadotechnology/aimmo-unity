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

// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t502202687;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t542643598;
// System.Reflection.CustomAttributeData[]
struct CustomAttributeDataU5BU5D_t453481482;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t3634227492;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1057435127;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"

// System.Void System.MonoCustomAttrs::.cctor()
extern "C"  void MonoCustomAttrs__cctor_m2608447972 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
extern "C"  bool MonoCustomAttrs_IsUserCattrProvider_m3018511871 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoCustomAttrs_GetCustomAttributesInternal_m3546060576 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___attributeType1, bool ___pseudoAttrs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  ObjectU5BU5D_t3614634134* MonoCustomAttrs_GetPseudoCustomAttributes_m3693156790 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  ObjectU5BU5D_t3614634134* MonoCustomAttrs_GetCustomAttributesBase_m1694356389 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  Attribute_t542643598 * MonoCustomAttrs_GetCustomAttribute_m100274015 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoCustomAttrs_GetCustomAttributes_m939426263 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* MonoCustomAttrs_GetCustomAttributes_m3069779582 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CustomAttributeData[] System.MonoCustomAttrs::GetCustomAttributesDataInternal(System.Reflection.ICustomAttributeProvider)
extern "C"  CustomAttributeDataU5BU5D_t453481482* MonoCustomAttrs_GetCustomAttributesDataInternal_m3062392363 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.MonoCustomAttrs::GetCustomAttributesData(System.Reflection.ICustomAttributeProvider)
extern "C"  Il2CppObject* MonoCustomAttrs_GetCustomAttributesData_m550893105 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  bool MonoCustomAttrs_IsDefined_m3820363041 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  bool MonoCustomAttrs_IsDefinedInternal_m521826897 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___AttributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
extern "C"  PropertyInfo_t * MonoCustomAttrs_GetBasePropertyDefinition_m2958121021 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
extern "C"  Il2CppObject * MonoCustomAttrs_GetBase_m3646278059 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
extern "C"  AttributeUsageAttribute_t1057435127 * MonoCustomAttrs_RetrieveAttributeUsage_m3354779482 (Il2CppObject * __this /* static, unused */, Type_t * ___attributeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
