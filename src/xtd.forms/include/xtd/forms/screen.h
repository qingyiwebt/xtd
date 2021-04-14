/// @file
/// @brief Contains xtd::forms::screen component.
/// @copyright Copyright (c) 2021 Gammasoft. All rights reserved.
#pragma once
#include <cstdint>
#include <string>
#include <vector>
#include <xtd/drawing/rectangle.h>
#include "control.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Represents a display device or multiple display devices on a single system.
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms components
    /// @remarks The constructor for this object is not public, so you cannot explicitly create a screen object. The object is created when you call its public methods.
    /// @par Examples
    /// The following code example demonstrate the use of screen class.
    /// @include screen.cpp
    /// @par Windows
    /// @image html screen_w.png
    /// <br>
    /// @image html screen_wd.png
    /// @par macOS
    /// @image html screen_m.png
    /// <br>
    /// @image html screen_md.png
    /// @par Gnome
    /// @image html screen_g.png
    /// <br>
    /// @image html screen_gd.png
    class forms_export_ screen {
    public:
      /// @cond
      screen(const screen&) = default;
      screen& operator=(const screen&) = default;
      /// @endcond
      
      /// @brief Gets an array of all displays on the system.
      /// @return An array of type screen, containing all displays on the system.
      static std::vector<screen> all_screens();

      /// @brief Gets the number of bits of memory, associated with one pixel of data.
      /// @return The number of bits of memory, associated with one pixel of data.
      /// @remarks Typically, the number of bits per pixel for a screen is useful when working with bitmaps.
      int32_t bits_per_pixel() const {return bits_per_pixel_;}
      
      /// @brief Gets the bounds of the display.
      /// @return A xtd::drawing::rectangle, representing the bounds of the display.
      const drawing::rectangle& bounds() const {return bounds_;}
      
      /// @brief Gets the device name associated with a display.
      /// @return The device name associated with a display.
      /// @remarks This string may contain non-printable characters.
      const std::string& device_name() const {return device_name_;}
      
      /// @brief Gets a value indicating whether a particular display is the primary device.
      /// @return true if this display is primary; otherwise, false.
      bool primary() const {return primary_;}
      
      /// @brief Gets the primary display.
      /// @return The primary display.
      /// @remarks For a single display system, the primary display is the only display.
      static screen primary_screen() {
        std::vector<screen> screens = all_screens();
        for (auto& screen : screens)
          if (screen.primary()) return screen;
        return screens[0];
      }
      
      /// @brief Gets the working area of the display. The working area is the desktop area of the display, excluding taskbars, docked windows, and docked tool bars.
      /// @return A xtd::drawing::rectangle, representing the working area of the display.
      /// @remarks The working area is the desktop area of the display, excluding taskbars, docked windows, and docked tool bars.
      /// @remarks working_area will return the entire area of the screen if the Windows Taskbar is set to Auto-Hide, no matter whether the Taskbar is currently displayed or not.
      const drawing::rectangle& working_area() const {return working_area_;}
      
      /// @brief Creates the xtd::drawing::graphics for the screen.
      /// @return A xtd::drawing::graphics for the screen.
      /// @ingroup drawing
      static drawing::graphics create_graphics();

      /// @brief Retrieves a screen for the display that contains the largest portion of the specified control.
      /// @param control A xtd::forms::control for which to retrieve a Screen.
      /// @return A screen for the display that contains the largest region of the specified control. In multiple display environments where no display contains the control, the display closest to the specified control is returned.
      static screen from_control(const control& control);
      
      /// @brief Retrieves a screen for the display that contains the largest portion of the object referred to by the specified handle.
      /// @param handle The window handle for which to retrieve the screen.
      /// @return A screen for the display that contains the largest region of the object. In multiple display environments where no display contains any portion of the specified handle, the display closest to the object is returned.
      static screen from_handle(intptr_t handle);

      /// @brief Retrieves a screen for the display that contains the specified point.
      /// @param point A xtd::drawing::oint that specifies the location for which to retrieve a screen.
      /// @return A screen for the display that contains the point. In multiple display environments where no display contains the point, the display closest to the specified point is returned.
      static screen from_point(const drawing::point& point);
      
      /// @brief Retrieves a screen for the display that contains the largest portion of the rectangle.
      /// @param A xtd::drawing::rectangle that specifies the area for which to retrieve the display.
      /// @return A screen for the display that contains the largest region of the specified rectangle. In multiple display environments where no display contains the rectangle, the display closest to the rectangle is returned.
      static screen from_rectangle(const drawing::rectangle& rect);
      
      /// @brief Retrieves the bounds of the display that contains the largest portion of the specified control.
      /// @param control The control for which to retrieve the display bounds.
      /// @return A xtd::drawing::rectangle that specifies the bounds of the display that contains the specified control. In multiple display environments where no display contains the specified control, the display closest to the control is returned.
      static drawing::rectangle get_bounds(const control& control);
      
      /// @brief Retrieves the bounds of the display that contains the largest portion of the specified handle.
      /// @param handle The window handle for which to retrieve the display bounds.
      /// @return A xtd::drawing::rectangle that specifies the bounds of the display that contains the specified handle. In multiple display environments where no display contains the specified handle, the display closest to the object is returned.
      static drawing::rectangle get_bounds(intptr_t handle);
      
      /// @brief Retrieves the bounds of the display that contains the specified point.
      /// @param point A xtd::drawing::point that specifies the coordinates for which to retrieve the display bounds.
      /// @return A xtd::drawing::rectangle that specifies the bounds of the display that contains the specified point. In multiple display environments where no display contains the specified point, the display closest to the point is returned.
      static drawing::rectangle get_bounds(const drawing::point& point);
      
      /// @brief Retrieves the bounds of the display that contains the largest portion of the specified rectangle.
      /// @param rect A xtd::drawing::rectangle that specifies the area for which to retrieve the display bounds.
      /// @return A xtd::drawing::rectangle that specifies the bounds of the display that contains the specified rectangle. In multiple display environments where no monitor contains the specified rectangle, the monitor closest to the rectangle is returned.
      static drawing::rectangle get_bounds(const drawing::rectangle& rect);
      
      /// @brief Retrieves the working area for the display that contains the largest region of the specified control. The working area is the desktop area of the display, excluding taskbars, docked windows, and docked tool bars.
      /// @param control The control for which to retrieve the working area.
      /// @return A xtd::drawing::rectangle that specifies the working area. In multiple display environments where no display contains the specified control, the display closest to the control is returned.
      static drawing::rectangle get_working_area(const control& control);
      
      /// @brief Retrieves the working area for the display that contains the largest region of the specified handle. The working area is the desktop area of the display, excluding taskbars, docked windows, and docked tool bars.
      /// @param handle The window handle for which to retrieve the working area.
      /// @return A xtd::drawing::rectangle that specifies the working area. In multiple display environments where no display contains the specified handle, the display closest to the object is returned.
      static drawing::rectangle get_working_area(intptr_t handle);
      
      /// @brief Retrieves the working area closest to the specified point. The working area is the desktop area of the display, excluding taskbars, docked windows, and docked tool bars.
      /// @param point A xtd::drawing::point that specifies the coordinates for which to retrieve the working area.
      /// @return A xtd::drawing::rectangle that specifies the working area. In multiple display environments where no display contains the specified point, the display closest to the point is returned.
      static drawing::rectangle get_working_area(const drawing::point& point);
      
      /// @brief Retrieves the working area for the display that contains the largest portion of the specified rectangle. The working area is the desktop area of the display, excluding taskbars, docked windows, and docked tool bars.
      /// @param rect The xtd::drawing::rectangle that specifies the area for which to retrieve the working area.
      /// @return A xtd::drawing::rectangle that specifies the working area. In multiple display environments where no display contains the specified rectangle, the display closest to the rectangle is returned.
      static drawing::rectangle get_working_area(const drawing::rectangle& rect);
                                  
    private:
      screen() = default;
      screen(int32_t bits_per_pixel, const drawing::rectangle& bounds, const std::string& device_name, bool primary, const drawing::rectangle& working_area) : bits_per_pixel_(bits_per_pixel), bounds_(bounds), device_name_(device_name), primary_(primary), working_area_(working_area) {}
      
      int32_t bits_per_pixel_ = 0;
      drawing::rectangle bounds_;
      std::string device_name_;
      bool primary_ = false;
      drawing::rectangle working_area_;
    };                           
  }
}
