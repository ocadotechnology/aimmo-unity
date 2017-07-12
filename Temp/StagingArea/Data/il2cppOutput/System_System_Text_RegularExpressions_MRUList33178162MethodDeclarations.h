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

// System.Text.RegularExpressions.MRUList
struct MRUList_t33178162;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Text.RegularExpressions.MRUList::.ctor()
extern "C"  void MRUList__ctor_m2726533367 (MRUList_t33178162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
extern "C"  void MRUList_Use_m1589089668 (MRUList_t33178162 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MRUList::Evict()
extern "C"  Il2CppObject * MRUList_Evict_m2430323183 (MRUList_t33178162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
