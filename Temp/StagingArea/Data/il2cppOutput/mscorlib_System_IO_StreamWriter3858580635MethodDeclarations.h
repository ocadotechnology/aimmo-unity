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

// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamWriter__ctor_m3823607994 (StreamWriter_t3858580635 * __this, Stream_t3255436806 * ___stream0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter__ctor_m4232641237 (StreamWriter_t3858580635 * __this, Stream_t3255436806 * ___stream0, Encoding_t663144255 * ___encoding1, int32_t ___bufferSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean)
extern "C"  void StreamWriter__ctor_m2615016597 (StreamWriter_t3858580635 * __this, String_t* ___path0, bool ___append1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter__ctor_m4268791735 (StreamWriter_t3858580635 * __this, String_t* ___path0, bool ___append1, Encoding_t663144255 * ___encoding2, int32_t ___bufferSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C"  void StreamWriter__cctor_m1332667003 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter_Initialize_m1707678624 (StreamWriter_t3858580635 * __this, Encoding_t663144255 * ___encoding0, int32_t ___bufferSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C"  void StreamWriter_set_AutoFlush_m4249414005 (StreamWriter_t3858580635 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C"  void StreamWriter_Dispose_m734922310 (StreamWriter_t3858580635 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C"  void StreamWriter_Flush_m3426120024 (StreamWriter_t3858580635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C"  void StreamWriter_FlushBytes_m2173277565 (StreamWriter_t3858580635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C"  void StreamWriter_Decode_m2554612662 (StreamWriter_t3858580635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_Write_m1786721636 (StreamWriter_t3858580635 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_LowLevelWrite_m4205372900 (StreamWriter_t3858580635 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C"  void StreamWriter_LowLevelWrite_m2362779341 (StreamWriter_t3858580635 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C"  void StreamWriter_Write_m838393842 (StreamWriter_t3858580635 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C"  void StreamWriter_Write_m48781402 (StreamWriter_t3858580635 * __this, CharU5BU5D_t1328083999* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C"  void StreamWriter_Write_m1015855743 (StreamWriter_t3858580635 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C"  void StreamWriter_Close_m2252440242 (StreamWriter_t3858580635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C"  void StreamWriter_Finalize_m2123577702 (StreamWriter_t3858580635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
