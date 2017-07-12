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

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t578872653;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder4156028127.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilderTokenGenerator__ctor_m1041652642 (ModuleBuilderTokenGenerator_t578872653 * __this, ModuleBuilder_t4156028127 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m3427457873 (ModuleBuilderTokenGenerator_t578872653 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
