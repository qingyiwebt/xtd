#include "../../../include/xtd/tunit/directory_assume"

using namespace xtd;
using namespace xtd::io;
using namespace xtd::tunit;

#if defined(__cpp_lib_filesystem)
using namespace std::filesystem;

void directory_assume::are_equal(const directory_entry& expected, const directory_entry& actual) {
  are_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_equal(const directory_entry& expected, const directory_entry& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_equal(expected, actual, "", stack_frame);
}

void directory_assume::are_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message) {
  are_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  try {
    directory_assert::are_equal(expected, actual, message, stack_frame);
  } catch (...) {
    assert::abort();
  }
}
#endif

void directory_assume::are_equal(const directory_info& expected, const directory_info& actual) {
  are_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_equal(const directory_info& expected, const directory_info& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_equal(expected, actual, "", stack_frame);
}

void directory_assume::are_equal(const directory_info& expected, const directory_info& actual, const std::string& message) {
  are_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_equal(const directory_info& expected, const directory_info& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  try {
    directory_assert::are_equal(expected, actual, message, stack_frame);
  } catch (...) {
    assert::abort();
  }
}

#if defined(__cpp_lib_filesystem)
void directory_assume::are_not_equal(const directory_entry& expected, const directory_entry& actual) {
  are_not_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_not_equal(const directory_entry& expected, const directory_entry& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_not_equal(expected, actual, "", stack_frame);
}

void directory_assume::are_not_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message) {
  are_not_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_not_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  try {
    directory_assert::are_not_equal(expected, actual, message, stack_frame);
  } catch (...) {
    assert::abort();
  }
}
#endif

void directory_assume::are_not_equal(const directory_info& expected, const directory_info& actual) {
  are_not_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_not_equal(const directory_info& expected, const directory_info& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_not_equal(expected, actual, "", stack_frame);
}

void directory_assume::are_not_equal(const directory_info& expected, const directory_info& actual, const std::string& message) {
  are_not_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::are_not_equal(const directory_info& expected, const directory_info& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  try {
    directory_assert::are_not_equal(expected, actual, message, stack_frame);
  } catch (...) {
    assert::abort();
  }
}

#if defined(__cpp_lib_filesystem)
void directory_assume::does_not_exist(const std::filesystem::directory_entry& directory) {
  does_not_exist(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::does_not_exist(const std::filesystem::directory_entry& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  does_not_exist(directory, "", stack_frame);
}

void directory_assume::does_not_exist(const std::filesystem::directory_entry& directory, const std::string& message) {
  does_not_exist(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::does_not_exist(const std::filesystem::directory_entry& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  does_not_exist(directory_info(directory.path().string()), message, stack_frame);
}
#endif

void directory_assume::does_not_exist(const xtd::io::directory_info& directory) {
  does_not_exist(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::does_not_exist(const xtd::io::directory_info& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  does_not_exist(directory, "", stack_frame);
}

void directory_assume::does_not_exist(const xtd::io::directory_info& directory, const std::string& message) {
  does_not_exist(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::does_not_exist(const xtd::io::directory_info& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  try {
    directory_assert::does_not_exist(directory, message, stack_frame);
  } catch (...) {
    assert::abort();
  }
}

#if defined(__cpp_lib_filesystem)
void directory_assume::exists(const std::filesystem::directory_entry& directory) {
  exists(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::exists(const std::filesystem::directory_entry& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  exists(directory, "", stack_frame);
}

void directory_assume::exists(const std::filesystem::directory_entry& directory, const std::string& message) {
  exists(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::exists(const std::filesystem::directory_entry& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  exists(directory_info(directory.path().string()), message, stack_frame);
}
#endif

void directory_assume::exists(const xtd::io::directory_info& directory) {
  exists(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assume::exists(const xtd::io::directory_info& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  exists(directory, "", stack_frame);
}

void directory_assume::exists(const xtd::io::directory_info& directory, const std::string& message) {
  exists(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assume::exists(const xtd::io::directory_info& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  try {
    directory_assert::exists(directory, message, stack_frame);
  } catch (...) {
    assert::abort();
  }
}

