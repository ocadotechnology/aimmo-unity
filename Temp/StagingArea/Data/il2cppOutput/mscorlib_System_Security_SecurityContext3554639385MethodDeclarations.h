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

// System.Security.SecurityContext
struct SecurityContext_t3554639385;
// System.Threading.CompressedStack
struct CompressedStack_t1568001503;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityContext3554639385.h"

// System.Void System.Security.SecurityContext::.ctor()
extern "C"  void SecurityContext__ctor_m4171643858 (SecurityContext_t3554639385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C"  void SecurityContext__ctor_m1936058452 (SecurityContext_t3554639385 * __this, SecurityContext_t3554639385 * ___sc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C"  SecurityContext_t3554639385 * SecurityContext_Capture_m2535194991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C"  bool SecurityContext_get_FlowSuppressed_m420202521 (SecurityContext_t3554639385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C"  CompressedStack_t1568001503 * SecurityContext_get_CompressedStack_m594879439 (SecurityContext_t3554639385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
