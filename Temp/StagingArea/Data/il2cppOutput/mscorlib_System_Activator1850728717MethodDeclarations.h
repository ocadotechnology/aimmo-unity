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
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"

// System.Object System.Activator::CreateInstance(System.Type)
extern "C"  Il2CppObject * Activator_CreateInstance_m383294261 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C"  Il2CppObject * Activator_CreateInstance_m1465989661 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
extern "C"  Il2CppObject * Activator_CreateInstance_m2779419829 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t3614634134* ___args1, ObjectU5BU5D_t3614634134* ___activationAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
extern "C"  Il2CppObject * Activator_CreateInstance_m4096900559 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, ObjectU5BU5D_t3614634134* ___args3, CultureInfo_t3500843524 * ___culture4, ObjectU5BU5D_t3614634134* ___activationAttributes5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
extern "C"  Il2CppObject * Activator_CreateInstance_m4123570586 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
extern "C"  void Activator_CheckType_m3905078019 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
extern "C"  void Activator_CheckAbstractType_m2837737071 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
extern "C"  Il2CppObject * Activator_CreateInstanceInternal_m1397579852 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
