#include "../../../include/xtd/forms/button.h"
#include "../../../include/xtd/forms/button_renderer.h"
#include "../../../include/xtd/forms/form.h"
#include <xtd/drawing/pen.h>
#include <xtd/drawing/solid_brush.h>
#include <xtd/drawing/string_format.h>
#include <xtd/drawing/system_brushes.h>
#include <xtd/drawing/system_pens.h>
#define __XTD_FORMS_NATIVE_LIBRARY__
#include <xtd/forms/native/button.h>
#include <xtd/forms/native/button_styles.h>
#include <xtd/forms/native/control.h>
#undef __XTD_FORMS_NATIVE_LIBRARY__
#include <xtd/forms/window_messages.h>

using namespace xtd;
using namespace xtd::forms;

button::button() {
  set_style(control_styles::standard_click | control_styles::standard_double_click, false);
  data_->auto_repeat_timer.tick += [&] {
    data_->auto_repeat_timer.enabled(false);
    if (enabled()) {
      perform_click();
      data_->auto_repeat_timer.interval_milliseconds(data_->auto_repeat_interval);
      data_->auto_repeat_timer.enabled(data_->auto_repeat);
    }
  };
}

bool button::auto_repeat() const noexcept {
  return data_->auto_repeat;
}

button& button::auto_repeat(bool auto_repeat) {
  if (data_->auto_repeat != auto_repeat) {
    data_->auto_repeat = auto_repeat;
    if (!data_->auto_repeat) data_->auto_repeat_timer.enabled(false);
  }
  return *this;
}

int32_t button::auto_repeat_delay() const noexcept {
  return data_->auto_repeat_delay;
}

button& button::auto_repeat_delay(int32_t auto_repeat_delay) {
  data_->auto_repeat_delay = auto_repeat_delay;
  return *this;
}

int32_t button::auto_repeat_interval() const noexcept {
  return data_->auto_repeat_interval;
}

button& button::auto_repeat_interval(int32_t auto_repeat_interval) {
  data_->auto_repeat_interval = auto_repeat_interval;
  return *this;
}

forms::auto_size_mode button::auto_size_mode() const noexcept {
  return get_auto_size_mode();
}

button& button::auto_size_mode(forms::auto_size_mode value) {
  set_auto_size_mode(value);
  return *this;
}

bool button::default_button() const noexcept {
  return data_->default_button;
}

forms::dialog_result button::dialog_result() const noexcept {
  return data_->dialog_result;
}

control& button::dialog_result(forms::dialog_result dialog_result) {
  data_->dialog_result = dialog_result;
  return *this;
}

void button::notify_default(bool value) {
  data_->default_button = value;
  if (enabled()) data_->state = data_->default_button ? xtd::forms::visual_styles::push_button_state::default_state : xtd::forms::visual_styles::push_button_state::normal;
  if (flat_style() != xtd::forms::flat_style::system) invalidate();
  else {
    if (is_handle_created() && value && flat_style() == xtd::forms::flat_style::system) native::button::set_default_button(handle());
    else post_recreate_handle();
  }
}

void button::perform_click() {
  on_click(event_args::empty);
}

forms::create_params button::create_params() const noexcept {
  forms::create_params create_params = button_base::create_params();
  
  create_params.class_name("button");
  
  create_params.style(create_params.style() | BS_PUSHBUTTON | BS_MULTILINE | BS_CENTER | BS_VCENTER);
  
  return create_params;
}

void button::on_click(const event_args& e) {
  if (enabled()) button_base::on_click(e);
  if (data_->dialog_result != forms::dialog_result::none &&  top_level_control().has_value() && static_cast<form&>(top_level_control().value().get()).modal()) {
    static_cast<form&>(top_level_control().value().get()).dialog_result(dialog_result());
    static_cast<form&>(top_level_control().value().get()).close();
  }
}

void button::on_image_changed(const xtd::event_args& e) {
  button_base::on_image_changed(e);
}

void button::on_handle_created(const event_args& e) {
  button_base::on_handle_created(e);
  if (flat_style() == xtd::forms::flat_style::system) {
    if (image() != drawing::image::empty || (image_list().images().size() && image_index() > -1)) {
      if (image_align() != content_alignment::middle_center) native::control::text(handle(), text());
      native::control::location(handle(), location());
      native::control::size(handle(), size());
    }
    if (data_->default_button && flat_style() == xtd::forms::flat_style::system) native::button::set_default_button(handle());
  }
}

void button::on_paint(paint_event_args& e) {
  auto style = style_sheet() != style_sheets::style_sheet::empty ? style_sheet() : style_sheets::style_sheet::current_style_sheet();
  if (flat_style() == xtd::forms::flat_style::standard) button_renderer::draw_button(style, e.graphics(), e.clip_rectangle(), state(), default_button(), back_color() != default_back_color() ? std::optional<drawing::color> {back_color()} : std::nullopt, text(), text_align(), fore_color() != default_fore_color() ? std::optional<drawing::color> {fore_color()} : std::nullopt, font() != default_font() ? std::optional<drawing::font> {font()} : std::nullopt, image(), image_align());
  if (flat_style() == xtd::forms::flat_style::flat) button_renderer::draw_flat_button(style, e.graphics(), e.clip_rectangle(), state(), default_button(), back_color() != default_back_color() ? std::optional<drawing::color> {back_color()} : std::nullopt, flat_appearance(), text(), text_align(), fore_color() != default_fore_color() ? std::optional<drawing::color> {fore_color()} : std::nullopt, font() != default_font() ? std::optional<drawing::font> {font()} : std::nullopt, image(), image_align());
  if (flat_style() == xtd::forms::flat_style::popup) button_renderer::draw_popup_button(style, e.graphics(), e.clip_rectangle(), state(), default_button(), back_color() != default_back_color() ? std::optional<drawing::color> {back_color()} : std::nullopt, flat_appearance(), text(), text_align(), fore_color() != default_fore_color() ? std::optional<drawing::color> {fore_color()} : std::nullopt, font() != default_font() ? std::optional<drawing::font> {font()} : std::nullopt, image(), image_align());
  button_base::on_paint(e);
}

drawing::size button::measure_control() const noexcept {
  drawing::size size = button_base::measure_control();
  if (size.height() < default_size().height()) size.height(default_size().height());
  return size;
}
