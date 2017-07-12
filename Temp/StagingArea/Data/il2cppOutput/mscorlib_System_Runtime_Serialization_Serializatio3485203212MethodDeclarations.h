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
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t3485203212;
struct SerializationEntry_t3485203212_marshaled_pinvoke;
struct SerializationEntry_t3485203212_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3485203212.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C"  void SerializationEntry__ctor_m1619256036 (SerializationEntry_t3485203212 * __this, String_t* ___name0, Type_t * ___type1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C"  String_t* SerializationEntry_get_Name_m3087969704 (SerializationEntry_t3485203212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C"  Il2CppObject * SerializationEntry_get_Value_m1628109884 (SerializationEntry_t3485203212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SerializationEntry_t3485203212;
struct SerializationEntry_t3485203212_marshaled_pinvoke;

extern "C" void SerializationEntry_t3485203212_marshal_pinvoke(const SerializationEntry_t3485203212& unmarshaled, SerializationEntry_t3485203212_marshaled_pinvoke& marshaled);
extern "C" void SerializationEntry_t3485203212_marshal_pinvoke_back(const SerializationEntry_t3485203212_marshaled_pinvoke& marshaled, SerializationEntry_t3485203212& unmarshaled);
extern "C" void SerializationEntry_t3485203212_marshal_pinvoke_cleanup(SerializationEntry_t3485203212_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SerializationEntry_t3485203212;
struct SerializationEntry_t3485203212_marshaled_com;

extern "C" void SerializationEntry_t3485203212_marshal_com(const SerializationEntry_t3485203212& unmarshaled, SerializationEntry_t3485203212_marshaled_com& marshaled);
extern "C" void SerializationEntry_t3485203212_marshal_com_back(const SerializationEntry_t3485203212_marshaled_com& marshaled, SerializationEntry_t3485203212& unmarshaled);
extern "C" void SerializationEntry_t3485203212_marshal_com_cleanup(SerializationEntry_t3485203212_marshaled_com& marshaled);
