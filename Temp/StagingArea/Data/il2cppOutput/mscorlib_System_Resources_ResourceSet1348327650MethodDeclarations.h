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

// System.Resources.ResourceSet
struct ResourceSet_t1348327650;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t822875729;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_UnmanagedMemoryStream822875729.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C"  void ResourceSet__ctor_m2566914412 (ResourceSet_t1348327650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C"  void ResourceSet__ctor_m993837251 (ResourceSet_t1348327650 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C"  void ResourceSet__ctor_m129522286 (ResourceSet_t1348327650 * __this, UnmanagedMemoryStream_t822875729 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C"  void ResourceSet__ctor_m1222864106 (ResourceSet_t1348327650 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m1568302465 (ResourceSet_t1348327650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C"  void ResourceSet_Dispose_m2968479859 (ResourceSet_t1348327650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C"  void ResourceSet_Dispose_m2615980752 (ResourceSet_t1348327650 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C"  Il2CppObject * ResourceSet_GetEnumerator_m1363893992 (ResourceSet_t1348327650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C"  Il2CppObject * ResourceSet_GetObjectInternal_m3556256510 (ResourceSet_t1348327650 * __this, String_t* ___name0, bool ___ignoreCase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C"  Il2CppObject * ResourceSet_GetObject_m1232449476 (ResourceSet_t1348327650 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C"  Il2CppObject * ResourceSet_GetObject_m730549927 (ResourceSet_t1348327650 * __this, String_t* ___name0, bool ___ignoreCase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C"  void ResourceSet_ReadResources_m1669023823 (ResourceSet_t1348327650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
