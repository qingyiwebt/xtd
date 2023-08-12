/// @file
/// @brief Contains xtd::threading::monitor class.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once

#include "../diagnostics/stack_frame.h"
#include "../core_export.h"
#include "../invalid_operation_exception.h"
#include "../static.h"
#include "../time_span.h"
#include "../types.h"
#include "../as.h"
#include "../is.h"
#include "mutex.h"
#include "timeout.h"
#include <chrono>
#include <map>

/// @cond
struct __lock_guard;
/// @endcond

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::threading namespace provides classes and interfaces that enable multithreaded programming. In addition to classes for synchronizing thread activities and access to data ( xtd::threading::mutex, xtd::threading::monitor, xtd::threading::interlocked, xtd::threading::auto_reset_event, and so on), this namespace includes a xtd::threading::thread_pool class that allows you to use a pool of system-supplied threads, and a xtd::threading::timer class that executes callback methods on thread pool threads.
  namespace threading {
    /// @brief Provides a mechanism that synchronizes access to objects.
    /// @code
    /// class core_export_ monitor static_
    /// @endcode
    /// @par Inheritance
    /// xtd::static_object → xtd::threading::monitor
    /// @par Header
    /// @code #include <xtd/threading/monitor> @endcode
    /// @par Namespace
    /// xtd::threading
    /// @par Library
    /// xtd.core threading
    /// @ingroup xtd_core threading
    class core_export_ monitor static_ {
      struct item;
      using item_collection = std::map<intptr, item>;
    public:
      /// @name Methods
      
      /// @{
      /// @brief Acquires an exclusive lock on the specified obj.
      /// @param obj The object on which to acquire the monitor lock.
      /// @remarks Use Enter to acquire the Monitor on the object passed as the parameter. If another thread has executed an Enter on the object, but has not yet executed the corresponding Exit, the current thread will block until the other thread releases the object. It is legal for the same thread to invoke Enter more than once without it blocking; however, an equal number of Exit calls must be invoked before other threads waiting on the object will unblock.
      /// @remarks Usex Monitor to lock objects (that is, reference types), not value types. When you pass a value type variable to Enter, it is boxed as an object. If you pass the same variable to Enter again, the thread is block. The code that Monitor is supposedly protecting is not protected. Furthermore, when you pass the variable to Exit, still another separate object is created. Because the object passed to Exit is different from the object passed to Enter, Monitor throws SynchronizationLockException. For details, see the conceptual topic Monitors.
      template<typename object_t>
      static void enter(const object_t& obj) {
        auto lock_taken = false;
        enter_ptr(get_ptr(obj), lock_taken);
      }
      
      /// @brief Acquires an exclusive lock on the specified obj.
      /// @param obj The object on which to acquire the monitor lock.
      /// @param lock_taken The result of the attempt to acquire the lock, passed by reference. The input must be false. The output is true if the lock is acquired; otherwise, the output is false. The output is set even if an exception occurs during the attempt to acquire the lock.
      /// @note If no exception occurs, the output of this method is always true.
      /// @remarks Use Enter to acquire the Monitor on the object passed as the parameter. If another thread has executed an Enter on the object, but has not yet executed the corresponding Exit, the current thread will block until the other thread releases the object. It is legal for the same thread to invoke Enter more than once without it blocking; however, an equal number of Exit calls must be invoked before other threads waiting on the object will unblock.
      /// @remarks Use Monitor to lock objects (that is, reference types), not value types. When you pass a value type variable to Enter, it is boxed as an object. If you pass the same variable to Enter again, the thread is block. The code that Monitor is supposedly protecting is not protected. Furthermore, when you pass the variable to Exit, still another separate object is created. Because the object passed to Exit is different from the object passed to Enter, Monitor throws SynchronizationLockException. For details, see the conceptual topic Monitors.
      template<typename object_t>
      static void enter(const object_t& obj, bool& lock_taken) {
        enter_ptr(get_ptr(obj), lock_taken);
      }
      
      /// @brief Acquires an exclusive lock on the specified obj.
      /// @param obj The object on which to acquire the monitor lock.
      /// @remarks Use Enter to acquire the Monitor on the object passed as the parameter. If another thread has executed an Enter on the object, but has not yet executed the corresponding Exit, the current thread will block until the other thread releases the object. It is legal for the same thread to invoke Enter more than once without it blocking; however, an equal number of Exit calls must be invoked before other threads waiting on the object will unblock.
      /// @remarks Usex Monitor to lock objects (that is, reference types), not value types. When you pass a value type variable to Enter, it is boxed as an object. If you pass the same variable to Enter again, the thread is block. The code that Monitor is supposedly protecting is not protected. Furthermore, when you pass the variable to Exit, still another separate object is created. Because the object passed to Exit is different from the object passed to Enter, Monitor throws SynchronizationLockException. For details, see the conceptual topic Monitors.
      template<typename object_t>
      static bool is_entered(const object_t& obj) {
        return is_entered_ptr(get_ptr(obj));
      }

      /// @brief Notifies a thread in the waiting queue of a change in the locked object's state.
      /// @param obj The object a thread is waiting for.
      /// Only the current owner of the lock can signal a waiting object using Pulse.
      /// The thread that currently owns the lock on the specified object invokes this method to signal the next thread in line for the lock. Upon receiving the pulse, the waiting thread is moved to the ready queue. When the thread that invoked Pulse releases the lock, the next thread in the ready queue (which is not necessarily the thread that was pulsed) acquires the lock.
      template<typename object_t>
      static void pulse(const object_t& obj) {
        pulse_ptr(rget_ptr(obj));
      }
      
      /// @brief Notifies all waiting threads of a change in the object's state.
      /// @param obj The object a thread is waiting for.
      /// @remarks The thread that currently owns the lock on the specified object invokes this method to signal all threads waiting to acquire the lock on the object. After the signal is sent, the waiting threads are moved to the ready queue. When the thread that invoked PulseAll releases the lock, the next thread in the ready queue acquires the lock.
      /// @remarks Note that a synchronized object holds several references, including a reference to the thread that currently holds the lock, a reference to the ready queue, which contains the threads that are ready to obtain the lock, and a reference to the waiting queue, which contains the threads that are waiting for notification of a change in the object's state.
      /// @remarks The Pulse, PulseAll, and Wait methods must be invoked from within a synchronized block of code.
      /// @remarks The remarks for the Pulse method explain what happens if Pulse is called when no threads are waiting.
      /// @remarks To signal a single thread, use the Pulse method.
      template<typename object_t>
      static void pulse_all(const object_t& obj) {
        pulse_all_ptr(get_ptr(obj));
      }
      
      /// @brief Releases an exclusive lock on the specified obj.
      /// @param obj The object on which to release the lock.
      /// @remarks The calling thread must own the lock on the obj parameter. If the calling thread owns the lock on the specified object, and has made an equal number of Exit and Enter calls for the object, then the lock is released. If the calling thread has not invoked Exit as many times as Enter, the lock is not released.
      /// @remarks If the lock is released and other threads are in the ready queue for the object, one of the threads acquires the lock. If other threads are in the waiting queue waiting to acquire the lock, they are not automatically moved to the ready queue when the owner of the lock calls Exit. To move one or more waiting threads into the ready queue, call Pulse or PulseAll before invoking Exit.
      template<typename object_t>
      static void exit(const object_t& obj) {
        exit_ptr(get_ptr(obj));
      }

      /// @brief Attempts to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If successful, this method acquires an exclusive lock on the obj parameter. This method returns immediately, whether or not the lock is available.
      /// @remarks This method is similar to Enter, but it will never block. If the thread cannot enter without blocking, the method returns false, and the thread does not enter the critical section.
      template<typename object_t>
      static bool try_enter(const object_t& obj) noexcept {
        auto lock_taken = false;
        return try_enter_ptr(get_ptr(obj), timeout::infinite, lock_taken);
      }
      
      /// @brief Attempts to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @param lock_taken The result of the attempt to acquire the lock, passed by reference. The input must be false. The output is true if the lock is acquired; otherwise, the output is false. The output is set even if an exception occurs during the attempt to acquire the lock.
      /// @note If no exception occurs, the output of this method is always true.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If successful, this method acquires an exclusive lock on the obj parameter. This method returns immediately, whether or not the lock is available.
      /// @remarks This method is similar to Enter, but it will never block. If the thread cannot enter without blocking, the method returns false, and the thread does not enter the critical section.
      template<typename object_t>
      static bool try_enter(const object_t& obj, bool& lock_taken) noexcept {
        return try_enter_ptr(get_ptr(obj), timeout::infinite, lock_taken);
      }
      
      /// @brief Attempts, for the specified number of milliseconds, to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @param milliseconds_timeout The number of milliseconds to wait for the lock.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If the milliseconds_timeout parameter equals Timeout::Infinite, this method is equivalent to Enter. If milliseconds_timeout equals 0, this method is equivalent to try_enter.
      template<typename object_t>
      static bool try_enter(const object_t& obj, int32 milliseconds_timeout) noexcept {
        auto lock_taken = false;
        return try_enter_ptr(get_ptr(obj), milliseconds_timeout, lock_taken);
      }
      
      /// @brief Attempts, for the specified number of milliseconds, to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @param milliseconds_timeout The number of milliseconds to wait for the lock.
      /// @param lock_taken The result of the attempt to acquire the lock, passed by reference. The input must be false. The output is true if the lock is acquired; otherwise, the output is false. The output is set even if an exception occurs during the attempt to acquire the lock.
      /// @note If no exception occurs, the output of this method is always true.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If the milliseconds_timeout parameter equals Timeout::Infinite, this method is equivalent to Enter. If milliseconds_timeout equals 0, this method is equivalent to try_enter.
      template<typename object_t>
      static bool try_enter(const object_t& obj, int32 milliseconds_timeout, bool& lock_taken) noexcept {
        return try_enter_ptr(get_ptr(obj), milliseconds_timeout, lock_taken);
      }
      
      /// @brief Attempts, for the specified number of milliseconds, to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @param milliseconds_timeout The number of milliseconds to wait for the lock.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If the milliseconds_timeout parameter equals Timeout::Infinite, this method is equivalent to Enter. If milliseconds_timeout equals 0, this method is equivalent to try_enter.
      template<typename object_t>
      static bool try_enter(const object_t& obj, int64 milliseconds_timeout) noexcept {
        auto lock_taken = false;
        return try_enter_ptr(get_ptr(obj), static_cast<int32>(milliseconds_timeout), lock_taken);
      }
      
      /// @brief Attempts, for the specified number of milliseconds, to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @param milliseconds_timeout The number of milliseconds to wait for the lock.
      /// @param lock_taken The result of the attempt to acquire the lock, passed by reference. The input must be false. The output is true if the lock is acquired; otherwise, the output is false. The output is set even if an exception occurs during the attempt to acquire the lock.
      /// @note If no exception occurs, the output of this method is always true.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If the milliseconds_timeout parameter equals Timeout::Infinite, this method is equivalent to Enter. If milliseconds_timeout equals 0, this method is equivalent to try_enter.
      template<typename object_t>
      static bool try_enter(const object_t& obj, int64 milliseconds_timeout, bool& lock_taken) noexcept {
        return try_enter_ptr(get_ptr(obj), static_cast<int32>(milliseconds_timeout), lock_taken);
      }
      
      /// @brief Attempts, for the specified amount of time, to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @param timeout A time_span representing the amount of time to wait for the lock. A value of -1 millisecond specifies an infinite wait.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If the value of the timeout parameter converted to milliseconds equals -1, this method is equivalent to Enter. If the value of timeout equals 0, this method is equivalent to try_enter.
      template<typename object_t>
      static bool try_enter(const object_t& obj, const time_span& timeout) noexcept {
        auto lock_taken = false;
        return try_enter_ptr(get_ptr(obj), std::chrono::duration_cast<std::chrono::milliseconds>(timeout).count(), lock_taken);
      }
      
      /// @brief Attempts, for the specified amount of time, to acquire an exclusive lock on the specified object.
      /// @param obj The object on which to acquire the lock.
      /// @param timeout A time_span representing the amount of time to wait for the lock. A value of -1 millisecond specifies an infinite wait.
      /// @param lock_taken The result of the attempt to acquire the lock, passed by reference. The input must be false. The output is true if the lock is acquired; otherwise, the output is false. The output is set even if an exception occurs during the attempt to acquire the lock.
      /// @note If no exception occurs, the output of this method is always true.
      /// @return bool true if the current thread acquires the lock; otherwise, false
      /// @remarks If the value of the timeout parameter converted to milliseconds equals -1, this method is equivalent to Enter. If the value of timeout equals 0, this method is equivalent to try_enter.
      template<typename object_t>
      static bool try_enter(const object_t& obj, const time_span& timeout, bool& lock_taken) noexcept {
        return try_enter_ptr(get_ptr(obj), std::chrono::duration_cast<std::chrono::milliseconds>(timeout).count(), lock_taken);
      }
      /// @}
      
    private:
      friend struct ::__lock_guard;

      template<typename object_t>
      static intptr get_ptr(const object_t& obj) noexcept {
        return is<ustring>(obj) ? get_ustring_ptr(as<ustring>(obj)) : reinterpret_cast<intptr>(&obj);
      }
      
      static void enter_ptr(intptr ptr);
      static void enter_ptr(intptr ptr, bool& lock_taken);
      static void exit_ptr(intptr ptr);
      static intptr get_ustring_ptr(const ustring& str) noexcept;
      static bool is_entered_ptr(intptr ptr) noexcept;
      static void pulse_ptr(intptr obj);
      static void pulse_all_ptr(intptr obj);
      static bool try_enter_ptr(intptr ptr, int32 milliseconds_timeout, bool& lock_taken) noexcept;

      static item_collection items;
      static mutex monitor_mutex;
    };
  }
}
