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

// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m3929275401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m51574294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t1941658161 * SecurityManager_Decode_m3784014484 (Il2CppObject * __this /* static, unused */, IntPtr_t ___permissions0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t1941658161 * SecurityManager_Decode_m470212436 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___encodedPermissions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
