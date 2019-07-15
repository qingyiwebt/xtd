#include <cassert>
#include <xtd/xtd.diagnostics>
#include <iostream>

using namespace std;
using namespace xtd;
using namespace xtd::diagnostics;

// The main entry point for the application.
int main() {
  //cout << "Hello, World!" << endl;
  //debug::indent();
  debug::write_line("This is  message", "Unknown");
  //debug::assert(false);
}

// This code produces the following output with colors:
//
// Hello, World!
