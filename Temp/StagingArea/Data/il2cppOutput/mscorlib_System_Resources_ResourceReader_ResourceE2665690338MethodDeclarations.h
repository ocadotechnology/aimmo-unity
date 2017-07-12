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

// System.Resources.ResourceReader/ResourceEnumerator
struct ResourceEnumerator_t2665690338;
// System.Resources.ResourceReader
struct ResourceReader_t2463923611;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Resources_ResourceReader2463923611.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Resources.ResourceReader/ResourceEnumerator::.ctor(System.Resources.ResourceReader)
extern "C"  void ResourceEnumerator__ctor_m1679839941 (ResourceEnumerator_t2665690338 * __this, ResourceReader_t2463923611 * ___readerToEnumerate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Resources.ResourceReader/ResourceEnumerator::get_Entry()
extern "C"  DictionaryEntry_t3048875398  ResourceEnumerator_get_Entry_m2785475042 (ResourceEnumerator_t2665690338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Key()
extern "C"  Il2CppObject * ResourceEnumerator_get_Key_m1012797265 (ResourceEnumerator_t2665690338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Value()
extern "C"  Il2CppObject * ResourceEnumerator_get_Value_m2384033057 (ResourceEnumerator_t2665690338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Current()
extern "C"  Il2CppObject * ResourceEnumerator_get_Current_m2999619259 (ResourceEnumerator_t2665690338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::MoveNext()
extern "C"  bool ResourceEnumerator_MoveNext_m2405062020 (ResourceEnumerator_t2665690338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::Reset()
extern "C"  void ResourceEnumerator_Reset_m3908209103 (ResourceEnumerator_t2665690338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::FillCache()
extern "C"  void ResourceEnumerator_FillCache_m786031305 (ResourceEnumerator_t2665690338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
