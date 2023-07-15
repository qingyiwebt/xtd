/// @file
/// @brief Contains  xtd.forms library headers.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once

#include <xtd/xtd.drawing>
#include "forms/about_box.h"
#include "forms/about_dialog.h"
#include "forms/anchor_styles.h"
#include "forms/animation.h"
#include "forms/animation_update_event_args.h"
#include "forms/animation_update_event_handler.h"
#include "forms/appearance.h"
#include "forms/application.h"
#include "forms/application_context.h"
#include "forms/arrange_direction.h"
#include "forms/arrange_starting_position.h"
#include "forms/assert_box.h"
#include "forms/assert_dialog.h"
#include "forms/auto_size_mode.h"
#include "forms/background_worker.h"
#include "forms/battery_charge_status.h"
#include "forms/boot_mode.h"
#include "forms/border_sides.h"
#include "forms/border_style.h"
#include "forms/bounds_specified.h"
#include "forms/box_renderer.h"
#include "forms/busy_box.h"
#include "forms/busy_dialog.h"
#include "forms/button.h"
#include "forms/button_base.h"
#include "forms/button_images.h"
#include "forms/button_renderer.h"
#include "forms/button_state.h"
#include "forms/buttons.h"
#include "forms/cancel_event_args.h"
#include "forms/cancel_event_handler.h"
#include "forms/character_casing.h"
#include "forms/check_box.h"
#include "forms/check_box_renderer.h"
#include "forms/check_boxes.h"
#include "forms/check_state.h"
#include "forms/checked_list_box.h"
#include "forms/choice.h"
#include "forms/close_reason.h"
#include "forms/collapsible_panel.h"
#include "forms/color_box.h"
#include "forms/color_box_styles.h"
#include "forms/color_dialog.h"
#include "forms/color_picker.h"
#include "forms/color_picker_event_args.h"
#include "forms/color_picker_event_handler.h"
#include "forms/combo_box.h"
#include "forms/combo_box_style.h"
#include "forms/command_link_button.h"
#include "forms/command_link_buttons.h"
#include "forms/common_dialog.h"
#include "forms/component.h"
#include "forms/const_control_ref.h"
#include "forms/const_control_ref_less.h"
#include "forms/const_form_ref.h"
#include "forms/const_menu_item_ref.h"
#include "forms/const_tab_page_ref.h"
#include "forms/const_tab_page_ref_less.h"
#include "forms/container_control.h"
#include "forms/content_alignment.h"
#include "forms/context_menu.h"
#include "forms/control.h"
#include "forms/control_appearance.h"
#include "forms/control_event_args.h"
#include "forms/control_event_handler.h"
#include "forms/control_layout_style.h"
#include "forms/control_paint.h"
#include "forms/control_ref.h"
#include "forms/control_ref_less.h"
#include "forms/control_renderer.h"
#include "forms/control_styles.h"
#include "forms/control_trace_listener.h"
#include "forms/countries.h"
#include "forms/country.h"
#include "forms/create_params.h"
#include "forms/cursor.h"
#include "forms/cursors.h"
#include "forms/date_range_event_args.h"
#include "forms/date_range_event_handler.h"
#include "forms/date_time_picker.h"
#include "forms/date_time_picker_format.h"
#include "forms/day.h"
#include "forms/debug_form.h"
#include "forms/debug_message_box.h"
#include "forms/debug_message_dialog.h"
#include "forms/dialog_appearance.h"
#include "forms/dialog_closed_event_args.h"
#include "forms/dialog_closed_event_handler.h"
#include "forms/dialog_result.h"
#include "forms/do_work_event_args.h"
#include "forms/do_work_event_handler.h"
#include "forms/dock_style.h"
#include "forms/domain_up_down.h"
#include "forms/dot_matrix_display.h"
#include "forms/dot_matrix_style.h"
#include "forms/draw_item_event_args.h"
#include "forms/draw_item_event_handler.h"
#include "forms/draw_item_state.h"
#include "forms/emoticon.h"
#include "forms/emoticons.h"
#include "forms/enable_debug.h"
#include "forms/exception_box.h"
#include "forms/exception_dialog.h"
#include "forms/file_dialog.h"
#include "forms/find_box.h"
#include "forms/find_dialog.h"
#include "forms/find_event_args.h"
#include "forms/find_event_handler.h"
#include "forms/fixed_layout_panel.h"
#include "forms/flat_button_appearance.h"
#include "forms/flat_style.h"
#include "forms/flow_layout_panel.h"
#include "forms/folder_browser_box.h"
#include "forms/folder_browser_dialog.h"
#include "forms/font_box.h"
#include "forms/font_box_options.h"
#include "forms/font_dialog.h"
#include "forms/font_picker.h"
#include "forms/font_picker_event_args.h"
#include "forms/font_picker_event_handler.h"
#include "forms/form.h"
#include "forms/form_border_style.h"
#include "forms/form_button_images.h"
#include "forms/form_closed_event_args.h"
#include "forms/form_closed_event_handler.h"
#include "forms/form_closing_event_args.h"
#include "forms/form_closing_event_handler.h"
#include "forms/form_collection.h"
#include "forms/form_ref.h"
#include "forms/form_renderer.h"
#include "forms/form_start_position.h"
#include "forms/form_window_state.h"
#include "forms/fourteen_segment_display.h"
#include "forms/group_box.h"
#include "forms/h_scroll_bar.h"
#include "forms/help_event_args.h"
#include "forms/help_event_handler.h"
#include "forms/horizontal_alignment.h"
#include "forms/horizontal_control_layout_style.h"
#include "forms/horizontal_control_layout_style_collection.h"
#include "forms/horizontal_layout_panel.h"
#include "forms/ibutton_control.h"
#include "forms/icontrol_trace.h"
#include "forms/image_layout.h"
#include "forms/image_list.h"
#include "forms/image_renderer.h"
#include "forms/images.h"
#include "forms/imessage_filter.h"
#include "forms/input_box.h"
#include "forms/input_box_style.h"
#include "forms/input_dialog.h"
#include "forms/item_check_event_args.h"
#include "forms/item_check_event_handler.h"
#include "forms/iwin32_window.h"
#include "forms/key_event_args.h"
#include "forms/key_event_handler.h"
#include "forms/key_press_event_args.h"
#include "forms/key_press_event_handler.h"
#include "forms/keys.h"
#include "forms/known_themed_color.h"
#include "forms/label.h"
#include "forms/label_renderer.h"
#include "forms/lcd_label.h"
#include "forms/lcd_style.h"
#include "forms/left_right_alignment.h"
#include "forms/light_button.h"
#include "forms/light_buttons.h"
#include "forms/link.h"
#include "forms/link_area.h"
#include "forms/link_behavior.h"
#include "forms/link_label.h"
#include "forms/link_label_clicked_event_args.h"
#include "forms/link_label_clicked_event_handler.h"
#include "forms/list_box.h"
#include "forms/list_control.h"
#include "forms/loading_indicator.h"
#include "forms/loading_indicator_style.h"
#include "forms/main_menu.h"
#include "forms/menu.h"
#include "forms/menu_images.h"
#include "forms/menu_item.h"
#include "forms/menu_item_kind.h"
#include "forms/menu_item_ref.h"
#include "forms/message.h"
#include "forms/message_box.h"
#include "forms/message_box_buttons.h"
#include "forms/message_box_default_button.h"
#include "forms/message_box_icon.h"
#include "forms/message_box_options.h"
#include "forms/message_dialog.h"
#include "forms/message_dialog_buttons.h"
#include "forms/message_dialog_default_button.h"
#include "forms/message_dialog_icon.h"
#include "forms/message_dialog_options.h"
#include "forms/message_loop_callback.h"
#include "forms/message_notifier.h"
#include "forms/message_notifier_button.h"
#include "forms/month_calendar.h"
#include "forms/mouse_buttons.h"
#include "forms/mouse_event_args.h"
#include "forms/mouse_event_handler.h"
#include "forms/nine_segment_display.h"
#include "forms/notifier_style.h"
#include "forms/numeric_up_down.h"
#include "forms/open_file_box.h"
#include "forms/open_file_box_options.h"
#include "forms/open_file_dialog.h"
#include "forms/orientation.h"
#include "forms/padding.h"
#include "forms/paint_event_args.h"
#include "forms/paint_event_handler.h"
#include "forms/panel.h"
#include "forms/panel_renderer.h"
#include "forms/picture_box.h"
#include "forms/picture_box_size_mode.h"
#include "forms/popup_panel.h"
#include "forms/power_line_status.h"
#include "forms/power_state.h"
#include "forms/power_status.h"
#include "forms/progress_bar.h"
#include "forms/progress_bar_style.h"
#include "forms/progress_box.h"
#include "forms/progress_box_options.h"
#include "forms/progress_changed_event_args.h"
#include "forms/progress_changed_event_handler.h"
#include "forms/progress_dialog.h"
#include "forms/radio_button.h"
#include "forms/radio_button_renderer.h"
#include "forms/radio_buttons.h"
#include "forms/renderer.h"
#include "forms/replace_box.h"
#include "forms/replace_dialog.h"
#include "forms/replace_event_args.h"
#include "forms/replace_event_handler.h"
#include "forms/run_worker_completed_event_args.h"
#include "forms/run_worker_completed_event_handler.h"
#include "forms/save_file_box.h"
#include "forms/save_file_box_options.h"
#include "forms/save_file_dialog.h"
#include "forms/screen.h"
#include "forms/screen_orientation.h"
#include "forms/scroll_bar.h"
#include "forms/scrollable_control.h"
#include "forms/search_direction.h"
#include "forms/segment_style.h"
#include "forms/segments.h"
#include "forms/selection_mode.h"
#include "forms/selection_range.h"
#include "forms/settings.h"
#include "forms/seven_segment_display.h"
#include "forms/shadow.h"
#include "forms/shadows.h"
#include "forms/shortcut.h"
#include "forms/sixteen_segment_display.h"
#include "forms/size_type.h"
#include "forms/split_container.h"
#include "forms/splitter.h"
#include "forms/splitter_panel.h"
#include "forms/splitter_style.h"
#include "forms/status_bar.h"
#include "forms/status_bar_draw_item_event_args.h"
#include "forms/status_bar_draw_item_event_handler.h"
#include "forms/status_bar_panel.h"
#include "forms/status_bar_panel_auto_size.h"
#include "forms/status_bar_panel_border_style.h"
#include "forms/status_bar_panel_click_event_args.h"
#include "forms/status_bar_panel_click_event_handler.h"
#include "forms/status_bar_panel_renderer.h"
#include "forms/status_bar_panel_style.h"
#include "forms/status_bar_renderer.h"
#include "forms/switch_button.h"
#include "forms/switch_button_renderer.h"
#include "forms/system_information.h"
#include "forms/system_texts.h"
#include "forms/tab_alignment.h"
#include "forms/tab_control.h"
#include "forms/tab_page.h"
#include "forms/tab_page_ref.h"
#include "forms/tab_page_ref_less.h"
#include "forms/table_layout_panel.h"
#include "forms/text_box.h"
#include "forms/text_box_base.h"
#include "forms/text_format_flags.h"
#include "forms/text_renderer.h"
#include "forms/tick_style.h"
#include "forms/timer.h"
#include "forms/toggle_button.h"
#include "forms/toggle_button_renderer.h"
#include "forms/toggle_buttons.h"
#include "forms/tool_bar.h"
#include "forms/tool_bar_appearance.h"
#include "forms/tool_bar_button.h"
#include "forms/tool_bar_button_click_event_args.h"
#include "forms/tool_bar_button_click_event_handler.h"
#include "forms/tool_bar_button_ref.h"
#include "forms/tool_bar_button_renderer.h"
#include "forms/tool_bar_button_style.h"
#include "forms/tool_bar_images.h"
#include "forms/tool_bar_renderer.h"
#include "forms/tool_bar_text_align.h"
#include "forms/trace_form.h"
#include "forms/trace_form_base.h"
#include "forms/trace_message_box.h"
#include "forms/trace_message_dialog.h"
#include "forms/track_bar.h"
#include "forms/up_down_base.h"
#include "forms/up_down_button.h"
#include "forms/use_wait_cursor.h"
#include "forms/user_control.h"
#include "forms/user_control_renderer.h"
#include "forms/v_scroll_bar.h"
#include "forms/vertical_control_layout_style.h"
#include "forms/vertical_control_layout_style_collection.h"
#include "forms/vertical_layout_panel.h"
#include "xtd/forms/layout/arranged_element_collection.h"
#include "xtd/forms/layout/sorter_none.h"
#include "xtd/forms/properties/resources.h"
#include "forms/style_sheets/background_image.h"
#include "forms/style_sheets/border_color.h"
#include "forms/style_sheets/border_radius.h"
#include "forms/style_sheets/border_style.h"
#include "forms/style_sheets/border_type.h"
#include "forms/style_sheets/border_width.h"
#include "forms/style_sheets/button.h"
#include "forms/style_sheets/control.h"
#include "forms/style_sheets/form.h"
#include "forms/style_sheets/ibox_model.h"
#include "forms/style_sheets/iimage_model.h"
#include "forms/style_sheets/image_type.h"
#include "forms/style_sheets/itext_model.h"
#include "forms/style_sheets/label.h"
#include "forms/style_sheets/length.h"
#include "forms/style_sheets/length_unit.h"
#include "forms/style_sheets/lengths.h"
#include "forms/style_sheets/link_label.h"
#include "forms/style_sheets/margin.h"
#include "forms/style_sheets/outline_color.h"
#include "forms/style_sheets/outline_offset.h"
#include "forms/style_sheets/outline_radius.h"
#include "forms/style_sheets/outline_style.h"
#include "forms/style_sheets/outline_width.h"
#include "forms/style_sheets/padding.h"
#include "forms/style_sheets/panel.h"
#include "forms/style_sheets/pseudo_state.h"
#include "forms/style_sheets/shadow.h"
#include "forms/style_sheets/shadows.h"
#include "forms/style_sheets/status_bar.h"
#include "forms/style_sheets/status_bar_panel.h"
#include "forms/style_sheets/style_sheet.h"
#include "forms/style_sheets/system_colors.h"
#include "forms/style_sheets/text_decoration.h"
#include "forms/style_sheets/text_transformation.h"
#include "forms/style_sheets/theme.h"
#include "forms/style_sheets/toggle_button.h"
#include "forms/style_sheets/tool_bar.h"
#include "forms/style_sheets/tool_bar_button.h"
#include "forms/style_sheets/user_control.h"
#include "forms/style_sheets/white_space.h"
#include "forms/visual_styles/check_box_state.h"
#include "forms/visual_styles/control_state.h"
#include "forms/visual_styles/form_state.h"
#include "forms/visual_styles/label_state.h"
#include "forms/visual_styles/link_label_state.h"
#include "forms/visual_styles/panel_state.h"
#include "forms/visual_styles/push_button_state.h"
#include "forms/visual_styles/radio_button_state.h"
#include "forms/visual_styles/toggle_button_state.h"
#include "forms/visual_styles/tool_bar_state.h"
#include "forms/visual_styles/user_control_state.h"
