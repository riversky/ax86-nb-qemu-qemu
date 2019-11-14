/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_UTIL_GENERATED_TRACERS_H
#define TRACE_UTIL_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_RUN_POLL_HANDLERS_BEGIN_EVENT;
extern TraceEvent _TRACE_RUN_POLL_HANDLERS_END_EVENT;
extern TraceEvent _TRACE_POLL_SHRINK_EVENT;
extern TraceEvent _TRACE_POLL_GROW_EVENT;
extern TraceEvent _TRACE_AIO_CO_SCHEDULE_EVENT;
extern TraceEvent _TRACE_AIO_CO_SCHEDULE_BH_CB_EVENT;
extern TraceEvent _TRACE_THREAD_POOL_SUBMIT_EVENT;
extern TraceEvent _TRACE_THREAD_POOL_COMPLETE_EVENT;
extern TraceEvent _TRACE_THREAD_POOL_CANCEL_EVENT;
extern TraceEvent _TRACE_BUFFER_RESIZE_EVENT;
extern TraceEvent _TRACE_BUFFER_MOVE_EMPTY_EVENT;
extern TraceEvent _TRACE_BUFFER_MOVE_EVENT;
extern TraceEvent _TRACE_BUFFER_FREE_EVENT;
extern TraceEvent _TRACE_QEMU_FILE_MONITOR_ADD_WATCH_EVENT;
extern TraceEvent _TRACE_QEMU_FILE_MONITOR_REMOVE_WATCH_EVENT;
extern TraceEvent _TRACE_QEMU_FILE_MONITOR_NEW_EVENT;
extern TraceEvent _TRACE_QEMU_FILE_MONITOR_ENABLE_WATCH_EVENT;
extern TraceEvent _TRACE_QEMU_FILE_MONITOR_DISABLE_WATCH_EVENT;
extern TraceEvent _TRACE_QEMU_FILE_MONITOR_EVENT_EVENT;
extern TraceEvent _TRACE_QEMU_FILE_MONITOR_DISPATCH_EVENT;
extern TraceEvent _TRACE_QEMU_AIO_COROUTINE_ENTER_EVENT;
extern TraceEvent _TRACE_QEMU_COROUTINE_YIELD_EVENT;
extern TraceEvent _TRACE_QEMU_COROUTINE_TERMINATE_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_RETURN_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_EVENT;
extern TraceEvent _TRACE_QEMU_MEMALIGN_EVENT;
extern TraceEvent _TRACE_QEMU_ANON_RAM_ALLOC_EVENT;
extern TraceEvent _TRACE_QEMU_VFREE_EVENT;
extern TraceEvent _TRACE_QEMU_ANON_RAM_FREE_EVENT;
extern TraceEvent _TRACE_HBITMAP_ITER_SKIP_WORDS_EVENT;
extern TraceEvent _TRACE_HBITMAP_RESET_EVENT;
extern TraceEvent _TRACE_HBITMAP_SET_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FAST_PATH_ATTEMPT_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FAST_PATH_SUCCESS_EVENT;
extern TraceEvent _TRACE_LOCKCNT_UNLOCK_ATTEMPT_EVENT;
extern TraceEvent _TRACE_LOCKCNT_UNLOCK_SUCCESS_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_RESUME_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAKE_EVENT;
extern TraceEvent _TRACE_SOCKET_LISTEN_EVENT;
extern TraceEvent _TRACE_QEMU_MUTEX_LOCK_EVENT;
extern TraceEvent _TRACE_QEMU_MUTEX_LOCKED_EVENT;
extern TraceEvent _TRACE_QEMU_MUTEX_UNLOCK_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_DMA_RESET_TEMPORARY_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_RAM_BLOCK_ADDED_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_RAM_BLOCK_REMOVED_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_FIND_MAPPING_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_NEW_MAPPING_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_DO_MAPPING_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_DMA_MAP_EVENT;
extern TraceEvent _TRACE_QEMU_VFIO_DMA_UNMAP_EVENT;
extern uint16_t _TRACE_RUN_POLL_HANDLERS_BEGIN_DSTATE;
extern uint16_t _TRACE_RUN_POLL_HANDLERS_END_DSTATE;
extern uint16_t _TRACE_POLL_SHRINK_DSTATE;
extern uint16_t _TRACE_POLL_GROW_DSTATE;
extern uint16_t _TRACE_AIO_CO_SCHEDULE_DSTATE;
extern uint16_t _TRACE_AIO_CO_SCHEDULE_BH_CB_DSTATE;
extern uint16_t _TRACE_THREAD_POOL_SUBMIT_DSTATE;
extern uint16_t _TRACE_THREAD_POOL_COMPLETE_DSTATE;
extern uint16_t _TRACE_THREAD_POOL_CANCEL_DSTATE;
extern uint16_t _TRACE_BUFFER_RESIZE_DSTATE;
extern uint16_t _TRACE_BUFFER_MOVE_EMPTY_DSTATE;
extern uint16_t _TRACE_BUFFER_MOVE_DSTATE;
extern uint16_t _TRACE_BUFFER_FREE_DSTATE;
extern uint16_t _TRACE_QEMU_FILE_MONITOR_ADD_WATCH_DSTATE;
extern uint16_t _TRACE_QEMU_FILE_MONITOR_REMOVE_WATCH_DSTATE;
extern uint16_t _TRACE_QEMU_FILE_MONITOR_NEW_DSTATE;
extern uint16_t _TRACE_QEMU_FILE_MONITOR_ENABLE_WATCH_DSTATE;
extern uint16_t _TRACE_QEMU_FILE_MONITOR_DISABLE_WATCH_DSTATE;
extern uint16_t _TRACE_QEMU_FILE_MONITOR_EVENT_DSTATE;
extern uint16_t _TRACE_QEMU_FILE_MONITOR_DISPATCH_DSTATE;
extern uint16_t _TRACE_QEMU_AIO_COROUTINE_ENTER_DSTATE;
extern uint16_t _TRACE_QEMU_COROUTINE_YIELD_DSTATE;
extern uint16_t _TRACE_QEMU_COROUTINE_TERMINATE_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_RETURN_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_DSTATE;
extern uint16_t _TRACE_QEMU_MEMALIGN_DSTATE;
extern uint16_t _TRACE_QEMU_ANON_RAM_ALLOC_DSTATE;
extern uint16_t _TRACE_QEMU_VFREE_DSTATE;
extern uint16_t _TRACE_QEMU_ANON_RAM_FREE_DSTATE;
extern uint16_t _TRACE_HBITMAP_ITER_SKIP_WORDS_DSTATE;
extern uint16_t _TRACE_HBITMAP_RESET_DSTATE;
extern uint16_t _TRACE_HBITMAP_SET_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FAST_PATH_ATTEMPT_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FAST_PATH_SUCCESS_DSTATE;
extern uint16_t _TRACE_LOCKCNT_UNLOCK_ATTEMPT_DSTATE;
extern uint16_t _TRACE_LOCKCNT_UNLOCK_SUCCESS_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_RESUME_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAKE_DSTATE;
extern uint16_t _TRACE_SOCKET_LISTEN_DSTATE;
extern uint16_t _TRACE_QEMU_MUTEX_LOCK_DSTATE;
extern uint16_t _TRACE_QEMU_MUTEX_LOCKED_DSTATE;
extern uint16_t _TRACE_QEMU_MUTEX_UNLOCK_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_DMA_RESET_TEMPORARY_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_RAM_BLOCK_ADDED_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_RAM_BLOCK_REMOVED_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_FIND_MAPPING_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_NEW_MAPPING_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_DO_MAPPING_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_DMA_MAP_DSTATE;
extern uint16_t _TRACE_QEMU_VFIO_DMA_UNMAP_DSTATE;
#define TRACE_RUN_POLL_HANDLERS_BEGIN_ENABLED 1
#define TRACE_RUN_POLL_HANDLERS_END_ENABLED 1
#define TRACE_POLL_SHRINK_ENABLED 1
#define TRACE_POLL_GROW_ENABLED 1
#define TRACE_AIO_CO_SCHEDULE_ENABLED 1
#define TRACE_AIO_CO_SCHEDULE_BH_CB_ENABLED 1
#define TRACE_THREAD_POOL_SUBMIT_ENABLED 1
#define TRACE_THREAD_POOL_COMPLETE_ENABLED 1
#define TRACE_THREAD_POOL_CANCEL_ENABLED 1
#define TRACE_BUFFER_RESIZE_ENABLED 1
#define TRACE_BUFFER_MOVE_EMPTY_ENABLED 1
#define TRACE_BUFFER_MOVE_ENABLED 1
#define TRACE_BUFFER_FREE_ENABLED 1
#define TRACE_QEMU_FILE_MONITOR_ADD_WATCH_ENABLED 1
#define TRACE_QEMU_FILE_MONITOR_REMOVE_WATCH_ENABLED 1
#define TRACE_QEMU_FILE_MONITOR_NEW_ENABLED 1
#define TRACE_QEMU_FILE_MONITOR_ENABLE_WATCH_ENABLED 1
#define TRACE_QEMU_FILE_MONITOR_DISABLE_WATCH_ENABLED 1
#define TRACE_QEMU_FILE_MONITOR_EVENT_ENABLED 1
#define TRACE_QEMU_FILE_MONITOR_DISPATCH_ENABLED 1
#define TRACE_QEMU_AIO_COROUTINE_ENTER_ENABLED 1
#define TRACE_QEMU_COROUTINE_YIELD_ENABLED 1
#define TRACE_QEMU_COROUTINE_TERMINATE_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_LOCK_RETURN_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_ENABLED 1
#define TRACE_QEMU_MEMALIGN_ENABLED 1
#define TRACE_QEMU_ANON_RAM_ALLOC_ENABLED 1
#define TRACE_QEMU_VFREE_ENABLED 1
#define TRACE_QEMU_ANON_RAM_FREE_ENABLED 1
#define TRACE_HBITMAP_ITER_SKIP_WORDS_ENABLED 1
#define TRACE_HBITMAP_RESET_ENABLED 1
#define TRACE_HBITMAP_SET_ENABLED 1
#define TRACE_LOCKCNT_FAST_PATH_ATTEMPT_ENABLED 1
#define TRACE_LOCKCNT_FAST_PATH_SUCCESS_ENABLED 1
#define TRACE_LOCKCNT_UNLOCK_ATTEMPT_ENABLED 1
#define TRACE_LOCKCNT_UNLOCK_SUCCESS_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAIT_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAIT_RESUME_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAKE_ENABLED 1
#define TRACE_SOCKET_LISTEN_ENABLED 1
#define TRACE_QEMU_MUTEX_LOCK_ENABLED 1
#define TRACE_QEMU_MUTEX_LOCKED_ENABLED 1
#define TRACE_QEMU_MUTEX_UNLOCK_ENABLED 1
#define TRACE_QEMU_VFIO_DMA_RESET_TEMPORARY_ENABLED 1
#define TRACE_QEMU_VFIO_RAM_BLOCK_ADDED_ENABLED 1
#define TRACE_QEMU_VFIO_RAM_BLOCK_REMOVED_ENABLED 1
#define TRACE_QEMU_VFIO_FIND_MAPPING_ENABLED 1
#define TRACE_QEMU_VFIO_NEW_MAPPING_ENABLED 1
#define TRACE_QEMU_VFIO_DO_MAPPING_ENABLED 1
#define TRACE_QEMU_VFIO_DMA_MAP_ENABLED 1
#define TRACE_QEMU_VFIO_DMA_UNMAP_ENABLED 1

#define TRACE_RUN_POLL_HANDLERS_BEGIN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_run_poll_handlers_begin(void * ctx, int64_t max_ns, int64_t timeout)
{
}

static inline void trace_run_poll_handlers_begin(void * ctx, int64_t max_ns, int64_t timeout)
{
    if (true) {
        _nocheck__trace_run_poll_handlers_begin(ctx, max_ns, timeout);
    }
}

#define TRACE_RUN_POLL_HANDLERS_END_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_run_poll_handlers_end(void * ctx, bool progress, int64_t timeout)
{
}

static inline void trace_run_poll_handlers_end(void * ctx, bool progress, int64_t timeout)
{
    if (true) {
        _nocheck__trace_run_poll_handlers_end(ctx, progress, timeout);
    }
}

#define TRACE_POLL_SHRINK_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_poll_shrink(void * ctx, int64_t old, int64_t new)
{
}

static inline void trace_poll_shrink(void * ctx, int64_t old, int64_t new)
{
    if (true) {
        _nocheck__trace_poll_shrink(ctx, old, new);
    }
}

#define TRACE_POLL_GROW_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_poll_grow(void * ctx, int64_t old, int64_t new)
{
}

static inline void trace_poll_grow(void * ctx, int64_t old, int64_t new)
{
    if (true) {
        _nocheck__trace_poll_grow(ctx, old, new);
    }
}

#define TRACE_AIO_CO_SCHEDULE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_aio_co_schedule(void * ctx, void * co)
{
}

static inline void trace_aio_co_schedule(void * ctx, void * co)
{
    if (true) {
        _nocheck__trace_aio_co_schedule(ctx, co);
    }
}

#define TRACE_AIO_CO_SCHEDULE_BH_CB_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_aio_co_schedule_bh_cb(void * ctx, void * co)
{
}

static inline void trace_aio_co_schedule_bh_cb(void * ctx, void * co)
{
    if (true) {
        _nocheck__trace_aio_co_schedule_bh_cb(ctx, co);
    }
}

#define TRACE_THREAD_POOL_SUBMIT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_thread_pool_submit(void * pool, void * req, void * opaque)
{
}

static inline void trace_thread_pool_submit(void * pool, void * req, void * opaque)
{
    if (true) {
        _nocheck__trace_thread_pool_submit(pool, req, opaque);
    }
}

#define TRACE_THREAD_POOL_COMPLETE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_thread_pool_complete(void * pool, void * req, void * opaque, int ret)
{
}

static inline void trace_thread_pool_complete(void * pool, void * req, void * opaque, int ret)
{
    if (true) {
        _nocheck__trace_thread_pool_complete(pool, req, opaque, ret);
    }
}

#define TRACE_THREAD_POOL_CANCEL_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_thread_pool_cancel(void * req, void * opaque)
{
}

static inline void trace_thread_pool_cancel(void * req, void * opaque)
{
    if (true) {
        _nocheck__trace_thread_pool_cancel(req, opaque);
    }
}

#define TRACE_BUFFER_RESIZE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_buffer_resize(const char * buf, size_t olen, size_t len)
{
}

static inline void trace_buffer_resize(const char * buf, size_t olen, size_t len)
{
    if (true) {
        _nocheck__trace_buffer_resize(buf, olen, len);
    }
}

#define TRACE_BUFFER_MOVE_EMPTY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_buffer_move_empty(const char * buf, size_t len, const char * from)
{
}

static inline void trace_buffer_move_empty(const char * buf, size_t len, const char * from)
{
    if (true) {
        _nocheck__trace_buffer_move_empty(buf, len, from);
    }
}

#define TRACE_BUFFER_MOVE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_buffer_move(const char * buf, size_t len, const char * from)
{
}

static inline void trace_buffer_move(const char * buf, size_t len, const char * from)
{
    if (true) {
        _nocheck__trace_buffer_move(buf, len, from);
    }
}

#define TRACE_BUFFER_FREE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_buffer_free(const char * buf, size_t len)
{
}

static inline void trace_buffer_free(const char * buf, size_t len)
{
    if (true) {
        _nocheck__trace_buffer_free(buf, len);
    }
}

#define TRACE_QEMU_FILE_MONITOR_ADD_WATCH_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_file_monitor_add_watch(void * mon, const char * dirpath, const char * filename, void * cb, void * opaque, int64_t id)
{
}

static inline void trace_qemu_file_monitor_add_watch(void * mon, const char * dirpath, const char * filename, void * cb, void * opaque, int64_t id)
{
    if (true) {
        _nocheck__trace_qemu_file_monitor_add_watch(mon, dirpath, filename, cb, opaque, id);
    }
}

#define TRACE_QEMU_FILE_MONITOR_REMOVE_WATCH_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_file_monitor_remove_watch(void * mon, const char * dirpath, int64_t id)
{
}

static inline void trace_qemu_file_monitor_remove_watch(void * mon, const char * dirpath, int64_t id)
{
    if (true) {
        _nocheck__trace_qemu_file_monitor_remove_watch(mon, dirpath, id);
    }
}

#define TRACE_QEMU_FILE_MONITOR_NEW_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_file_monitor_new(void * mon, int fd)
{
}

static inline void trace_qemu_file_monitor_new(void * mon, int fd)
{
    if (true) {
        _nocheck__trace_qemu_file_monitor_new(mon, fd);
    }
}

#define TRACE_QEMU_FILE_MONITOR_ENABLE_WATCH_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_file_monitor_enable_watch(void * mon, const char * dirpath, int id)
{
}

static inline void trace_qemu_file_monitor_enable_watch(void * mon, const char * dirpath, int id)
{
    if (true) {
        _nocheck__trace_qemu_file_monitor_enable_watch(mon, dirpath, id);
    }
}

#define TRACE_QEMU_FILE_MONITOR_DISABLE_WATCH_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_file_monitor_disable_watch(void * mon, const char * dirpath, int id)
{
}

static inline void trace_qemu_file_monitor_disable_watch(void * mon, const char * dirpath, int id)
{
    if (true) {
        _nocheck__trace_qemu_file_monitor_disable_watch(mon, dirpath, id);
    }
}

#define TRACE_QEMU_FILE_MONITOR_EVENT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_file_monitor_event(void * mon, const char * dirpath, const char * filename, int mask, unsigned int id)
{
}

static inline void trace_qemu_file_monitor_event(void * mon, const char * dirpath, const char * filename, int mask, unsigned int id)
{
    if (true) {
        _nocheck__trace_qemu_file_monitor_event(mon, dirpath, filename, mask, id);
    }
}

#define TRACE_QEMU_FILE_MONITOR_DISPATCH_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_file_monitor_dispatch(void * mon, const char * dirpath, const char * filename, int ev, void * cb, void * opaque, int64_t id)
{
}

static inline void trace_qemu_file_monitor_dispatch(void * mon, const char * dirpath, const char * filename, int ev, void * cb, void * opaque, int64_t id)
{
    if (true) {
        _nocheck__trace_qemu_file_monitor_dispatch(mon, dirpath, filename, ev, cb, opaque, id);
    }
}

#define TRACE_QEMU_AIO_COROUTINE_ENTER_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_aio_coroutine_enter(void * ctx, void * from, void * to, void * opaque)
{
}

static inline void trace_qemu_aio_coroutine_enter(void * ctx, void * from, void * to, void * opaque)
{
    if (true) {
        _nocheck__trace_qemu_aio_coroutine_enter(ctx, from, to, opaque);
    }
}

#define TRACE_QEMU_COROUTINE_YIELD_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_coroutine_yield(void * from, void * to)
{
}

static inline void trace_qemu_coroutine_yield(void * from, void * to)
{
    if (true) {
        _nocheck__trace_qemu_coroutine_yield(from, to);
    }
}

#define TRACE_QEMU_COROUTINE_TERMINATE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_coroutine_terminate(void * co)
{
}

static inline void trace_qemu_coroutine_terminate(void * co)
{
    if (true) {
        _nocheck__trace_qemu_coroutine_terminate(co);
    }
}

#define TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_co_mutex_lock_uncontended(void * mutex, void * self)
{
}

static inline void trace_qemu_co_mutex_lock_uncontended(void * mutex, void * self)
{
    if (true) {
        _nocheck__trace_qemu_co_mutex_lock_uncontended(mutex, self);
    }
}

#define TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_co_mutex_lock_entry(void * mutex, void * self)
{
}

static inline void trace_qemu_co_mutex_lock_entry(void * mutex, void * self)
{
    if (true) {
        _nocheck__trace_qemu_co_mutex_lock_entry(mutex, self);
    }
}

#define TRACE_QEMU_CO_MUTEX_LOCK_RETURN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_co_mutex_lock_return(void * mutex, void * self)
{
}

static inline void trace_qemu_co_mutex_lock_return(void * mutex, void * self)
{
    if (true) {
        _nocheck__trace_qemu_co_mutex_lock_return(mutex, self);
    }
}

#define TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_co_mutex_unlock_entry(void * mutex, void * self)
{
}

static inline void trace_qemu_co_mutex_unlock_entry(void * mutex, void * self)
{
    if (true) {
        _nocheck__trace_qemu_co_mutex_unlock_entry(mutex, self);
    }
}

#define TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_co_mutex_unlock_return(void * mutex, void * self)
{
}

static inline void trace_qemu_co_mutex_unlock_return(void * mutex, void * self)
{
    if (true) {
        _nocheck__trace_qemu_co_mutex_unlock_return(mutex, self);
    }
}

#define TRACE_QEMU_MEMALIGN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_memalign(size_t alignment, size_t size, void * ptr)
{
}

static inline void trace_qemu_memalign(size_t alignment, size_t size, void * ptr)
{
    if (true) {
        _nocheck__trace_qemu_memalign(alignment, size, ptr);
    }
}

#define TRACE_QEMU_ANON_RAM_ALLOC_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_anon_ram_alloc(size_t size, void * ptr)
{
}

static inline void trace_qemu_anon_ram_alloc(size_t size, void * ptr)
{
    if (true) {
        _nocheck__trace_qemu_anon_ram_alloc(size, ptr);
    }
}

#define TRACE_QEMU_VFREE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfree(void * ptr)
{
}

static inline void trace_qemu_vfree(void * ptr)
{
    if (true) {
        _nocheck__trace_qemu_vfree(ptr);
    }
}

#define TRACE_QEMU_ANON_RAM_FREE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_anon_ram_free(void * ptr, size_t size)
{
}

static inline void trace_qemu_anon_ram_free(void * ptr, size_t size)
{
    if (true) {
        _nocheck__trace_qemu_anon_ram_free(ptr, size);
    }
}

#define TRACE_HBITMAP_ITER_SKIP_WORDS_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_hbitmap_iter_skip_words(const void * hb, void * hbi, uint64_t pos, unsigned long cur)
{
}

static inline void trace_hbitmap_iter_skip_words(const void * hb, void * hbi, uint64_t pos, unsigned long cur)
{
    if (true) {
        _nocheck__trace_hbitmap_iter_skip_words(hb, hbi, pos, cur);
    }
}

#define TRACE_HBITMAP_RESET_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_hbitmap_reset(void * hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit)
{
}

static inline void trace_hbitmap_reset(void * hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit)
{
    if (true) {
        _nocheck__trace_hbitmap_reset(hb, start, count, sbit, ebit);
    }
}

#define TRACE_HBITMAP_SET_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_hbitmap_set(void * hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit)
{
}

static inline void trace_hbitmap_set(void * hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit)
{
    if (true) {
        _nocheck__trace_hbitmap_set(hb, start, count, sbit, ebit);
    }
}

#define TRACE_LOCKCNT_FAST_PATH_ATTEMPT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_fast_path_attempt(const void * lockcnt, int expected, int new)
{
}

static inline void trace_lockcnt_fast_path_attempt(const void * lockcnt, int expected, int new)
{
    if (true) {
        _nocheck__trace_lockcnt_fast_path_attempt(lockcnt, expected, new);
    }
}

#define TRACE_LOCKCNT_FAST_PATH_SUCCESS_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_fast_path_success(const void * lockcnt, int expected, int new)
{
}

static inline void trace_lockcnt_fast_path_success(const void * lockcnt, int expected, int new)
{
    if (true) {
        _nocheck__trace_lockcnt_fast_path_success(lockcnt, expected, new);
    }
}

#define TRACE_LOCKCNT_UNLOCK_ATTEMPT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_unlock_attempt(const void * lockcnt, int expected, int new)
{
}

static inline void trace_lockcnt_unlock_attempt(const void * lockcnt, int expected, int new)
{
    if (true) {
        _nocheck__trace_lockcnt_unlock_attempt(lockcnt, expected, new);
    }
}

#define TRACE_LOCKCNT_UNLOCK_SUCCESS_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_unlock_success(const void * lockcnt, int expected, int new)
{
}

static inline void trace_lockcnt_unlock_success(const void * lockcnt, int expected, int new)
{
    if (true) {
        _nocheck__trace_lockcnt_unlock_success(lockcnt, expected, new);
    }
}

#define TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_futex_wait_prepare(const void * lockcnt, int expected, int new)
{
}

static inline void trace_lockcnt_futex_wait_prepare(const void * lockcnt, int expected, int new)
{
    if (true) {
        _nocheck__trace_lockcnt_futex_wait_prepare(lockcnt, expected, new);
    }
}

#define TRACE_LOCKCNT_FUTEX_WAIT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_futex_wait(const void * lockcnt, int val)
{
}

static inline void trace_lockcnt_futex_wait(const void * lockcnt, int val)
{
    if (true) {
        _nocheck__trace_lockcnt_futex_wait(lockcnt, val);
    }
}

#define TRACE_LOCKCNT_FUTEX_WAIT_RESUME_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_futex_wait_resume(const void * lockcnt, int new)
{
}

static inline void trace_lockcnt_futex_wait_resume(const void * lockcnt, int new)
{
    if (true) {
        _nocheck__trace_lockcnt_futex_wait_resume(lockcnt, new);
    }
}

#define TRACE_LOCKCNT_FUTEX_WAKE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_lockcnt_futex_wake(const void * lockcnt)
{
}

static inline void trace_lockcnt_futex_wake(const void * lockcnt)
{
    if (true) {
        _nocheck__trace_lockcnt_futex_wake(lockcnt);
    }
}

#define TRACE_SOCKET_LISTEN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_socket_listen(int num)
{
}

static inline void trace_socket_listen(int num)
{
    if (true) {
        _nocheck__trace_socket_listen(num);
    }
}

#define TRACE_QEMU_MUTEX_LOCK_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_mutex_lock(void * mutex, const char * file, const int line)
{
}

static inline void trace_qemu_mutex_lock(void * mutex, const char * file, const int line)
{
    if (true) {
        _nocheck__trace_qemu_mutex_lock(mutex, file, line);
    }
}

#define TRACE_QEMU_MUTEX_LOCKED_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_mutex_locked(void * mutex, const char * file, const int line)
{
}

static inline void trace_qemu_mutex_locked(void * mutex, const char * file, const int line)
{
    if (true) {
        _nocheck__trace_qemu_mutex_locked(mutex, file, line);
    }
}

#define TRACE_QEMU_MUTEX_UNLOCK_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_mutex_unlock(void * mutex, const char * file, const int line)
{
}

static inline void trace_qemu_mutex_unlock(void * mutex, const char * file, const int line)
{
    if (true) {
        _nocheck__trace_qemu_mutex_unlock(mutex, file, line);
    }
}

#define TRACE_QEMU_VFIO_DMA_RESET_TEMPORARY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_dma_reset_temporary(void * s)
{
}

static inline void trace_qemu_vfio_dma_reset_temporary(void * s)
{
    if (true) {
        _nocheck__trace_qemu_vfio_dma_reset_temporary(s);
    }
}

#define TRACE_QEMU_VFIO_RAM_BLOCK_ADDED_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_ram_block_added(void * s, void * p, size_t size)
{
}

static inline void trace_qemu_vfio_ram_block_added(void * s, void * p, size_t size)
{
    if (true) {
        _nocheck__trace_qemu_vfio_ram_block_added(s, p, size);
    }
}

#define TRACE_QEMU_VFIO_RAM_BLOCK_REMOVED_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_ram_block_removed(void * s, void * p, size_t size)
{
}

static inline void trace_qemu_vfio_ram_block_removed(void * s, void * p, size_t size)
{
    if (true) {
        _nocheck__trace_qemu_vfio_ram_block_removed(s, p, size);
    }
}

#define TRACE_QEMU_VFIO_FIND_MAPPING_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_find_mapping(void * s, void * p)
{
}

static inline void trace_qemu_vfio_find_mapping(void * s, void * p)
{
    if (true) {
        _nocheck__trace_qemu_vfio_find_mapping(s, p);
    }
}

#define TRACE_QEMU_VFIO_NEW_MAPPING_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_new_mapping(void * s, void * host, size_t size, int index, uint64_t iova)
{
}

static inline void trace_qemu_vfio_new_mapping(void * s, void * host, size_t size, int index, uint64_t iova)
{
    if (true) {
        _nocheck__trace_qemu_vfio_new_mapping(s, host, size, index, iova);
    }
}

#define TRACE_QEMU_VFIO_DO_MAPPING_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_do_mapping(void * s, void * host, size_t size, uint64_t iova)
{
}

static inline void trace_qemu_vfio_do_mapping(void * s, void * host, size_t size, uint64_t iova)
{
    if (true) {
        _nocheck__trace_qemu_vfio_do_mapping(s, host, size, iova);
    }
}

#define TRACE_QEMU_VFIO_DMA_MAP_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_dma_map(void * s, void * host, size_t size, bool temporary, uint64_t * iova)
{
}

static inline void trace_qemu_vfio_dma_map(void * s, void * host, size_t size, bool temporary, uint64_t * iova)
{
    if (true) {
        _nocheck__trace_qemu_vfio_dma_map(s, host, size, temporary, iova);
    }
}

#define TRACE_QEMU_VFIO_DMA_UNMAP_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_vfio_dma_unmap(void * s, void * host)
{
}

static inline void trace_qemu_vfio_dma_unmap(void * s, void * host)
{
    if (true) {
        _nocheck__trace_qemu_vfio_dma_unmap(s, host);
    }
}
#endif /* TRACE_UTIL_GENERATED_TRACERS_H */
