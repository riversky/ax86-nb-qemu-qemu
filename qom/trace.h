/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QOM_GENERATED_TRACERS_H
#define TRACE_QOM_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_OBJECT_DYNAMIC_CAST_ASSERT_EVENT;
extern TraceEvent _TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_EVENT;
extern uint16_t _TRACE_OBJECT_DYNAMIC_CAST_ASSERT_DSTATE;
extern uint16_t _TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_DSTATE;
#define TRACE_OBJECT_DYNAMIC_CAST_ASSERT_ENABLED 1
#define TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_ENABLED 1

#define TRACE_OBJECT_DYNAMIC_CAST_ASSERT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_object_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
}

static inline void trace_object_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (true) {
        _nocheck__trace_object_dynamic_cast_assert(type, target, file, line, func);
    }
}

#define TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_object_class_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
}

static inline void trace_object_class_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (true) {
        _nocheck__trace_object_class_dynamic_cast_assert(type, target, file, line, func);
    }
}
#endif /* TRACE_QOM_GENERATED_TRACERS_H */
