#pragma region xtd generated code
// This code was generated by CMake script.
//
// Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.

#pragma once

#include <exception>
#include <xtd/xtd>

namespace picture_box::properties {
  /// @brief A strongly-typed resource class, for looking up localized strings, etc.
  /// @details This class was auto-generated by CMake script. To add or remove a member, edit your CMakeList.txt file then rerun cmake tools.
  class resources static_ {
  public:
    /// @brief Looks up a localized resource of type xtd::drawing::bitmap.
    static const xtd::drawing::bitmap& logo() {
      static xtd::drawing::bitmap bitmap(xtd::io::path::combine(xtd::io::path::get_directory_name(xtd::environment::get_command_line_args()[0]), "", "resources", "logo.png"));
      return bitmap;
    }

  };
}

#pragma endregion
