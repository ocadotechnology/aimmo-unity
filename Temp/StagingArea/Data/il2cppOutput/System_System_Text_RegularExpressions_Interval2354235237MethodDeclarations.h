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

// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.Interval
struct Interval_t2354235237;
struct Interval_t2354235237_marshaled_pinvoke;
struct Interval_t2354235237_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval2354235237.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern "C"  void Interval__ctor_m160053574 (Interval_t2354235237 * __this, int32_t ___low0, int32_t ___high1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern "C"  Interval_t2354235237  Interval_get_Empty_m3170923997 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern "C"  bool Interval_get_IsDiscontiguous_m2826395253 (Interval_t2354235237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern "C"  bool Interval_get_IsSingleton_m1888598248 (Interval_t2354235237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern "C"  bool Interval_get_IsEmpty_m1232768344 (Interval_t2354235237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern "C"  int32_t Interval_get_Size_m252675452 (Interval_t2354235237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_IsDisjoint_m2165873260 (Interval_t2354235237 * __this, Interval_t2354235237  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_IsAdjacent_m294638198 (Interval_t2354235237 * __this, Interval_t2354235237  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_Contains_m3209397137 (Interval_t2354235237 * __this, Interval_t2354235237  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern "C"  bool Interval_Contains_m1289613164 (Interval_t2354235237 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_Intersects_m3480157390 (Interval_t2354235237 * __this, Interval_t2354235237  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern "C"  void Interval_Merge_m1170166798 (Interval_t2354235237 * __this, Interval_t2354235237  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern "C"  int32_t Interval_CompareTo_m2909556284 (Interval_t2354235237 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Interval_t2354235237;
struct Interval_t2354235237_marshaled_pinvoke;

extern "C" void Interval_t2354235237_marshal_pinvoke(const Interval_t2354235237& unmarshaled, Interval_t2354235237_marshaled_pinvoke& marshaled);
extern "C" void Interval_t2354235237_marshal_pinvoke_back(const Interval_t2354235237_marshaled_pinvoke& marshaled, Interval_t2354235237& unmarshaled);
extern "C" void Interval_t2354235237_marshal_pinvoke_cleanup(Interval_t2354235237_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Interval_t2354235237;
struct Interval_t2354235237_marshaled_com;

extern "C" void Interval_t2354235237_marshal_com(const Interval_t2354235237& unmarshaled, Interval_t2354235237_marshaled_com& marshaled);
extern "C" void Interval_t2354235237_marshal_com_back(const Interval_t2354235237_marshaled_com& marshaled, Interval_t2354235237& unmarshaled);
extern "C" void Interval_t2354235237_marshal_com_cleanup(Interval_t2354235237_marshaled_com& marshaled);
