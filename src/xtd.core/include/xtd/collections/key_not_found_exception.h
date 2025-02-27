/// @file
/// @brief Contains xtd::collections::key_not_found_exception exception.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "../system_exception.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  namespace collections {
    /// @brief The exception that is thrown when the key specified for accessing an element in a collection does not match any key in the collection.
    /// @code
    /// class key_not_found_exception : public xtd::system_exception
    /// @endcode
    /// @par Inheritance
    /// xtd::system_exception → xtd::collections::key_not_found_exception
    /// @par Header
    /// @code #include <xtd/collections/key_not_found_exception> @endcode
    /// @par Namespace
    /// xtd::collections
    /// @par Library
    /// xtd.core
    /// @ingroup xtd_core exceptions
    /// @par Examples
    /// The following example demonstrates how to throw and catch an key_not_found_exception.
    /// @include key_not_found_exception.cpp
    class key_not_found_exception : public xtd::system_exception {
    public:
      /// @name Constructors
      
      /// @{
      /// @brief Create a new instance of class key_not_found_exception
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      /// @remarks Message is set with the default message associate to the exception.
      explicit key_not_found_exception(const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(default_message(), info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit key_not_found_exception(const xtd::ustring& message, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param error Error code associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit key_not_found_exception(const xtd::ustring& message, const std::error_code& error, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, error, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param help_link Help link string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit key_not_found_exception(const xtd::ustring& message, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, help_link, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param error Error code associate to the exception.
      /// @param help_link Help link string associate to the exception.
      explicit key_not_found_exception(const xtd::ustring& message, const std::error_code& error, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, error, help_link, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      /// @remarks Message is set with the default message associate to the exception.
      explicit key_not_found_exception(const std::exception& inner_exception, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(default_message(), inner_exception, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit key_not_found_exception(const xtd::ustring& message, const std::exception& inner_exception, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, inner_exception, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param error Error code associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit key_not_found_exception(const xtd::ustring& message, const std::exception& inner_exception, const std::error_code& error, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, inner_exception, error, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param help_link Help link string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit key_not_found_exception(const xtd::ustring& message, const std::exception& inner_exception, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, inner_exception, help_link, info) {}
      /// @brief Create a new instance of class key_not_found_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param error Error code associate to the exception.
      /// @param help_link Help link string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit key_not_found_exception(const xtd::ustring& message, const std::exception& inner_exception, const std::error_code& error, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : system_exception(message, inner_exception, error, help_link, info) {}
      /// @}
      
      /// @cond
      key_not_found_exception(const key_not_found_exception&) = default;
      key_not_found_exception& operator =(const key_not_found_exception&) = default;
      /// @endcond
      
    private:
      const char* default_message() const noexcept {return "The given key was not present in the dictionary."_t;}
    };
  }
}

/// @brief Helper on xtd::collections::key_not_found_exception to call it with current stack frame information.
/// @par Header
/// @code #include <xtd/collections/key_not_found_exception> @endcode
/// @par Library
/// xtd.core
/// @ingroup xtd_core exceptions
/// @remarks Is equivalent to xtd::collections::key_not_found_exception {{any argument}, csf_}
/// @code
/// void my_func() {
///   if (invalid_info) throw key_not_found_exception_(); // same as : throw key_not_found_exception {csf_};
///   if (invalid_value) throw key_not_found_exception_("Bad value"); // same as : throw key_not_found_exception {"Bad value", csf_};
///   ...
/// }
/// @endcode
#define key_not_found_exception_(...) key_not_found_exception(add_csf_(__VA_ARGS__))
