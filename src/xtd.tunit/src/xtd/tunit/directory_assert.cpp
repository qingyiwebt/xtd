#include "../../../include/xtd/tunit/directory_assert"

using namespace xtd;
using namespace xtd::io;
using namespace xtd::tunit;

#if defined(__cpp_lib_filesystem)
using namespace std::filesystem;

void directory_assert::are_equal(const directory_entry& expected, const directory_entry& actual) {
  are_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_equal(const directory_entry& expected, const directory_entry& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_equal(expected, actual, "", stack_frame);
}

void directory_assert::are_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message) {
  are_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  are_equal(directory_info(expected.path().string()), directory_info(actual.path().string()), message, stack_frame);
}
#endif

void directory_assert::are_equal(const directory_info& expected, const directory_info& actual) {
  are_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_equal(const directory_info& expected, const directory_info& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_equal(expected, actual, "", stack_frame);
}

void directory_assert::are_equal(const directory_info& expected, const directory_info& actual, const std::string& message) {
  are_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_equal(const directory_info& expected, const directory_info& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  if (expected.full_name() != actual.full_name())
    base_assert::fail(base_assert::to_string(expected.full_name()), base_assert::to_string(actual.full_name()), message, stack_frame);
  else
    assert::succeed(message, stack_frame);
}

#if defined(__cpp_lib_filesystem)
void directory_assert::are_not_equal(const directory_entry& expected, const directory_entry& actual) {
  are_not_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_not_equal(const directory_entry& expected, const directory_entry& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_not_equal(expected, actual, "", stack_frame);
}

void directory_assert::are_not_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message) {
  are_not_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_not_equal(const directory_entry& expected, const directory_entry& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  are_not_equal(directory_info(expected.path().string()), directory_info(actual.path().string()), message, stack_frame);
}
#endif

void directory_assert::are_not_equal(const directory_info& expected, const directory_info& actual) {
  are_not_equal(expected, actual, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_not_equal(const directory_info& expected, const directory_info& actual, const xtd::diagnostics::stack_frame& stack_frame) {
  are_not_equal(expected, actual, "", stack_frame);
}

void directory_assert::are_not_equal(const directory_info& expected, const directory_info& actual, const std::string& message) {
  are_not_equal(expected, actual, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::are_not_equal(const directory_info& expected, const directory_info& actual, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  if (expected.full_name() == actual.full_name())
    base_assert::fail("not " + base_assert::to_string(expected.full_name()), base_assert::to_string(actual.full_name()), message, stack_frame);
  else
    assert::succeed(message, stack_frame);
}

#if defined(__cpp_lib_filesystem)
void directory_assert::does_not_exist(const std::filesystem::directory_entry& directory) {
  does_not_exist(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::does_not_exist(const std::filesystem::directory_entry& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  does_not_exist(directory, "", stack_frame);
}

void directory_assert::does_not_exist(const std::filesystem::directory_entry& directory, const std::string& message) {
  does_not_exist(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::does_not_exist(const std::filesystem::directory_entry& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  does_not_exist(directory_info(directory.path().string()), message, stack_frame);
}
#endif

void directory_assert::does_not_exist(const xtd::io::directory_info& directory) {
  does_not_exist(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::does_not_exist(const xtd::io::directory_info& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  does_not_exist(directory, "", stack_frame);
}

void directory_assert::does_not_exist(const xtd::io::directory_info& directory, const std::string& message) {
  does_not_exist(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::does_not_exist(const xtd::io::directory_info& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  if (xtd::io::directory::exists(directory.full_name()))
    base_assert::fail("not directory exists", "\"" + base_assert::to_string(directory) + "\"", message, stack_frame);
  else
    assert::succeed(message, stack_frame);
}

#if defined(__cpp_lib_filesystem)
void directory_assert::exists(const std::filesystem::directory_entry& directory) {
  exists(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::exists(const std::filesystem::directory_entry& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  exists(directory, "", stack_frame);
}

void directory_assert::exists(const std::filesystem::directory_entry& directory, const std::string& message) {
  exists(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::exists(const std::filesystem::directory_entry& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  exists(directory_info(directory.path().string()), message, stack_frame);
}
#endif

void directory_assert::exists(const xtd::io::directory_info& directory) {
  exists(directory, "", xtd::diagnostics::stack_frame::empty());
}

void directory_assert::exists(const xtd::io::directory_info& directory, const xtd::diagnostics::stack_frame& stack_frame) {
  exists(directory, "", stack_frame);
}

void directory_assert::exists(const xtd::io::directory_info& directory, const std::string& message) {
  exists(directory, message, xtd::diagnostics::stack_frame::empty());
}

void directory_assert::exists(const xtd::io::directory_info& directory, const std::string& message, const xtd::diagnostics::stack_frame& stack_frame) {
  if (!directory.exists())
    base_assert::fail("directory exists", "\"" + base_assert::to_string(directory) + "\"", message, stack_frame);
  else
    assert::succeed(message, stack_frame);
}
