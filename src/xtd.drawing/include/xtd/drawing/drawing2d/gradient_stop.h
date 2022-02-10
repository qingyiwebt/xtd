/// @file
/// @brief Contains xtd::drawing::drawing2d::gradient_stop alias.
/// @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
#pragma once
#include "../color.h"
#include <utility>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::drawing namespace provides access to GDI+ basic graphics functionality. More advanced functionality is provided in the xtd::drawing::drawing2d, xtd::drawing::imaging, and xtd::drawing::text namespaces.
  namespace drawing {
    /// @brief The xtd::.drawing::drawing2d namespace provides advanced two-dimensional and vector graphics functionality.
    namespace drawing2d {
      /// @brief Describes the location and color of a transition point in a gradient.
      /// @par Namespace
      /// xtd::drawing::drawing2d
      /// @par Library
      /// xtd.drawing
      /// @ingroup xtd_drawing drawing
      /// @param color The color of the gradient stop.
      /// @param offset the location of the gradient stop within the gradient vector.
      /// @remarks A value of 0.0 specifies that the stop is positioned at the beginning of the gradient vector, while a value of 1.0 specifies that the stop is positioned at the end of the gradient vector.
      using gradient_stop = std::pair<xtd::drawing::color, float>;
    }
  }
}

