#include "../../../include/xtd/forms/button.h"
#include "../../../include/xtd/forms/button_renderrer.h"
#include "../../../include/xtd/forms/form.h"
#include <xtd/drawing/pen.h>
#include <xtd/drawing/solid_brush.h>
#include <xtd/drawing/string_format.h>
#include <xtd/drawing/system_brushes.h>
#include <xtd/drawing/system_pens.h>
#include <xtd/forms/native/button.h>
#include <xtd/forms/native/button_styles.h>
#include <xtd/forms/native/control.h>
#include <xtd/forms/window_messages.h>

using namespace xtd;
using namespace xtd::forms;

namespace {
  text_format_flags to_text_format_flags(content_alignment text_align) {
    text_format_flags flags = text_format_flags::default_format;
    
    return flags;
  }
}

button& button::auto_size_mode(forms::auto_size_mode value) {
  this->set_auto_size_mode(value);
  return *this;
}

control& button::dialog_result(forms::dialog_result dialog_result) {
  if (this->dialog_result_ != dialog_result)
    this->dialog_result_ = dialog_result;
  return *this;
}

button_base& button::image(const drawing::image& value) {
  if (this->image_ != value)
    native::button::image(handle(), value);
  return button_base::image(value);
}

void button::notify_default(bool value) {
  native::button::default_button(handle(), value);
}

void button::perform_click() {
  this->on_click(event_args::empty);
}

forms::create_params button::create_params() const {
  forms::create_params create_params = this->button_base::create_params();
  
  create_params.class_name("button");
  
  create_params.style(create_params.style() | BS_PUSHBUTTON);
  
  return create_params;
}

void button::on_click(const event_args& e) {
  if (enabled()) button_base::on_click(e);
  if (this->dialog_result_ != forms::dialog_result::none &&  this->top_level_control().has_value() && static_cast<form&>(this->top_level_control().value().get()).modal()) {
    static_cast<form&>(this->top_level_control().value().get()).dialog_result(this->dialog_result());
    static_cast<form&>(this->top_level_control().value().get()).close();
  }
}

void button::on_handle_created(const event_args& e) {
  button_base::on_handle_created(e);
  if (image_ != drawing::image::empty || (image_list_.images().size() && image_index_ > -1)) {
    native::button::image(handle(), image_ != drawing::image::empty ? image_ : image_list_.images()[image_index_]);
    native::button::image_align(handle(), static_cast<uint32_t>(image_align_));
    if (image_align_ != content_alignment::middle_center) native::control::text(handle(), text_);
    native::control::location(handle(), location_);
    native::control::size(handle(), size_);
  }
}

void button::on_paint(paint_event_args& e) {
  if (flat_style_ == xtd::forms::flat_style::system)
    control::on_paint(e);
  else {
    xtd::drawing::rectangle image_bounds = {(width() - image_.width()) / 2, (height() - image_.height()) / 2, image_.width(), image_.height()};
    auto image_margin = 4;
    switch (image_align_) {
      case content_alignment::top_left: image_bounds = {image_margin, image_margin, image_.width(), image_.height()}; break;
      case content_alignment::top_center: image_bounds = {(width() - image_.width()) / 2, image_margin, image_.width(), image_.height()}; break;
      case content_alignment::top_right: image_bounds = {width() - image_.width() - image_margin, image_margin, image_.width(), image_.height()}; break;
      case content_alignment::middle_left: image_bounds = {image_margin, (height() - image_.height()) / 2, image_.width(), image_.height()}; break;
      case content_alignment::middle_center: image_bounds = {(width() - image_.width()) / 2, (height() - image_.height()) / 2, image_.width(), image_.height()}; break;
      case content_alignment::middle_right: image_bounds = {width() - image_.width() - image_margin, (height() - image_.height()) / 2, image_.width(), image_.height()}; break;
      case content_alignment::bottom_left: image_bounds = {image_margin, height() - image_.height() - image_margin, image_.width(), image_.height()}; break;
      case content_alignment::bottom_center: image_bounds = {(width() - image_.width()) / 2, height() - image_.height() - image_margin, image_.width(), image_.height()}; break;
      case content_alignment::bottom_right: image_bounds = {width() - image_.width() - image_margin, height() - image_.height() - image_margin, image_.width(), image_.height()}; break;
      default: break;
    }

    button_renderrer::draw_button(e.graphics(), e.clip_rectangle(), text(), font(), to_text_format_flags(text_align_), image_, image_bounds, false, state_, back_color(), fore_color());
    /*
    auto border_color = xtd::drawing::system_colors::active_border();
    auto button_color = back_color();
    auto text_color = fore_color();
    auto border_thickness = 1;
    if (state_ == xtd::forms::visual_styles::push_button_state::hot) {
      border_color = xtd::drawing::system_colors::highlight();
      button_color = xtd::drawing::color::lighter(back_color());
      text_color = xtd::drawing::system_colors::highlight_text();
    } else if (state_ == xtd::forms::visual_styles::push_button_state::pressed) {
      border_color = xtd::drawing::system_colors::highlight();
      button_color = xtd::drawing::color::lighter(xtd::drawing::color::lighter(back_color()));
      text_color = xtd::drawing::system_colors::highlight_text();
    } else if (state_ == xtd::forms::visual_styles::push_button_state::default_state) {
      border_color = xtd::drawing::system_colors::active_border();
      button_color = back_color();
      text_color = fore_color();
      border_thickness = 2;
    }
    
    auto button_rectangle = xtd::drawing::rectangle(client_rectangle().x() + 1, client_rectangle().y() + 1, client_rectangle().width() - 2, client_rectangle().height() - 2);
    e.graphics().fill_rectangle(xtd::drawing::solid_brush(button_color), button_rectangle);
    e.graphics().draw_rectangle(xtd::drawing::pen(border_color, border_thickness), button_rectangle);
    
    xtd::drawing::string_format string_format;
    switch (text_align_) {
      case content_alignment::top_left: string_format.line_alignment(xtd::drawing::string_alignment::near); string_format.alignment(xtd::drawing::string_alignment::near); break;
      case content_alignment::top_center: string_format.line_alignment(xtd::drawing::string_alignment::near); string_format.alignment(xtd::drawing::string_alignment::center); break;
      case content_alignment::top_right: string_format.line_alignment(xtd::drawing::string_alignment::near); string_format.alignment(xtd::drawing::string_alignment::far); break;
      case content_alignment::middle_left: string_format.line_alignment(xtd::drawing::string_alignment::center); string_format.alignment(xtd::drawing::string_alignment::near); break;
      case content_alignment::middle_center: string_format.line_alignment(xtd::drawing::string_alignment::center); string_format.alignment(xtd::drawing::string_alignment::center); break;
      case content_alignment::middle_right: string_format.line_alignment(xtd::drawing::string_alignment::center); string_format.alignment(xtd::drawing::string_alignment::far); break;
      case content_alignment::bottom_left: string_format.line_alignment(xtd::drawing::string_alignment::far); string_format.alignment(xtd::drawing::string_alignment::near); break;
      case content_alignment::bottom_center: string_format.line_alignment(xtd::drawing::string_alignment::far); string_format.alignment(xtd::drawing::string_alignment::center); break;
      case content_alignment::bottom_right: string_format.line_alignment(xtd::drawing::string_alignment::far); string_format.alignment(xtd::drawing::string_alignment::far); break;
      default: break;
    }
    e.graphics().draw_string(text_, font(), xtd::drawing::solid_brush(text_color), xtd::drawing::rectangle_f(0, 0, client_size().width(), client_size().height()), string_format);
     */
  }
}

/*
void button::wnd_proc(message &message) {
  switch (message.msg()) {
    case WM_REFLECT + WM_COMMAND: wm_click(message); break;
    case WM_LBUTTONUP:
    case WM_MBUTTONUP:
    case WM_RBUTTONUP:
    case WM_XBUTTONUP: this->wm_mouse_up(message); break;
    default: this->control::wnd_proc(message);
  }
}

void button::wm_click(message& message) {
  this->def_wnd_proc(message);
  this->on_click(event_args::empty);
}

void button::wm_mouse_up(message& message) {
  this->def_wnd_proc(message);
  mouse_event_args e = mouse_event_args::create(message);
  this->on_mouse_click(e);
  this->on_mouse_up(e);
}
 */

drawing::size button::measure_control() const {
  drawing::size size = button_base::measure_control();
  if (size.height() < default_size().height()) size.height(default_size().height());
  return size;
}
