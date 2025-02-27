#define UNICODE
#define __XTD_CORE_NATIVE_LIBRARY__
#include <xtd/native/interlocked>
#include <xtd/native/types>
#undef __XTD_CORE_NATIVE_LIBRARY__
#include <Windows.h>

using namespace std;
using namespace xtd::native;

int_least32_t interlocked::add(int_least32_t& location, int_least32_t value) {
  InterlockedExchange((long*)&location, location + value);
  return location;
}

int_least64_t interlocked::add(int_least64_t& location, int_least64_t value) {
  InterlockedExchange64((long long*)&location, location + value);
  return location;
}

int_least32_t interlocked::compare_exchange(int_least32_t& location, int_least32_t value, int_least32_t comparand) {
  return InterlockedCompareExchange((long*)&location, value, comparand);
}

int_least64_t interlocked::compare_exchange(int_least64_t& location, int_least64_t value, int_least64_t comparand) {
  return InterlockedCompareExchange64((long long*)&location, value, comparand);
}

__slong__ interlocked::compare_exchange(__slong__& location, __slong__ value, __slong__ comparand) {
  return InterlockedCompareExchange((__slong__*)&location, value, comparand);
}

#pragma warning(push)
#pragma warning(disable:4302)
#pragma warning(disable:4311)
#pragma warning(disable:4312)
void* interlocked::compare_exchange(void*& location, void* value, void* comparand) {
  if (sizeof(void*) == 4)
    return (void*)InterlockedCompareExchange((long*)&location, (long)value, (long)comparand);
  return (void*)InterlockedCompareExchange64((long long*)&location, (long long)value, (long long)comparand);
}
#pragma warning(pop)

int_least32_t interlocked::decrement(int_least32_t& location) {
  return InterlockedDecrement((long*)&location);
}

int_least64_t interlocked::decrement(int_least64_t& location) {
  return InterlockedDecrement64((long long*)&location);
}

int_least32_t interlocked::exchange(int_least32_t& location, int_least32_t value) {
  return InterlockedExchange((long*)&location, value);
}

int_least64_t interlocked::exchange(int_least64_t& location, int_least64_t value) {
  return InterlockedExchange64((long long*)&location, value);
}

__slong__ interlocked::exchange(__slong__& location, __slong__ value) {
  return InterlockedExchange((__slong__*)&location, value);
}

#pragma warning(push)
#pragma warning(disable:4302)
#pragma warning(disable:4311)
#pragma warning(disable:4312)
void* interlocked::exchange(void*& location, void* value) {
  if (sizeof(void*) == 4)
    return (void*)InterlockedExchange((long*)&location, (long)value);
  return (void*)InterlockedExchange64((long long*)&location, (long long)value);
}
#pragma warning(pop)

int_least32_t interlocked::increment(int_least32_t& location) {
  return InterlockedIncrement((long*)&location);
}

int_least64_t interlocked::increment(int_least64_t& location) {
  return InterlockedIncrement64((long long*)&location);
}
