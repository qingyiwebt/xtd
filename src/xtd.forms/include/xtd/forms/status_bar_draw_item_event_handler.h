/// @file
/// @brief Contains xtd::forms::status_bar_draw_item_event_handler event handler.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "status_bar_draw_item_event_args.h"
#include <xtd/event_handler>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Represents the method that will handle the xtd::forms::status_bar::draw_item event of a xtd::forms::status_bar.
    /// @param sender The source of the event.
    /// @param e A xtd::forms::status_bar_draw_item_event_args that contains the event data.
    /// @par Header
    /// @code #include <xtd/forms/status_bar_draw_item_event_handler> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms events
    /// @remarks When you create a xtd::forms::status_bar_draw_item_event_handler delegate, you identify the method that will handle the event. To associate the event with your event handler, add an instance of the delegate to the event. The event handler is called whenever the event occurs, unless you remove the delegate.
    /// @remarks For more information about handling events, see <a href="https://gammasoft71.github.io/xtd/docs/documentation/Guides/xtd.core/Events/overview">Handling and Raising Events</a>.
    using status_bar_draw_item_event_handler = delegate<void(object& sender, const status_bar_draw_item_event_args& e)>;
  }
}
