/// @file
/// @brief Contains xtd::diagnostics::ostream_trace_listener listener.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include <ostream>
#include "trace_listener.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::diagnostics namespace provides classes that allow you to interact with system processes, event logs, and performance counters.
  namespace diagnostics {
    /// @brief Directs tracing or debugging output to a std::ostream, such as std::fstream, std::stream...
    /// @code
    /// class core_export_ ostream_trace_listener : public xtd::diagnostics::trace_listener
    /// @endcode
    /// @par Inheritance
    /// xtd::object → xtd::abstract_object → xtd::diagnostics::trace_listener → xtd::diagnostics::ostream_trace_listener
    /// @par Header
    /// @code #include <xtd/diagnostics/ostream_trace_listener> @endcode
    /// @par Namespace
    /// xtd::diagnostics
    /// @par Library
    /// xtd.core
    /// @ingroup xtd_core diagnostics debug
    class core_export_ ostream_trace_listener : public xtd::diagnostics::trace_listener {
    public:
      /// @name Constructors
      
      /// @{
      /// @brief Initializes a new instance of the xtd::diagnostics::ostream_trace_listener class with a specified ostream.
      /// @param ostream An std::ostream that represents the stream the xtd::diagnostics::ostream_trace_listener writes to.
      /// @remarks This constructor initializes the name property to an empty string ("").
      explicit ostream_trace_listener(const std::ostream& ostream);
      /// @cond
      ~ostream_trace_listener();
      /// @endcond
      /// @}
      
      /// @name Properties
      
      /// @{
      /// @brief Gets the underlying stream.
      /// @return A std::ostream that represents the stream the ostream_trace_listener writes to.
      virtual const std::ostream& ostream() const;
      /// @brief Sets the underlying stream.
      /// @param ostream A std::ostream that represents the stream the ostream_trace_listener writes to.
      virtual void ostream(const std::ostream& ostream);
      /// @}
      
      /// @name Methods
      
      /// @{
      void close() override;
      void flush() override {
        #if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
        flush_();
        #endif
      }
      
      using xtd::diagnostics::trace_listener::write;
      void write(const xtd::ustring& message) override {
        #if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
        write_(message);
        #endif
      }
      
      using xtd::diagnostics::trace_listener::write_line;
      void write_line(const xtd::ustring& message) override {
        #if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
        write_line_(message);
        #endif
      }
      /// @}
      
    private:
      void flush_();
      void write_(const xtd::ustring& message);
      void write_line_(const xtd::ustring& message);
      std::ostream ostream_ {nullptr};
    };
  }
}
