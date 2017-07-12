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

// System.ValueType
struct ValueType_t3507792607;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.String
struct String_t;
struct ValueType_t3507792607_marshaled_pinvoke;
struct ValueType_t3507792607_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ValueType::.ctor()
extern "C"  void ValueType__ctor_m1334403178 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C"  bool ValueType_InternalEquals_m4068150072 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o10, Il2CppObject * ___o21, ObjectU5BU5D_t3614634134** ___fields2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C"  bool ValueType_DefaultEquals_m2245650968 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o10, Il2CppObject * ___o21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::Equals(System.Object)
extern "C"  bool ValueType_Equals_m1706811061 (Il2CppObject * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C"  int32_t ValueType_InternalGetHashCode_m3000057222 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, ObjectU5BU5D_t3614634134** ___fields1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::GetHashCode()
extern "C"  int32_t ValueType_GetHashCode_m3018627007 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ValueType::ToString()
extern "C"  String_t* ValueType_ToString_m3796301715 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ValueType_t3507792607;
struct ValueType_t3507792607_marshaled_pinvoke;

extern "C" void ValueType_t3507792607_marshal_pinvoke(const ValueType_t3507792607& unmarshaled, ValueType_t3507792607_marshaled_pinvoke& marshaled);
extern "C" void ValueType_t3507792607_marshal_pinvoke_back(const ValueType_t3507792607_marshaled_pinvoke& marshaled, ValueType_t3507792607& unmarshaled);
extern "C" void ValueType_t3507792607_marshal_pinvoke_cleanup(ValueType_t3507792607_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ValueType_t3507792607;
struct ValueType_t3507792607_marshaled_com;

extern "C" void ValueType_t3507792607_marshal_com(const ValueType_t3507792607& unmarshaled, ValueType_t3507792607_marshaled_com& marshaled);
extern "C" void ValueType_t3507792607_marshal_com_back(const ValueType_t3507792607_marshaled_com& marshaled, ValueType_t3507792607& unmarshaled);
extern "C" void ValueType_t3507792607_marshal_com_cleanup(ValueType_t3507792607_marshaled_com& marshaled);
