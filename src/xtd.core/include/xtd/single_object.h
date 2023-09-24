/// @file
/// @brief Contains xtd::single_object alias.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "box_floating_point"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @name Boxed types
  
  /// @{
  /// @brief Represent a boxed single.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core system types
  /// @remarks For more information about types, see <a href="https://gammasoft71.github.io/xtd/docs/documentation/Guides/xtd.core/Types%20overview/types">Native types, boxing and unboxing</a>.
  /// @par Examples
  /// The following example shows how to create and use xtd::single_object.
  /// @code
  /// auto stringer = [](const object& value) {return value.to_string();};
  /// float unboxed_object = 3.14f;
  /// single_object boxed_object = unboxed_object;
  /// auto result = stringer(boxed_object);
  /// console::write_line("result = {}", result); // Display: result = 3.14;
  /// @endcode
  using single_object = box_floating_point<float>;
  /// @}
}
