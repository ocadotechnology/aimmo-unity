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

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;
// System.Object
struct Il2CppObject;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t4150817334;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder4156028127.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C"  void ModuleBuilder__cctor_m2985766025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ModuleBuilder_get_next_table_index_m1552645388 (ModuleBuilder_t4156028127 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.ModuleBuilder::GetTypes()
extern "C"  TypeU5BU5D_t1664964607* ModuleBuilder_GetTypes_m93550753 (ModuleBuilder_t4156028127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C"  int32_t ModuleBuilder_getToken_m972612049 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t4156028127 * ___mb0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilder_GetToken_m4190668737 (ModuleBuilder_t4156028127 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C"  void ModuleBuilder_RegisterToken_m1388342515 (ModuleBuilder_t4156028127 * __this, Il2CppObject * ___obj0, int32_t ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C"  Il2CppObject * ModuleBuilder_GetTokenGenerator_m4006065550 (ModuleBuilder_t4156028127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
