#include <xtd/console>
#include <xtd/environment>
#include <xtd/startup>

using namespace xtd;

namespace startup1_example {
  class program {
  public:
    static void main() {
      // Write arguments to the console output
      for (auto arg : environment::get_command_line_args())
        console::write_line(arg);
        
      // return 42
      environment::exit_code(42);
    }
  };
}

auto main(int argc, char* argv[])->int {
  return startup::safe_run(startup1_example::program::main);
}
// Is approximately the same as :
//
// auto main(int argc, char* argv[])->int {
//   try {
//     startup1_example::program::main();
//     return environment::exit_code();
//   } catch(const std::exception& e) {
//     if (dynamic_cast<const system_exception*>(&e)) console::write_line(static_cast<const system_exception&>(e).to_string());
//     else console::write_line(e.what());
//   } catch(...) {
//     console::write_line("Unhandled exception: Unknown exception occurred");
//   }
// }


// This code produces the following output if one two "three four" five are entered on command line:
//
// /!---OMITTED---!/main1
// one
// two
// three four
// five
