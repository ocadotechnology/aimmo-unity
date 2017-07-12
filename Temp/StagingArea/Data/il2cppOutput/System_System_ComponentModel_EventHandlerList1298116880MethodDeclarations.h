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

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1298116880;
// System.Delegate
struct Delegate_t3022476291;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListEntry
struct ListEntry_t935815304;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.EventHandlerList::.ctor()
extern "C"  void EventHandlerList__ctor_m125822993 (EventHandlerList_t1298116880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern "C"  Delegate_t3022476291 * EventHandlerList_get_Item_m533246000 (EventHandlerList_t1298116880 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::Dispose()
extern "C"  void EventHandlerList_Dispose_m813102448 (EventHandlerList_t1298116880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::FindEntry(System.Object)
extern "C"  ListEntry_t935815304 * EventHandlerList_FindEntry_m2326093420 (EventHandlerList_t1298116880 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
