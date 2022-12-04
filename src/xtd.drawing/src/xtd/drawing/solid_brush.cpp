#include "../../../include/xtd/drawing/solid_brush.h"
#define __XTD_DRAWING_NATIVE_LIBRARY__
#include <xtd/drawing/native/brush.h>
#undef __XTD_DRAWING_NATIVE_LIBRARY__

using namespace xtd;
using namespace xtd::drawing;

solid_brush::solid_brush() {
  color(drawing::color::black);
}

solid_brush::solid_brush(const xtd::drawing::color& color) {
  this->color(color);
}

solid_brush& solid_brush::operator =(const solid_brush& value) {
  brush::operator =(value);
  data_ = value.data_;
  return *this;
}

bool solid_brush::operator ==(const solid_brush& value) const noexcept {
  return data_->color_ == value.data_->color_;
}

bool solid_brush::operator !=(const solid_brush& value) const noexcept {
  return !operator ==(value);
}

const xtd::drawing::color& solid_brush::color() const noexcept {
  return data_->color_;
}

solid_brush& solid_brush::color(const drawing::color& value) noexcept {
  if (data_->color_ != value) {
    data_->color_ = value;
    native::brush::solid(handle(), data_->color_.a(), data_->color_.r(), data_->color_.g(), data_->color_.b());
  }
  return *this;
}

solid_brush::solid_brush(const solid_brush& value) : brush(value), data_(value.data_) {
}
