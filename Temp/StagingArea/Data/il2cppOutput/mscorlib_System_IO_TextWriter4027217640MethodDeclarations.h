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

// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.IO.TextWriter::.ctor()
extern "C"  void TextWriter__ctor_m2225796097 (TextWriter_t4027217640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C"  void TextWriter__cctor_m4047845042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C"  void TextWriter_Close_m1193327819 (TextWriter_t4027217640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C"  void TextWriter_Dispose_m4285181317 (TextWriter_t4027217640 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C"  void TextWriter_Dispose_m700634098 (TextWriter_t4027217640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C"  void TextWriter_Flush_m2049245553 (TextWriter_t4027217640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter)
extern "C"  TextWriter_t4027217640 * TextWriter_Synchronized_m724223080 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C"  TextWriter_t4027217640 * TextWriter_Synchronized_m1237756643 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, bool ___neverClose1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C"  void TextWriter_Write_m641273755 (TextWriter_t4027217640 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C"  void TextWriter_Write_m3202446297 (TextWriter_t4027217640 * __this, CharU5BU5D_t1328083999* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C"  void TextWriter_Write_m576684782 (TextWriter_t4027217640 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void TextWriter_Write_m3244403173 (TextWriter_t4027217640 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C"  void TextWriter_Write_m4123154780 (TextWriter_t4027217640 * __this, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, Il2CppObject * ___arg23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C"  void TextWriter_WriteLine_m116198862 (TextWriter_t4027217640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C"  void TextWriter_WriteLine_m1754475888 (TextWriter_t4027217640 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
