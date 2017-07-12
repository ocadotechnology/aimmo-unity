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

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t771543475;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t725724420;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C"  ObjectU5BU5D_t3614634134* MonoMethodMessage_get_Args_m1959227626 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C"  LogicalCallContext_t725724420 * MonoMethodMessage_get_LogicalCallContext_m2551132077 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C"  MethodBase_t904190842 * MonoMethodMessage_get_MethodBase_m218894245 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C"  String_t* MonoMethodMessage_get_MethodName_m3580519713 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C"  Il2CppObject * MonoMethodMessage_get_MethodSignature_m1059683822 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C"  String_t* MonoMethodMessage_get_TypeName_m2991947474 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C"  String_t* MonoMethodMessage_get_Uri_m846021167 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C"  void MonoMethodMessage_set_Uri_m3218581120 (MonoMethodMessage_t771543475 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C"  Exception_t1927440687 * MonoMethodMessage_get_Exception_m112694486 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C"  int32_t MonoMethodMessage_get_OutArgCount_m1571045627 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C"  ObjectU5BU5D_t3614634134* MonoMethodMessage_get_OutArgs_m1006158834 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C"  Il2CppObject * MonoMethodMessage_get_ReturnValue_m3408856672 (MonoMethodMessage_t771543475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
