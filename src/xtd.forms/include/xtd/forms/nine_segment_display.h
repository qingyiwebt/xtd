/// @file
/// @brief Contains xtd::forms::nine_segment_display control.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "seven_segment_display.h"

namespace xtd {
  namespace forms {
    /// @brief Represents a nine segment display class.
    /// @par Header
    /// @code #include <xtd/forms/nine_segment_display> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms controls
    /// @par Appearance
    /// |       | Windows                                           | macOS                                             | Gnome                                             |
    /// | ----- | ------------------------------------------------- | ------------------------------------------------- | ------------------------------------------------- |
    /// | Light |  @image html control_nine_segment_display_w.png   |  @image html control_nine_segment_display_m.png   |  @image html control_nine_segment_display_g.png   |
    /// | Dark  |  @image html control_nine_segment_display_wd.png  |  @image html control_nine_segment_display_md.png  |  @image html control_nine_segment_display_gd.png  |
    /// @par Examples
    /// The following code example demonstrates the use of nine segment display control.
    /// @include nine_segment_display.cpp
    class nine_segment_display : public seven_segment_display {
      struct data;
      
    public:
      /// @name Constructors
      
      /// @{
      /// @brief Initialize a new instance of nine_segment_display class.
      nine_segment_display();
      /// @}
      
      /// @name Properties
      
      /// @{
      /// @brief Sets thickness of segment.
      /// @param value A int32 that represent the segment thickness.
      /// @return Current seven_segment_display.
      int32 thickness() const noexcept override;
      /// @brief Sets thickness of segment.
      /// @param value A int32 that represent the segment thickness.
      /// @return Current seven_segment_display.
      seven_segment_display& thickness(int32 value) override;
      /// @}
      
      /// @name Methods
      
      /// @{
      using control::create;
      /// @brief A factory to create an xtd::forms::nine_segment_display with specified color, location, size, and name.
      /// @param segments A dots_collection that represent all dots status.
      /// @param show_back_segment true if background segments are shown; otherwise false
      /// @param location A xtd::drawing::point that represent location of the xtd::forms::nine_segment_display.
      /// @param size A xtd::drawing::size that represent size of the xtd::forms::nine_segment_display.
      /// @param name The name of the xtd::forms::nine_segment_display.
      /// @return New xtd::forms::nine_segment_display created.
      static nine_segment_display create(xtd::forms::segments segments, bool show_back_segment = true, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string);
      /// @brief A factory to create an xtd::forms::nine_segment_display with specified parent, color, location ,size, and name.
      /// @param parent The parent that contains the new created xtd::forms::nine_segment_display.
      /// @param segments A xtd::forms::segments combination that represent nine_segment_display.
      /// @param show_back_segment true if background segments are shown; otherwise false
      /// @param location A xtd::drawing::point that represent location of the xtd::forms::nine_segment_display.
      /// @param size A xtd::drawing::size that represent size of the xtd::forms::nine_segment_display.
      /// @param name The name of the xtd::forms::nine_segment_display.
      /// @return New xtd::forms::nine_segment_display created.
      static nine_segment_display create(const control& parent, xtd::forms::segments segments, bool show_back_segment = true, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string);
      /// @}
      
    protected:
      /// @name Protected methods
      
      /// @{
      void draw_back_digit(drawing::graphics& graphics) override;
      
      /// @brief Draw segment h on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_h(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment ion specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_i(drawing::graphics& graphics, const drawing::color& color);
      
      void on_paint(paint_event_args& e) override;
      /// @}
      
    private:
      std::shared_ptr<data> data_;
    };
  }
}

