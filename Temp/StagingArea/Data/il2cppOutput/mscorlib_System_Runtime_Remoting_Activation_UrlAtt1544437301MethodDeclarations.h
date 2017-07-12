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

// System.Runtime.Remoting.Activation.UrlAttribute
struct UrlAttribute_t1544437301;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2459197515;
// System.Runtime.Remoting.Contexts.Context
struct Context_t502196753;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context502196753.h"

// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C"  String_t* UrlAttribute_get_UrlValue_m3448699483 (UrlAttribute_t1544437301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern "C"  bool UrlAttribute_Equals_m1587451932 (UrlAttribute_t1544437301 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C"  int32_t UrlAttribute_GetHashCode_m4258586704 (UrlAttribute_t1544437301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void UrlAttribute_GetPropertiesForNewContext_m1831666581 (UrlAttribute_t1544437301 * __this, Il2CppObject * ___ctorMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool UrlAttribute_IsContextOK_m3121915198 (UrlAttribute_t1544437301 * __this, Context_t502196753 * ___ctx0, Il2CppObject * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
