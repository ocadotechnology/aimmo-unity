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

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t135163252;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2154803531;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_Rijndael2154803531.h"

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RijndaelManagedTransform__ctor_m4034988746 (RijndaelManagedTransform_t135163252 * __this, Rijndael_t2154803531 * ___algo0, bool ___encryption1, ByteU5BU5D_t3397334013* ___key2, ByteU5BU5D_t3397334013* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
extern "C"  void RijndaelManagedTransform_System_IDisposable_Dispose_m677512972 (RijndaelManagedTransform_t135163252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
extern "C"  bool RijndaelManagedTransform_get_CanReuseTransform_m3735256596 (RijndaelManagedTransform_t135163252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RijndaelManagedTransform_TransformBlock_m2558865851 (RijndaelManagedTransform_t135163252 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* RijndaelManagedTransform_TransformFinalBlock_m3663752599 (RijndaelManagedTransform_t135163252 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
