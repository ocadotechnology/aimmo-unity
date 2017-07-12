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

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t683371910;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void UnexceptionalStreamReader__ctor_m3647541307 (UnexceptionalStreamReader_t683371910 * __this, Stream_t3255436806 * ___stream0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern "C"  void UnexceptionalStreamReader__cctor_m138338252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern "C"  int32_t UnexceptionalStreamReader_Peek_m1725179274 (UnexceptionalStreamReader_t683371910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern "C"  int32_t UnexceptionalStreamReader_Read_m3839775235 (UnexceptionalStreamReader_t683371910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UnexceptionalStreamReader_Read_m2377101932 (UnexceptionalStreamReader_t683371910 * __this, CharU5BU5D_t1328083999* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C"  bool UnexceptionalStreamReader_CheckEOL_m213616266 (UnexceptionalStreamReader_t683371910 * __this, Il2CppChar ___current0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern "C"  String_t* UnexceptionalStreamReader_ReadLine_m1831244408 (UnexceptionalStreamReader_t683371910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern "C"  String_t* UnexceptionalStreamReader_ReadToEnd_m3199532586 (UnexceptionalStreamReader_t683371910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
