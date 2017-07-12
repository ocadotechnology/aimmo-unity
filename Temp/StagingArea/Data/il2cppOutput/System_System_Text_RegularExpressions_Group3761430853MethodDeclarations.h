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

// System.Text.RegularExpressions.Group
struct Group_t3761430853;
// System.String
struct String_t;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1671345504;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void Group__ctor_m1187945851 (Group_t3761430853 * __this, String_t* ___text0, int32_t ___index1, int32_t ___length2, int32_t ___n_caps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void Group__ctor_m4103922028 (Group_t3761430853 * __this, String_t* ___text0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor()
extern "C"  void Group__ctor_m2264492664 (Group_t3761430853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.cctor()
extern "C"  void Group__cctor_m3460156167 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
extern "C"  CaptureCollection_t1671345504 * Group_get_Captures_m2440248304 (Group_t3761430853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C"  bool Group_get_Success_m2001463544 (Group_t3761430853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
