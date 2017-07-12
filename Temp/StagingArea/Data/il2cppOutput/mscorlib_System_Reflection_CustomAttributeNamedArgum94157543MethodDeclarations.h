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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t94157543;
struct CustomAttributeNamedArgument_t94157543_marshaled_pinvoke;
struct CustomAttributeNamedArgument_t94157543_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgum94157543.h"
#include "mscorlib_System_Object2689449295.h"

// System.String System.Reflection.CustomAttributeNamedArgument::ToString()
extern "C"  String_t* CustomAttributeNamedArgument_ToString_m804774956 (CustomAttributeNamedArgument_t94157543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.CustomAttributeNamedArgument::Equals(System.Object)
extern "C"  bool CustomAttributeNamedArgument_Equals_m2691468532 (CustomAttributeNamedArgument_t94157543 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.CustomAttributeNamedArgument::GetHashCode()
extern "C"  int32_t CustomAttributeNamedArgument_GetHashCode_m3715408876 (CustomAttributeNamedArgument_t94157543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CustomAttributeNamedArgument_t94157543;
struct CustomAttributeNamedArgument_t94157543_marshaled_pinvoke;

extern "C" void CustomAttributeNamedArgument_t94157543_marshal_pinvoke(const CustomAttributeNamedArgument_t94157543& unmarshaled, CustomAttributeNamedArgument_t94157543_marshaled_pinvoke& marshaled);
extern "C" void CustomAttributeNamedArgument_t94157543_marshal_pinvoke_back(const CustomAttributeNamedArgument_t94157543_marshaled_pinvoke& marshaled, CustomAttributeNamedArgument_t94157543& unmarshaled);
extern "C" void CustomAttributeNamedArgument_t94157543_marshal_pinvoke_cleanup(CustomAttributeNamedArgument_t94157543_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CustomAttributeNamedArgument_t94157543;
struct CustomAttributeNamedArgument_t94157543_marshaled_com;

extern "C" void CustomAttributeNamedArgument_t94157543_marshal_com(const CustomAttributeNamedArgument_t94157543& unmarshaled, CustomAttributeNamedArgument_t94157543_marshaled_com& marshaled);
extern "C" void CustomAttributeNamedArgument_t94157543_marshal_com_back(const CustomAttributeNamedArgument_t94157543_marshaled_com& marshaled, CustomAttributeNamedArgument_t94157543& unmarshaled);
extern "C" void CustomAttributeNamedArgument_t94157543_marshal_com_cleanup(CustomAttributeNamedArgument_t94157543_marshaled_com& marshaled);
