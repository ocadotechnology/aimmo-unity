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

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t2963371598;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
extern "C"  void EvidenceEnumerator__ctor_m2200166682 (EvidenceEnumerator_t2963371598 * __this, Il2CppObject * ___hostenum0, Il2CppObject * ___assemblyenum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
extern "C"  bool EvidenceEnumerator_MoveNext_m2306206176 (EvidenceEnumerator_t2963371598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::Reset()
extern "C"  void EvidenceEnumerator_Reset_m2712201059 (EvidenceEnumerator_t2963371598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
extern "C"  Il2CppObject * EvidenceEnumerator_get_Current_m632582639 (EvidenceEnumerator_t2963371598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
