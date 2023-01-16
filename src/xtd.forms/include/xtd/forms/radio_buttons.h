/// @file
/// @brief Contains xtd::forms::radio_buttons factory.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "radio_button.h"
#include "system_texts.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Provides a collection of radio_button objects for use by a Windows Forms application.
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms controls
    /// @par Examples
    /// The following code example demonstrates the use of radio_button control factory.
    /// @include radio_buttons.cpp
    class forms_export_ radio_buttons final static_ {
    public:
      /// @name Methods
      
      /// @{
      /// @brief Create a system-defined radio_button that represent abort radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button abort(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::abort(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent abort radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button abort(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::abort(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent about radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button about(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::about(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent about radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button about(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::about(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent actual size radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button actual_size(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::actual_size(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent actual size radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button actual_size(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::actual_size(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent add radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button add(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::add(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent add radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button add(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::add(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent alignment radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button alignment(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::alignment(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent alignment radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button alignment(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::alignment(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent align left radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button align_left(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::align_left(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent align left radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button align_left(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::align_left(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent align right radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button align_right(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::align_right(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent align right radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button align_right(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::align_right(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent apply radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button apply(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::apply(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent apply radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button apply(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::apply(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent ascending radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button ascending(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::ascending(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent ascending radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button ascending(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::ascending(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent back radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button back(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::back(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent back radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button back(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::back(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent bold radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button bold(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::bold(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent bold radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button bold(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::bold(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent bottom radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button bottom(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::bottom(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent bottom radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button bottom(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::bottom(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent cancel radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button cancel(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::cancel(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent cancel radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button cancel(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::cancel(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent CD-Rom radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button cdrom(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::cdrom(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent CD-Rom radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button cdrom(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::cdrom(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent centered radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button centered(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::centered(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent centered radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button centered(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::centered(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent clear radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button clear(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::clear(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent clear radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button clear(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::clear(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent close radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button close(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::close(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent close radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button close(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::close(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent color radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button color(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::color(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent color radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button color(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::color(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent contents radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button contents(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::contents(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent contents radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button contents(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::contents(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent convert radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button convert(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::convert(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent convert radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button convert(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::convert(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent copy radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button copy(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::copy(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent copy radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button copy(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::copy(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent customize radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button customize(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::customize(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent customize radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button customize(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::customize(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent cut radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button cut(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::cut(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent cut radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button cut(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::cut(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent delete radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button del(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::del(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent delete radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button del(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::del(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent descending radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button descending(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::descending(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent descending radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button descending(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::descending(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent down radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button down(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::down(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent down radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button down(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::down(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent edit radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button edit(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::edit(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent edit radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button edit(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::edit(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent execute radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button execute(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::execute(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent execute radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button execute(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::execute(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent file radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button file(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::file(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent file radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button file(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::file(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent find radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button find(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::find(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent find radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button find(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::find(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent first radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button first(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::first(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent first radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button first(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::first(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent floppy radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button floppy(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::floppy(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent floppy radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button floppy(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::floppy(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent font radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button font(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::font(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent font radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button font(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::font(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent forward radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button forward(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::forward(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent forward radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button forward(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::forward(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent hard disk radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button harddisk(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::harddisk(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent hard disk radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button harddisk(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::harddisk(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent help radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button help(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::help(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent help radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button help(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::help(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent home radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button home(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::home(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent home radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button home(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::home(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent ignore radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button ignore(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::ignore(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent ignore radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button ignore(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::ignore(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent indent radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button indent(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::indent(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent indent radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button indent(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::indent(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent index radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button index(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::index(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent index radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button index(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::index(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent info radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button info(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::info(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent info radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button info(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::info(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent italic radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button italic(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::italic(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent italic radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button italic(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::italic(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent justified radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button justified(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::justified(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent justified radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button justified(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::justified(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent jump_to radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button jump_to(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::jump_to(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent jump to radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button jump_to(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::jump_to(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent last radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button last(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::last(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent last radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button last(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::last(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent network radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button network(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::network(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent network radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button network(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::network(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent new radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button new_(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::new_(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent new radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button new_(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::new_(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent no radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button no(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::no(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent no radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button no(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::no(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent ok radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button ok(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::ok(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent ok radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button ok(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::ok(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent open radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button open(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::open(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent open radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button open(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::open(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent options radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button options(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::options(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent options radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button options(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::options(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent paste radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button paste(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::paste(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent paste radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button paste(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::paste(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent preferences radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button preferences(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::preferences(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent preferences radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button preferences(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::preferences(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent print radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button print(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::print(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent print radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button print(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::print(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent print preview radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button print_preview(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::print_preview(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent print preview radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button print_preview(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::print_preview(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent properties radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button properties(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::properties(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent properties radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button properties(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::properties(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent quit radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button quit(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::quit(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent quit radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button quit(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::quit(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent redo radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button redo(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::redo(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent redo radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button redo(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::redo(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent refresh radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button refresh(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::refresh(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent refresh radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button refresh(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::refresh(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent remove radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button remove(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::remove(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent remove radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button remove(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::remove(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent replace radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button replace(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::replace(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent replace radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button replace(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::replace(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent retry radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button retry(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::retry(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent retry radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button retry(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::retry(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent revert to saved radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button revert_to_saved(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::revert_to_saved(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent revert to saved radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button revert_to_saved(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::revert_to_saved(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent save radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button save(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::save(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent save radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button save(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::save(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent save as radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button save_as(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::save_as(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent save as radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button save_as(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::save_as(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent search radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button search(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::search(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent search radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button search(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::search(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent select all radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button select_all(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::select_all(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent select all radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button select_all(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::select_all(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent spell check radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button spell_check(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::spell_check(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent spell check radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button spell_check(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::spell_check(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent stop radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button stop(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::stop(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent stop radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button stop(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::stop(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent strikeout radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button strikeout(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::strikeout(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent strikeout radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button strikeout(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::strikeout(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent tools radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button tools(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::tools(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent tools radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button tools(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::tools(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent top radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button top(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::top(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent top radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button top(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::top(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent undelete radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button undelete(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::undelete(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent undelete radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button undelete(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::undelete(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent underline radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button underline(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::underline(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent underline radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button underline(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::underline(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent undo radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button undo(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::undo(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent undo radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button undo(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::undo(), location, size, name);}
      /// @brief Create a system-defined radio_button that represents an unindented radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button unindent(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::unindent(), location, size, name);}
      /// @brief Create a system-defined radio_button that represents an unindented radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button unindent(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::unindent(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent up radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button up(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::up(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent up radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button up(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::up(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent view radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button view(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::view(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent view radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button view(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::view(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent yes radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button yes(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::yes(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent yes radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button yes(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::yes(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent zoom in radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button zoom_in(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::zoom_in(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent zoom in radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button zoom_in(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::zoom_in(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent zoom out radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button zoom_out(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::zoom_out(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent zoom out radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button zoom_out(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::zoom_out(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent zoom to fit radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button zoom_to_fit(bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(system_texts::zoom_to_fit(), location, size, name);}
      /// @brief Create a system-defined radio_button that represent zoom to fit radio_button.
      /// @param parent The control that contains the radio_button.
      /// @param checked true if the check box is checked; otherwise, false.
      /// @param location The radio_button location in pixels.
      /// @param size The radio_button size in pixels.
      /// @param name The name of the radio_button.
      /// @return The created radio_button.
      static radio_button zoom_to_fit(const control& parent, bool checked = false, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string) {return control::create<radio_button>(parent, system_texts::zoom_to_fit(), location, size, name);}
      /// @}
    };
  }
}
