/// @file
/// @brief Contains xtd::forms::native::input_dialog API.
/// @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
#pragma once
/// @cond
#if !defined(__XTD_FORMS_NATIVE_LIBRARY__)
#error "Do not include this file: Internal use only"
#endif
/// @endcond

#include <cstdint>
#include <string>
#include <xtd/delegate.h>
#include <xtd/static.h>
#include <xtd/ustring.h>
#include <xtd/forms_native_export.h>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @cond
    class input_dialog;
    /// @endcond
    
    /// @brief The xtd::forms::native namespace contains internal native API definitions to access underlying toolkits used by xtd.forms library.
    /// @warning Internal use only
    namespace native {
      /// @brief Contains input dialog native API.
      /// @par Namespace
      /// xtd::forms::native
      /// @par Library
      /// xtd.forms.native
      /// @ingroup xtd_forms_native native
      /// @warning Internal use only
      class forms_native_export_ input_dialog final static_ {
        friend xtd::forms::input_dialog;
      protected:
        /// @name Protected methods
        
        /// @{
        /// @brief Shows dialog.
        /// @param hwnd Parent window handle.
        /// @param text A xtd::ustring that specifies the caption title of dialog.
        /// @param message A xtd::ustring that specifies the invite message text to display.
        /// @param value A xtd::ustring that specifies the text to display.
        /// @param character_casting Character casing values (0 : normal, 1 : upper, 2 : lower).
        /// @param multiline true for multiline; otherwise false.
        /// @param use_system_password_char true if use system password char; otherwise false.
        /// @param word_wrap true if word_wrap; otherwise false.
        /// @return true if the user clicks OK in the dialog box; otherwise, false.
        /// @remarks If result is true, the font parameter contains the new font, and the color parameter contains the now color.
        /// @warning Internal use only
        static bool run_dialog(intptr hwnd, const xtd::ustring& text, const xtd::ustring& message, xtd::ustring& value, int32 character_casting, bool multiline, bool use_system_password_char, bool word_wrap);
        /// @brief Shows async dialog as sheet.
        /// @param on_dialog_closed a dialog close delegate to call when the dialog is closed.
        /// @param hwnd Parent window handle.
        /// @param text A xtd::ustring that specifies the caption title of dialog.
        /// @param message A xtd::ustring that specifies the invite message text to display.
        /// @param value A xtd::ustring that specifies the text to display.
        /// @param character_casting Character casing values (0 : normal, 1 : upper, 2 : lower).
        /// @param multiline true for multiline; otherwise false.
        /// @param use_system_password_char true if use system password char; otherwise false.
        /// @param word_wrap true if word_wrap; otherwise false.
        /// @return true if the user clicks OK in the dialog box; otherwise, false.
        /// @remarks When dialog closed and if result is true, the value parameter contains the new string value.
        /// @warning Internal use only
        static void run_sheet(xtd::delegate<void(bool)> on_dialog_closed, intptr hwnd, const xtd::ustring& text, const xtd::ustring& message, xtd::ustring& value, int32 character_casting, bool multiline, bool use_system_password_char, bool word_wrap);
        /// @}
      };
    }
  }
}
