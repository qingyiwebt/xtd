/// @file
/// @brief Contains xtd::forms::form_closed_event_args event handler.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "form_closed_event_args.h"
#include <xtd/event_handler>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Represents the method that handles a form_closed event.
    /// @param sender The source of the event.
    /// @param e A form_closed_event_args that contains the event data.
    /// @par Header
    /// @code #include <xtd/forms/form_closed_event_handler> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms events
    
    using form_closed_event_handler = delegate<void(object& sender, const form_closed_event_args& e)>;
  }
}
