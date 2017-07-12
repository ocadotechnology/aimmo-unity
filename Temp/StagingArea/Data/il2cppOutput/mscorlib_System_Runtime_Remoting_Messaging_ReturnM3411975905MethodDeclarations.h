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

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t3411975905;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t725724420;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t645865707;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalC725724420.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C"  void ReturnMessage__ctor_m4106714265 (ReturnMessage_t3411975905 * __this, Il2CppObject * ___ret0, ObjectU5BU5D_t3614634134* ___outArgs1, int32_t ___outArgsCount2, LogicalCallContext_t725724420 * ___callCtx3, Il2CppObject * ___mcm4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C"  void ReturnMessage__ctor_m3419006532 (ReturnMessage_t3411975905 * __this, Exception_t1927440687 * ___e0, Il2CppObject * ___mcm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C"  void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m2928464087 (ReturnMessage_t3411975905 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C"  ObjectU5BU5D_t3614634134* ReturnMessage_get_Args_m658290258 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C"  LogicalCallContext_t725724420 * ReturnMessage_get_LogicalCallContext_m2158420703 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C"  MethodBase_t904190842 * ReturnMessage_get_MethodBase_m1666108195 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C"  String_t* ReturnMessage_get_MethodName_m2437275403 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C"  Il2CppObject * ReturnMessage_get_MethodSignature_m776269126 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C"  Il2CppObject * ReturnMessage_get_Properties_m531965085 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C"  String_t* ReturnMessage_get_TypeName_m2348641442 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C"  String_t* ReturnMessage_get_Uri_m2275427705 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C"  void ReturnMessage_set_Uri_m961888476 (ReturnMessage_t3411975905 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C"  Exception_t1927440687 * ReturnMessage_get_Exception_m3015034974 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C"  ObjectU5BU5D_t3614634134* ReturnMessage_get_OutArgs_m299904174 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C"  Il2CppObject * ReturnMessage_get_ReturnValue_m3076211800 (ReturnMessage_t3411975905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
