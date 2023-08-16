/// @file
/// @brief Contains xtd::time_span typedef.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once

#include "icomparable.h"
#include "iequatable.h"
#include "object.h"
#include "ticks.h"
#include "types.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @name Boxed types
  
  /// @{
  /// @brief Represents a time interval.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core types
  /// @remarks For more information about types, see <a href="https://gammasoft71.github.io/xtd/docs/documentation/Guides/xtd.core/Types%20overview/types">Native types, boxing and unboxing</a>.
  //using time_span = xtd::ticks;
  struct time_span : /*public xtd::ticks,*/ public xtd::object, xtd::iequatable<time_span>, icomparable<time_span> {
  public:
    /// @name Fields

    /// @{
    /// @brief Represents the maximum TimeSpan value. This field is read-only.
    /// @remarks The value of this field is equivalent to xtd::int64_object::max_value ticks. The string representation of this value is positive 10675199.02:48:05.4775807, or slightly more than 10,675,199 days.
    static const time_span max_value;
    
    /// @brief Represents the minimum TimeSpan value. This field is read-only.
    /// @remarks The value of this field is equivalent to xtd::int64_object::min_value ticks. The string representation of this value is negative 10675199.02:48:05.4775808, or slightly more than negative 10,675,199 days.
    static const time_span min_value;
    
    /// @brief Represents the number of nanoseconds per tick. This field is constant.
    /// @remarks The value of this constant is 100.
    static constexpr int64 nanoseconds_per_tick = 100ll;

    /// @brief Represents the number of ticks in 1 day. This field is constant.
    /// @remarks The value of this constant is 864 billion; that is, 864,000,000,000.
    static constexpr int64 ticks_per_day = 864000000000ll;

    /// @brief Represents the number of ticks in 1 hour. This field is constant.
    /// @remarks The value of this constant is 36 billion; that is, 36,000,000,000.
    static constexpr int64 ticks_per_hour = 36000000000ll;

    /// @brief Represents the number of ticks in 1 microsecond. This field is constant.
    /// @remarks The value of this constant is 10.
    static constexpr int64 ticks_per_microsecond = 10ll;

    /// @brief Represents the number of ticks in 1 millisecond. This field is constant.
    /// @remarks The value of this constant is 10 thousand; that is, 10,000.
    static constexpr int64 ticks_per_milliecond = 10000ll;

    /// @brief Represents the number of ticks in 1 minute. This field is constant.
    /// @remarks The value of this constant is 600 million; that is, 600,000,000.
    static constexpr int64 ticks_per_minute = 600000000ll;

    /// @brief Represents the number of ticks in 1 second.
    /// @remarks he value of this constant is 10 million; that is, 10,000,000.
    static constexpr int64 ticks_per_second = 10000000ll;

    /// @brief Represents the zero TimeSpan value. This field is read-only.
    /// @remarks Because the value of the Zero field is a TimeSpan object that represents a zero time value, you can compare it with other TimeSpan objects to determine whether the latter represent positive, non-zero, or negative time intervals. You can also use this field to initialize a TimeSpan object to a zero time value.
    static const time_span zero;
    /// @}
    
    /// @name Constructors
    
    /// @{
    /// @brief Initializes a new instance of the TimeSpan structure to the specified number of ticks.
    /// @param tiks A time period expressed in 100-nanosecond units.
    /// @remarks A single tick represents one hundred nanoseconds or one ten-millionth of a second. There are 10,000 ticks in a millisecond.
    explicit time_span(int64 ticks);
    /// @brief Initializes a new instance of the TimeSpan structure to the specified number of ticks.
    /// @param tiks A time period expressed in 100-nanosecond units.
    /// @remarks A single tick represents one hundred nanoseconds or one ten-millionth of a second. There are 10,000 ticks in a millisecond.
    explicit time_span(xtd::ticks ticks);
    /// @brief Initializes a new instance of the TimeSpan structure to a specified number of hours, minutes, and seconds.
    /// @param hours Number of hours.
    /// @param minutes Number of minutes.
    /// @param seconds Number of seconds.
    /// @exception xtd::argument_out_of_range_exception The parameters specify a TimeSpan value less than TimeSpan::min_value or greater than TimeSpan::max_value.
    /// @remarks The specified hours, minutes, and seconds are converted to ticks, and that value initializes this instance.
    time_span(int32 hours, int32 minutes, int32 seconds);
    /// @brief Initializes a new instance of the TimeSpan structure to a specified number of days, hours, minutes, and seconds.
    /// @param days Number of days.
    /// @param hours Number of hours.
    /// @param minutes Number of minutes.
    /// @param seconds Number of seconds.
    /// @exception xtd::argument_out_of_range_exception The parameters specify a TimeSpan value less than TimeSpan::min_value or greater than TimeSpan::max_value.
    /// @remarks The specified days, hours, minutes, and seconds are converted to ticks, and that value initializes this instance.
    time_span(int32 days, int32 hours, int32 minutes, int32 seconds);
    /// @brief Initializes a new instance of the TimeSpan structure to a specified number of days, hours, minutes, seconds, and millisonds.
    /// @param days Number of days.
    /// @param hours Number of hours.
    /// @param minutes Number of minutes.
    /// @param seconds Number of seconds.
    /// @param milliseconds Number of milliseconds.
    /// @exception xtd::argument_out_of_range_exception The parameters specify a TimeSpan value less than TimeSpan::min_value or greater than TimeSpan::max_value.
    /// @remarks The specified days, hours, minutes, seconds, and millisonds are converted to ticks, and that value initializes this instance.
    time_span(int32 days, int32 hours, int32 minutes, int32 seconds, int32 milliseconds);
    /// @brief Initializes a new instance of the TimeSpan structure to a specified number of days, hours, minutes, seconds, millisonds, and microseconds.
    /// @param days Number of days.
    /// @param hours Number of hours.
    /// @param minutes Number of minutes.
    /// @param seconds Number of seconds.
    /// @param milliseconds Number of milliseconds.
    /// @param microseconds Number of microseconds.
    /// @exception xtd::argument_out_of_range_exception The parameters specify a TimeSpan value less than TimeSpan::min_value or greater than TimeSpan::max_value.
    /// @remarks The specified days, hours, minutes, seconds, millisonds and microseconds are converted to ticks, and that value initializes this instance.
    time_span(int32 days, int32 hours, int32 minutes, int32 seconds, int32 milliseconds, int32 microseconds);
    /// @}

    /// @cond
    time_span();
    time_span(const time_span&) = default;
    time_span(time_span&&) = default;
    time_span(uint32 hours, uint32 minutes, uint32 seconds);
    time_span(uint32 days, uint32 hours, uint32 minutes, uint32 seconds);
    time_span(uint32 days, uint32 hours, uint32 minutes, uint32 seconds, uint32 milliseconds);
    time_span(uint32 days, uint32 hours, uint32 minutes, uint32 seconds, uint32 milliseconds, uint32 microseconds);

    time_span& operator =(const time_span&) = default;
    time_span& operator+=(const time_span& value);
    time_span& operator-=(const time_span& value);
    time_span operator+(const time_span& value);
    time_span operator-(const time_span& value);
    time_span& operator++();
    time_span operator++(int);
    time_span& operator--();
    time_span operator--(int);
/// @endcond
    
    /// @name Properties
    
    /// @{
    /// @brief Gets the days component of the time interval represented by the current TimeSpan structure.
    /// @return The day component of this instance. The return value can be positive or negative.
    int32 days() const noexcept;
    
    /// @brief Gets the hours component of the time interval represented by the current TimeSpan structure.
    /// @return The hour component of the current TimeSpan structure. The return value ranges from -23 through 23.
    int32 hours() const noexcept;
    
    int32 microseconds() const noexcept;
    
    int32 milliseconds() const noexcept;
   
    int32 minutes() const noexcept;
    
    int32 seconds() const noexcept;

    xtd::ticks ticks() const noexcept;

    std::chrono::days total_days() const noexcept;
    
    std::chrono::hours total_hours() const noexcept;
    
    std::chrono::microseconds total_microseconds() const noexcept;
    
    std::chrono::milliseconds total_milliseconds() const noexcept;
    
    std::chrono::minutes total_minutes() const noexcept;
    
    std::chrono::seconds total_seconds() const noexcept;

    /// @}

    /// @name Methods
    
    /// @{
    int32 compare_to(const time_span& value) const noexcept override;
    bool equals(const time_span& value) const noexcept override;
    xtd::ustring to_string() const noexcept override;
    ustring to_string(const ustring& format) const;
    /// @}

  private:
    ustring make_string_from_duration(bool constant) const;
    int64 value_ = 0;
  };
  /// @}

  template<>
  inline std::string to_string(const time_span& value, const std::string& fmt, const std::locale& loc) {return value.to_string(fmt);}
}

