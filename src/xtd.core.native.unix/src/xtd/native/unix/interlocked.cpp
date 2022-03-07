#define __XTD_CORE_NATIVE_LIBRARY__
#include <xtd/native/interlocked.h>
#undef __XTD_CORE_NATIVE_LIBRARY__
#include <chrono>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <map>

using namespace std;
using namespace xtd::native;

int32_t interlocked::add(int32_t& location, int32_t value) {
  __sync_fetch_and_add(&location, value);
  return location;
}

int64_t interlocked::add(int64_t& location, int64_t value) {
  __sync_fetch_and_add(&location, value);
  return location;
}

int32_t interlocked::compare_exchange(int32_t& location, int32_t value, int32_t comparand) {
  return __sync_val_compare_and_swap(&location, comparand, value);
}

int64_t interlocked::compare_exchange(int64_t& location, int64_t value, int64_t comparand) {
  return __sync_val_compare_and_swap(&location, comparand, value);
}

intptr_t interlocked::compare_exchange(intptr_t& location, intptr_t value, intptr_t comparand) {
  return __sync_val_compare_and_swap(&location, comparand, value);
}

int32_t interlocked::decrement(int32_t& location) {
  __sync_fetch_and_sub(&location, 1);
  return location;
}

int64_t interlocked::decrement(int64_t& location) {
  __sync_fetch_and_sub(&location, 1);
  return location;
}

int32_t interlocked::exchange(int32_t& location, int32_t value) {
  return __sync_val_compare_and_swap(&location, location, value);
}

int64_t interlocked::exchange(int64_t& location, int64_t value) {
  return __sync_val_compare_and_swap(&location, location, value);
}

intptr_t interlocked::exchange(intptr_t& location, intptr_t value) {
  return __sync_val_compare_and_swap(&location, location, value);
}

int32_t interlocked::increment(int32_t& location) {
  __sync_fetch_and_add(&location, 1);
  return location;
}

int64_t interlocked::increment(int64_t& location) {
  __sync_fetch_and_add(&location, 1);
  return location;
}
