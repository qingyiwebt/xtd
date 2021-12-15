#include <xtd/as.h>
#include "../../../include/xtd/forms/control_paint.h"
#include "../../../include/xtd/forms/control.h"
#include "../../../include/xtd/forms/screen.h"

using namespace xtd;
using namespace xtd::drawing;
using namespace xtd::forms;

color control_paint::average(const color& color1, const color& color2, double weight, bool average_alpha) {
  return color::average(color1, color2, weight, average_alpha);
}

color control_paint::average(const color& color1, const color& color2, double weight) {
  return average(color1, color2, weight, false);
}

color control_paint::dark(const xtd::drawing::color& base_color) {
  return dark(base_color, 1.0/3);
}

color control_paint::dark(const color& base_color, double perc_of_dark_dark) {
  return color::dark(base_color, perc_of_dark_dark);
}

color control_paint::dark_dark(const color& base_color) {
  return dark(base_color, 1.0);
}

void control_paint::draw_button(const forms::control& control, drawing::graphics& graphics, const drawing::rectangle& rectangle, button_state state) {
  draw_button(control, graphics, rectangle.x(), rectangle.y(), rectangle.width(), rectangle.height(), state);
}

void control_paint::draw_button(const forms::control& control, drawing::graphics& graphics, int32_t x, int32_t y, int32_t width, int32_t height, button_state state) {
  
}

void control_paint::draw_border(const forms::control& control, drawing::graphics& graphics, border_style border, const drawing::color& color, const rectangle& rect) {
  draw_border(control, graphics, border, color, rect, false);
}

void control_paint::draw_border(const forms::control& control, drawing::graphics& graphics, border_style border, const drawing::color& color, const rectangle& rect, bool light) {
  if (border == border_style::none) return;
  
  auto percent_of_color = 2.0/3;
  auto dark_color = dark(color, percent_of_color);
  auto light_color = color;
  auto rect_border = rect;
  
  if (!screen::from_control(control).high_resolution())
    rect_border = rectangle::inflate(rect_border,  drawing::size {-1, -1});
  
  if (border == border_style::fixed_single) {
    graphics.draw_rectangle(pen(light ? light_color : dark_color, 1), rect_border);
  } else if (border == border_style::fixed_3d) {
    // top
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.right(), rect_border.top()});
    // left
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.left(), rect_border.bottom()});
    // bottom
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.bottom()}, point {rect_border.right(), rect_border.bottom()});
    // right
    graphics.draw_line(pen(light_color, 1), point {rect_border.right(), rect_border.top()}, point {rect_border.right(), rect_border.bottom()});
  } else if (border == border_style::thin_raised) {
    // top
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.right(), rect_border.top()});
    // left
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.left(), rect_border.bottom()});
    // bottom
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.bottom()}, point {rect_border.right(), rect_border.bottom()});
    // right
    graphics.draw_line(pen(dark_color, 1), point {rect_border.right(), rect_border.top()}, point {rect_border.right(), rect_border.bottom()});
  } else if (border == border_style::bevel_raised) {
    // top
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.right(), rect_border.top()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.top() + 1});
    // left
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.left(), rect_border.bottom()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.left() + 1, rect_border.bottom() - 1});
    // bottom
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.bottom()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left() + 1, rect_border.bottom() - 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
    // right
    graphics.draw_line(pen(dark_color, 1), point {rect_border.right(), rect_border.top()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.right() - 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
  } else if (border == border_style::bevel_sunken) {
    // top
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.right(), rect_border.top()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.top() + 1});
    // left
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.left(), rect_border.bottom()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.left() + 1, rect_border.bottom() - 1});
    // bottom
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.bottom()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.left() + 1, rect_border.bottom() - 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
    // right
    graphics.draw_line(pen(light_color, 1), point {rect_border.right(), rect_border.top()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.right() - 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
  } else if (border == border_style::etched) {
    // top
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.right(), rect_border.top()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.top() + 1});
    // left
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.left(), rect_border.bottom()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.left() + 1, rect_border.bottom() - 1});
    // bottom
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.bottom()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left() + 1, rect_border.bottom() - 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
    // right
    graphics.draw_line(pen(light_color, 1), point {rect_border.right(), rect_border.top()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.right() - 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
  } else if (border == border_style::bump) {
    // top
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.right(), rect_border.top()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.top() + 1});
    // left
    graphics.draw_line(pen(light_color, 1), point {rect_border.left(), rect_border.top()}, point {rect_border.left(), rect_border.bottom()});
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left() + 1, rect_border.top() + 1}, point {rect_border.left() + 1, rect_border.bottom() - 1});
    // bottom
    graphics.draw_line(pen(dark_color, 1), point {rect_border.left(), rect_border.bottom()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.left() + 1, rect_border.bottom() - 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
    // right
    graphics.draw_line(pen(dark_color, 1), point {rect_border.right(), rect_border.top()}, point {rect_border.right(), rect_border.bottom()});
    graphics.draw_line(pen(light_color, 1), point {rect_border.right() - 1, rect_border.top() + 1}, point {rect_border.right() - 1, rect_border.bottom() - 1});
  } else if (border == border_style::themed) {
    graphics.draw_rectangle(pen(dark_color, 1), rect_border);
    graphics.draw_rectangle(pen(light_color, 1), rectangle::inflate(rectangle::offset(rect_border, {1, 1}), {-2, -2}));
  } if (border == border_style::rounded_single) {
    graphics.draw_rounded_rectangle(pen(light ? light_color : dark_color, 1), rect_border, 4);
  } else if (border == border_style::dot_single) {
    pen dot_pen(light ? light_color : dark_color, 1);
    dot_pen.dash_style(dash_style::dot);
    graphics.draw_rectangle(dot_pen, rect_border);
  } else if (border == border_style::dash_single) {
    pen dash_pen(light ? light_color : dark_color, 1);
    dash_pen.dash_style(dash_style::dash);
    graphics.draw_rectangle(dash_pen, rect_border);
  } else if (border == border_style::dash_dot_single) {
    pen dash_pen(light ? light_color : dark_color, 1);
    dash_pen.dash_style(dash_style::dash_dot);
    graphics.draw_rectangle(dash_pen, rect_border);
  } else if (border == border_style::dash_dot_dot_single) {
    pen dash_pen(light ? light_color : dark_color, 1);
    dash_pen.dash_style(dash_style::dash_dot_dot);
    graphics.draw_rectangle(dash_pen, rect_border);
  } else if (border == border_style::fixed_double) {
    graphics.draw_rectangle(pen(light ? light_color : dark_color, 1), rect_border);
    graphics.draw_rectangle(pen(light ? light_color : dark_color, 1), rectangle::inflate(rectangle::offset(rect_border, {2, 2}), {-4, -4}));
  }
}

void control_paint::draw_border_from_back_color(const forms::control& control, drawing::graphics& graphics, border_style border, const color& back_color, const rectangle& rect) {
  auto percent_of_color = back_color.is_dark() ? 1.0/3 : 2.0/3;
  draw_border(control, graphics, border, light(back_color, percent_of_color), rect, back_color.is_dark());
}

void control_paint::draw_image(xtd::drawing::graphics& graphics, const xtd::drawing::image& image, const xtd::drawing::rectangle& rectangle, xtd::forms::image_layout image_layout) {draw_image(graphics, image, rectangle.x(), rectangle.y(), rectangle.width(), rectangle.height(), image_layout);}


void control_paint::draw_image(xtd::drawing::graphics& graphics, const xtd::drawing::image& image, int32_t x, int32_t y, int32_t width, int32_t height, xtd::forms::image_layout image_layout) {
  if (image_layout == xtd::forms::image_layout::none) {
    graphics.draw_image(image, x, y);
  } else if (image_layout == xtd::forms::image_layout::tile) {
    for (int32_t offset_y = 0; offset_y < height; offset_y += image.size().height())
      for (int32_t offset_x = 0; offset_x < width; offset_x += image.size().width())
        graphics.draw_image(image, x + offset_x, y + offset_y);
  } else if (image_layout == xtd::forms::image_layout::center) {
    graphics.draw_image(image, x + (width - image.width()) / 2, y + (height - image.height()) / 2);
  } else if (image_layout == xtd::forms::image_layout::stretch) {
    graphics.draw_image(image, x, y, width, height);
  } else if (image_layout == xtd::forms::image_layout::zoom) {
    auto target_ratio = as<float>(width) / height;
    auto image_ratio = as<float>(image.width()) / image.height();
    auto ratio = target_ratio > image_ratio ? as<float>(height) / image.height() : as<float>(width) / image.width();
    auto image_rect = xtd::drawing::rectangle((width - image.width() * ratio) / 2, (height - image.height() * ratio) / 2, image.width() * ratio, image.height() * ratio);
    graphics.draw_image(image, image_rect);
  }
}

void control_paint::draw_image_disabled(xtd::drawing::graphics& graphics, const xtd::drawing::image& image, int32_t x, int32_t y, float brightness) {
  graphics.draw_image_disabled(image, x, y, brightness);
}

void control_paint::draw_image_disabled(xtd::drawing::graphics& graphics, const xtd::drawing::image& image, int32_t x, int32_t y, const xtd::drawing::color& background) {
  draw_image_disabled(graphics, image, x, y, background.get_brightness());
}

void control_paint::draw_image_disabled(xtd::drawing::graphics& graphics, const xtd::drawing::image& image, const point& location, float brightness) {
  draw_image_disabled(graphics, image, location.x(), location.y(), brightness);
}

void control_paint::draw_image_disabled(xtd::drawing::graphics& graphics, const xtd::drawing::image& image, const point& location, const xtd::drawing::color& background) {
  draw_image_disabled(graphics, image, location.x(), location.y(), background.get_brightness());
}

xtd::drawing::color control_paint::light(const xtd::drawing::color& base_color) {
  return light(base_color, 1.0/3);
}

xtd::drawing::color control_paint::light(const xtd::drawing::color& base_color, double perc_of_light_light) {
  return xtd::drawing::color::light(base_color, perc_of_light_light);
}

xtd::drawing::color control_paint::light_light(const xtd::drawing::color& base_color) {
  return light(base_color, 1.0);
}

xtd::drawing::string_format control_paint::string_format(xtd::forms::text_format_flags flags) {
  xtd::drawing::string_format string_format;
  string_format.line_alignment(xtd::drawing::string_alignment::center);
  string_format.alignment(xtd::drawing::string_alignment::center);
  
  if ((flags & text_format_flags::horizontal_center) == text_format_flags::horizontal_center) string_format.alignment(xtd::drawing::string_alignment::center);
  else if ((flags & text_format_flags::right) == text_format_flags::right) string_format.alignment(xtd::drawing::string_alignment::far);
  else string_format.alignment(xtd::drawing::string_alignment::near);
  
  if ((flags & text_format_flags::vertical_center) == text_format_flags::vertical_center) string_format.line_alignment(xtd::drawing::string_alignment::center);
  else if ((flags & text_format_flags::bottom) == text_format_flags::bottom) string_format.line_alignment(xtd::drawing::string_alignment::far);
  else string_format.line_alignment(xtd::drawing::string_alignment::near);
  
  if ((flags & text_format_flags::no_prefix) == text_format_flags::no_prefix) string_format.hotkey_prefix(xtd::drawing::hotkey_prefix::none);
  else if ((flags & text_format_flags::hide_prefix) == text_format_flags::hide_prefix) string_format.hotkey_prefix(xtd::drawing::hotkey_prefix::hide);
  else string_format.hotkey_prefix(xtd::drawing::hotkey_prefix::show);
  
  return string_format;
}
