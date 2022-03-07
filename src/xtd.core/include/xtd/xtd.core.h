/// @file
/// @brief Contains xtd.core library headers.
/// @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
#pragma once

#include "abstract.h"
#include "action.h"
#include "any.h"
#include "argument_exception.h"
#include "argument_null_exception.h"
#include "argument_out_of_range_exception.h"
#include "arithmetic_exception.h"
#include "as.h"
#include "async_callback.h"
#include "attribute.h"
#include "background_color.h"
#include "beep.h"
#include "bit_converter.h"
#include "block_scope.h"
#include "box.h"
#include "build_type.h"
#include "cdebug.h"
#include "cnull.h"
#include "compiler.h"
#include "compiler_id.h"
#include "console.h"
#include "console_cancel_event_args.h"
#include "console_cancel_event_handler.h"
#include "console_color.h"
#include "console_key.h"
#include "console_key_info.h"
#include "console_modifiers.h"
#include "console_special_key.h"
#include "convert_string.h"
#include "cpp_language.h"
#include "ctrace.h"
#include "date_time.h"
#include "date_time_kind.h"
#include "day_of_week.h"
#include "debugstreambuf.h"
#include "delegate.h"
#include "divided_by_zero_exception.h"
#include "domain_exception.h"
#include "environment.h"
#include "environment_variable_target.h"
#include "event.h"
#include "event_args.h"
#include "event_handler.h"
#include "foreground_color.h"
#include "format_exception.h"
#include "func.h"
#include "guid.h"
#include "iasync_result.h"
#include "icomparable.h"
#include "iequatable.h"
#include "index_out_of_range_exception.h"
#include "interface.h"
#include "invalid_cast_exception.h"
#include "invalid_operation_exception.h"
#include "invalid_program_exception.h"
#include "is.h"
#include "language_id.h"
#include "length_exception.h"
#include "literals.h"
#include "math.h"
#include "nameof.h"
#include "not_finite_number_exception.h"
#include "not_implemented_exception.h"
#include "not_supported_exception.h"
#include "null_pointer_exception.h"
#include "number_styles.h"
#include "object.h"
#include "object_closed_exception.h"
#include "operating_system.h"
#include "operation_canceled_exception.h"
#include "overflow_exception.h"
#include "overload.h"
#include "parse.h"
#include "platform_id.h"
#include "platform_not_supported_exception.h"
#include "predicate.h"
#include "processor.h"
#include "random.h"
#include "reset_color.h"
#include "startup.h"
#include "static.h"
#include "string_comparison.h"
#include "string_split_options.h"
#include "system_exception.h"
#include "tick.h"
#include "ticks.h"
#include "time_out_exception.h"
#include "time_zone_info.h"
#include "time_zone_not_found_exception.h"
#include "to_string.h"
#include "tracestreambuf.h"
#include "translator.h"
#include "typeof.h"
#include "types.h"
#include "unauthorized_access_exception.h"
#include "underflow_exception.h"
#include "unused.h"
#include "uri.h"
#include "using.h"
#include "ustring.h"
#include "va_args_comma.h"
#include "version.h"
#include "xml_syntax_exception.h"
#include "collections/any_pair.h"
#include "collections/key_not_found_exception.h"
#include "collections/vector_list.h"
#include "collections/specialized/string_map.h"
#include "collections/specialized/string_pair.h"
#include "collections/specialized/string_vector.h"
#include "diagnostics/boolean_switch.h"
#include "diagnostics/console_trace_listener.h"
#include "diagnostics/debug.h"
#include "diagnostics/debugger.h"
#include "diagnostics/default_trace_listener.h"
#include "diagnostics/event_type_filter.h"
#include "diagnostics/ostream_trace_listener.h"
#include "diagnostics/process.h"
#include "diagnostics/process_priority_class.h"
#include "diagnostics/process_start_info.h"
#include "diagnostics/process_window_style.h"
#include "diagnostics/source_filter.h"
#include "diagnostics/source_levels.h"
#include "diagnostics/source_switch.h"
#include "diagnostics/stack_frame.h"
#include "diagnostics/stack_trace.h"
#include "diagnostics/stopwatch.h"
#include "diagnostics/switch_base.h"
#include "diagnostics/trace.h"
#include "diagnostics/trace_event_cache.h"
#include "diagnostics/trace_event_type.h"
#include "diagnostics/trace_filter.h"
#include "diagnostics/trace_level.h"
#include "diagnostics/trace_listener.h"
#include "diagnostics/trace_listener_collection.h"
#include "diagnostics/trace_options.h"
#include "diagnostics/trace_source.h"
#include "diagnostics/trace_switch.h"
#include "io/binary_reader.h"
#include "io/binary_writer.h"
#include "io/directory.h"
#include "io/directory_info.h"
#include "io/directory_not_found_exception.h"
#include "io/drive_info.h"
#include "io/drive_not_found_exception.h"
#include "io/end_of_stream_exception.h"
#include "io/file.h"
#include "io/file_attributes.h"
#include "io/file_format_exception.h"
#include "io/file_info.h"
#include "io/file_load_exception.h"
#include "io/file_not_found_exception.h"
#include "io/file_system_info.h"
#include "io/io_exception.h"
#include "io/path.h"
#include "io/path_too_long_exception.h"
#include "io/stream_reader.h"
#include "io/stream_writer.h"
#include "io/string_reader.h"
#include "io/string_writer.h"
#include "io/text_reader.h"
#include "io/text_writer.h"
#include "media/system_sound.h"
#include "media/system_sounds.h"
#include "net/cookie_exception.h"
#include "net/dns.h"
#include "net/dns_end_point.h"
#include "net/end_point.h"
#include "net/ip_address.h"
#include "net/ip_end_point.h"
#include "net/ip_host_entry.h"
#include "net/network_credential.h"
#include "net/protocol_violation_exception.h"
#include "net/socket_address.h"
#include "net/web_exception.h"
#include "net/sockets/address_family.h"
#include "net/sockets/io_control_code.h"
#include "net/sockets/ip_packet_information.h"
#include "net/sockets/ip_protection_level.h"
#include "net/sockets/ip_v6_multicast_option.h"
#include "net/sockets/linger_option.h"
#include "net/sockets/multicast_option.h"
#include "net/sockets/network_stream.h"
#include "net/sockets/protocol_family.h"
#include "net/sockets/protocol_type.h"
#include "net/sockets/select_mode.h"
#include "net/sockets/socket.h"
#include "net/sockets/socket_async_event_args.h"
#include "net/sockets/socket_async_operation.h"
#include "net/sockets/socket_error.h"
#include "net/sockets/socket_exception.h"
#include "net/sockets/socket_flags.h"
#include "net/sockets/socket_information.h"
#include "net/sockets/socket_information_options.h"
#include "net/sockets/socket_option_level.h"
#include "net/sockets/socket_option_name.h"
#include "net/sockets/socket_shutdown.h"
#include "net/sockets/socket_type.h"
#include "net/sockets/tcp_client.h"
#include "net/sockets/tcp_listener.h"
#include "net/sockets/transmit_file_options.h"
#include "net/sockets/udp_client.h"
#include "reflection/assembly.h"
#include "reflection/assembly_company_attribute.h"
#include "reflection/assembly_configuration_attribute.h"
#include "reflection/assembly_culture_attribute.h"
#include "reflection/assembly_description_attribute.h"
#include "reflection/assembly_file_version_attribute.h"
#include "reflection/assembly_guid_attribute.h"
#include "reflection/assembly_identifier_attribute.h"
#include "reflection/assembly_info.h"
#include "reflection/assembly_product_attribute.h"
#include "reflection/assembly_title_attribute.h"
#include "reflection/assembly_trademark_attribute.h"
#include "reflection/assembly_version_attribute.h"
#include "security/secure_string.h"
#include "security/security_exception.h"
#include "threading/interlocked.h"
#include "web/css/css_reader.h"
#include "web/css/css_writer.h"
#include "web/css/property.h"
#include "web/css/property_map.h"
#include "web/css/selector.h"
#include "web/css/selector_map.h"
