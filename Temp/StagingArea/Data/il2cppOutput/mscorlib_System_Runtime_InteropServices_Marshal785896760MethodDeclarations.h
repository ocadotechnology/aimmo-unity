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

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m802981325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_copy_to_unmanaged_m1616166460 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___source0, int32_t ___startIndex1, IntPtr_t ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m98320635 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, int32_t ___startIndex1, Il2CppArray * ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_Copy_m3575923452 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___source0, int32_t ___startIndex1, IntPtr_t ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1683535972 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, ByteU5BU5D_t3397334013* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m275157126 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, CharU5BU5D_t1328083999* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C"  int32_t Marshal_GetLastWin32Error_m4162683157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m536122811 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m2971909611 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
