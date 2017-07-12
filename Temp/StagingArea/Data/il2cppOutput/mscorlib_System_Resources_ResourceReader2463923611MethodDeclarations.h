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

// System.Resources.ResourceReader
struct ResourceReader_t2463923611;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t2265014744;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceI3933049236.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Resources.ResourceReader::.ctor(System.IO.Stream)
extern "C"  void ResourceReader__ctor_m1562845828 (ResourceReader_t2463923611 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::.ctor(System.String)
extern "C"  void ResourceReader__ctor_m2324926185 (ResourceReader_t2463923611 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceReader::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ResourceReader_System_Collections_IEnumerable_GetEnumerator_m1456908404 (ResourceReader_t2463923611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::System.IDisposable.Dispose()
extern "C"  void ResourceReader_System_IDisposable_Dispose_m1825886190 (ResourceReader_t2463923611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::ReadHeaders()
extern "C"  void ResourceReader_ReadHeaders_m881647957 (ResourceReader_t2463923611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::CreateResourceInfo(System.Int64,System.Resources.ResourceReader/ResourceInfo&)
extern "C"  void ResourceReader_CreateResourceInfo_m2376522667 (ResourceReader_t2463923611 * __this, int64_t ___position0, ResourceInfo_t3933049236 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Resources.ResourceReader::Read7BitEncodedInt()
extern "C"  int32_t ResourceReader_Read7BitEncodedInt_m2962317104 (ResourceReader_t2463923611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadValueVer2(System.Int32)
extern "C"  Il2CppObject * ResourceReader_ReadValueVer2_m252146049 (ResourceReader_t2463923611 * __this, int32_t ___type_index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadValueVer1(System.Type)
extern "C"  Il2CppObject * ResourceReader_ReadValueVer1_m3519678454 (ResourceReader_t2463923611 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadNonPredefinedValue(System.Type)
extern "C"  Il2CppObject * ResourceReader_ReadNonPredefinedValue_m715286753 (ResourceReader_t2463923611 * __this, Type_t * ___exp_type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::LoadResourceValues(System.Resources.ResourceReader/ResourceCacheItem[])
extern "C"  void ResourceReader_LoadResourceValues_m1346096618 (ResourceReader_t2463923611 * __this, ResourceCacheItemU5BU5D_t2265014744* ___store0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::Close()
extern "C"  void ResourceReader_Close_m3256966401 (ResourceReader_t2463923611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceReader::GetEnumerator()
extern "C"  Il2CppObject * ResourceReader_GetEnumerator_m2759477183 (ResourceReader_t2463923611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::Dispose(System.Boolean)
extern "C"  void ResourceReader_Dispose_m3925831971 (ResourceReader_t2463923611 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
