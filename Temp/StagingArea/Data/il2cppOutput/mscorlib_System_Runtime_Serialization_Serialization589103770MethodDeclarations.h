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

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t589103770;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3485203212.h"

// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern "C"  void SerializationInfoEnumerator__ctor_m3351407964 (SerializationInfoEnumerator_t589103770 * __this, ArrayList_t4252133567 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m1379272603 (SerializationInfoEnumerator_t589103770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern "C"  SerializationEntry_t3485203212  SerializationInfoEnumerator_get_Current_m173929557 (SerializationInfoEnumerator_t589103770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern "C"  String_t* SerializationInfoEnumerator_get_Name_m2042884068 (SerializationInfoEnumerator_t589103770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern "C"  Il2CppObject * SerializationInfoEnumerator_get_Value_m3437991400 (SerializationInfoEnumerator_t589103770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern "C"  bool SerializationInfoEnumerator_MoveNext_m1876990879 (SerializationInfoEnumerator_t589103770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::Reset()
extern "C"  void SerializationInfoEnumerator_Reset_m2206466680 (SerializationInfoEnumerator_t589103770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
