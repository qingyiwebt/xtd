#include <xtd/xtd.tunit>
#include <vector>

using namespace std;
using namespace xtd::tunit;

namespace unit_tests {
  class test_class_(test) {
  public:
    void test_method_(test_case_succeed) {
      vector v = {1, 2, 3, 4};
      assert::throws_any([&] {return v.at(5);});
    }
    
    void test_method_(test_case_failed) {
      vector v = {1, 2, 3, 4};
      assert::throws_any([&] {return v.at(2);});
    }
  };
}

auto main()->int {
  return console_unit_test().run();
}

// This code produces the following output:
//
// Start 2 tests from 1 test case
// Run tests:
//   SUCCEED test.test_case_succeed (0 ms total)
//   FAILED  test.test_case_failed (0 ms total)
//     Expected: <exception>
//     But was:  <nothing>
//     Stack Trace: in |---OMITTED---|/assert_throws_any.cpp:15
//
// Test results:
//   SUCCEED 1 test.
//   FAILED  1 test.
// End 2 tests from 1 test case ran. (0 ms total)
