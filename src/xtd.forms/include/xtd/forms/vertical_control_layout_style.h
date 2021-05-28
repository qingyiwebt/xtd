/// @file
/// @brief Contains xtd::forms::vertical_control_layout_style class.
/// @copyright Copyright (c) 2021 Gammasoft. All rights reserved.
#pragma once
#include <optional>
#include "control_layout_style.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Implements the basic functionality that represents the appearance and behavior of a control layout.
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms
    class vertical_control_layout_style : public control_layout_style {
    public:
      /// @brief Initialises a new instance of vertical control layout style class.
      vertical_control_layout_style() = default;
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded.
      /// @param expanded true if control expanded; otherwise false.
      explicit vertical_control_layout_style(bool expanded) : control_layout_style(expanded) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded and content alignement.
      /// @param expanded true if control expanded; otherwise false.
      /// @param align One of the content_alignment values. The default is middle_center.
      vertical_control_layout_style(bool expanded, xtd::forms::content_alignment align) : control_layout_style(expanded, align) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified size type.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      explicit vertical_control_layout_style(xtd::forms::size_type size_type) : control_layout_style(size_type) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded and size type.
      /// @param expanded true if control expanded; otherwise false.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      vertical_control_layout_style(bool expanded, xtd::forms::size_type size_type) : control_layout_style(expanded, size_type) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded, content alignement and size type.
      /// @param expanded true if control expanded; otherwise false.
      /// @param align One of the content_alignment values. The default is middle_center.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      vertical_control_layout_style(bool expanded, xtd::forms::content_alignment align, xtd::forms::size_type size_type) : control_layout_style(expanded, align, size_type) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified size type.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      /// @brief Initialises a new instance of vertical control layout style class with spcified size type and height.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      vertical_control_layout_style(xtd::forms::size_type size_type, float height) : control_layout_style(size_type), height_(height) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified size type and height.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      vertical_control_layout_style(xtd::forms::size_type size_type, int32_t height) : control_layout_style(size_type), height_(static_cast<float>(height)) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded, size type and height.
      /// @param expanded true if control expanded; otherwise false.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      vertical_control_layout_style(bool expanded, xtd::forms::size_type size_type, float height) : control_layout_style(expanded, size_type), height_(height) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded, size type and height.
      /// @param expanded true if control expanded; otherwise false.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      vertical_control_layout_style(bool expanded, xtd::forms::size_type size_type, int32_t height) : control_layout_style(expanded, size_type), height_(static_cast<float>(height)) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded, content alignement, size type and height.
      /// @param expanded true if control expanded; otherwise false.
      /// @param align One of the content_alignment values. The default is middle_center.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      vertical_control_layout_style(bool expanded, xtd::forms::content_alignment align, xtd::forms::size_type size_type, float height) : control_layout_style(expanded, align, size_type), height_(height) {}
      /// @brief Initialises a new instance of vertical control layout style class with spcified expanded, content alignement, size type and height.
      /// @param expanded true if control expanded; otherwise false.
      /// @param align One of the content_alignment values. The default is middle_center.
      /// @param size_type One of the xtd::forms::size_type values that specifies how layout container of user interface (UI) elements should be sized relative to their container. The default is xtd::forms::size_type::auto_size.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      vertical_control_layout_style(bool expanded, xtd::forms::content_alignment align, xtd::forms::size_type size_type, int32_t height) : control_layout_style(expanded, align, size_type), height_(static_cast<float>(height)) {}

      /// @brief Gets the height value for a control.
      /// @return The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      std::optional<float> height() const {return height_;}
      /// @brief Sets the height value for a control.
      /// @param height The preferred height, in pixels or percentage, depending on the xtd::forms::control_layout_style::size_type property.
      void height(float height) {height_ = height;}

      /// @brief Returns a string that represent xtd::forms::control_layout_style.
      /// @return A string containing that represent xtd::forms::control_layout_style.
      std::string to_string() const override {return strings::format("vertical_control_layout_style=[expanded={}, align={}, size_type={}, height={}]", expanded(), align(), size_type(), height_);}
      
      /// @cond
      bool operator==(const vertical_control_layout_style& value) const {return height_ == value.height_ && control_layout_style::operator==(value);}
      bool operator!=(const vertical_control_layout_style& value) const {return !operator==(value);}
      friend std::ostream& operator<<(std::ostream& os, const xtd::forms::vertical_control_layout_style& control_layout_style) noexcept {
        return os << control_layout_style.to_string();
      }
      /// @endcond

    private:
      std::optional<float> height_;
    };
  }
}
