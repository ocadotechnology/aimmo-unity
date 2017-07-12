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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1866979105;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t324204131;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_T1182459634.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHa324204131.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C"  void BinaryFormatter__ctor_m4171832002 (BinaryFormatter_t1866979105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void BinaryFormatter__ctor_m3750141051 (BinaryFormatter_t1866979105 * __this, Il2CppObject * ___selector0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_DefaultSurrogateSelector_m219714691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void BinaryFormatter_set_AssemblyFormat_m3584845127 (BinaryFormatter_t1866979105 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C"  SerializationBinder_t3985864818 * BinaryFormatter_get_Binder_m4184010203 (BinaryFormatter_t1866979105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C"  StreamingContext_t1417235061  BinaryFormatter_get_Context_m1251360709 (BinaryFormatter_t1866979105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_SurrogateSelector_m1039166190 (BinaryFormatter_t1866979105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C"  int32_t BinaryFormatter_get_FilterLevel_m117513938 (BinaryFormatter_t1866979105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C"  Il2CppObject * BinaryFormatter_Deserialize_m2771853471 (BinaryFormatter_t1866979105 * __this, Stream_t3255436806 * ___serializationStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C"  Il2CppObject * BinaryFormatter_NoCheckDeserialize_m1968202401 (BinaryFormatter_t1866979105 * __this, Stream_t3255436806 * ___serializationStream0, HeaderHandler_t324204131 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C"  void BinaryFormatter_ReadBinaryHeader_m470465428 (BinaryFormatter_t1866979105 * __this, BinaryReader_t2491843768 * ___reader0, bool* ___hasHeaders1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
