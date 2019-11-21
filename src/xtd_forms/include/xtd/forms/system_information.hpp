#pragma once
#include <any>
#include <xtd/drawing/image.hpp>
#include "component.hpp"
#include "arrange_direction.hpp"
#include "arrange_starting_position.hpp"
#include "boot_mode.hpp"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Provides information about the current system environment.
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms
    /// @remarks The system_information class provides static properties that can be used to get information about the current system environment. The class provides access to information such as Windows display element sizes, operating system settings, network availability, and the capabilities of hardware installed on the system. This class cannot be instantiated.
    /// @remarks For more information about system-wide parameters, see "SystemParametersInfo" in the Platform SDK documentation at http://msdn.microsoft.com.
    class system_information final {
    public:
      /// @cond
      system_information() = delete;
      /// @endcond

      /// @brief Gets the active window tracking delay.
      /// @return The active window tracking delay, in milliseconds.
      static int32_t active_window_tracking_delay();
      
      /// @brief Gets a value that indicates the direction in which the operating system arranges minimized windows.
      /// @return arrange_direction One of the ArrangeDirection values that indicates the direction in which the operating system arranges minimized windows.
      /// @remarks The arrange_direction property indicates the direction in which minimized windows are arranged on the desktop or in a Multiple Document Interface (MDI) container.
      static xtd::forms::arrange_direction arrange_direction();

      /// @brief Gets an ArrangeStartingPosition value that indicates the starting position from which the operating system arranges minimized windows.
      /// @return ArrangeStartingPosition One of the ArrangeStartingPosition values that indicates the starting position from which the operating system arranges minimized windows.
      /// @remarks The ArrangeStartingPosition property indicates the corner of a screen or window in which the operating system begins to arrange minimized windows.
      static xtd::forms::arrange_starting_position arrange_starting_position();

      /// @brief Gets a BootMode value that indicates the boot mode the system was started in.
      /// @return BootMode One of the BootMode values that indicates the boot mode the system was started in.
      /// @remarks The BootMode property indicates whether the operating system was started in a normal or safe boot mode.
      static xtd::forms::boot_mode boot_mode();
    };
  }
}
