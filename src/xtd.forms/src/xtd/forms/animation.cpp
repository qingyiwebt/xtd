#include "../../../include/xtd/forms/animation.h"
#include <xtd/math>

using namespace std;
using namespace xtd;
using namespace xtd::diagnostics;
using namespace xtd::forms;

struct animation::data {
  uint32 frame_counter = 0;
  uint32 frames_per_second = 10;
  xtd::diagnostics::stopwatch stopwatch;
  xtd::forms::timer frames_timer;
};

animation::animation() : data_(std::make_shared<data>()) {
  double_buffered(true);
  set_can_focus(false);
  set_style(control_styles::resize_redraw, true);
  data_->frames_timer.tick += {*this, &animation::on_frames_timer_tick};
}

drawing::size animation::default_size() const noexcept {
  return {200, 100};
}

time_span animation::elapsed() const noexcept {
  return data_->stopwatch.elapsed();
}

int64 animation::elapsed_milliseconds() const noexcept {
  return data_->stopwatch.elapsed_milliseconds();
}

int64 animation::elapsed_nanoseconds() const noexcept {
  return data_->stopwatch.elapsed_nanoseconds();
}

int64 animation::elapsed_ticks() const noexcept {
  return data_->stopwatch.elapsed_ticks();
}

uint32 animation::frame_counter() const noexcept {
  return data_->frame_counter;
}

uint32 animation::frames_per_second() const noexcept {
  return data_->frames_per_second;
}

animation& animation::frames_per_second(uint32 value) {
  if (data_->frames_per_second == value) return *this;
  data_->frames_per_second = value;
  if (!data_->frames_per_second) data_->frames_timer.interval_milliseconds(std::numeric_limits<uint32>::max());
  else data_->frames_timer.interval_milliseconds(static_cast<uint32>(xtd::math::ceiling(1000.0 / data_->frames_per_second)));
  return *this;
}

bool animation::running() const noexcept {
  return data_->frames_timer.enabled();
}

animation& animation::running(bool value) {
  if (value) data_->frames_timer.enabled(data_->frames_per_second);
  else data_->frames_timer.enabled(false);
  return *this;
}

animation animation::create(uint32 frames_per_second, const drawing::point& location, const drawing::size& size, const xtd::ustring& name) {
  auto result = animation {};
  result.frames_per_second(frames_per_second);
  if (location != drawing::point {-1, -1}) result.location(location);
  if (size != drawing::size {-1, -1}) result.size(size);
  result.name(name);
  return result;
}

animation animation::create(const control& parent, uint32 frames_per_second, const drawing::point& location, const drawing::size& size, const xtd::ustring& name) {
  auto result = animation {};
  result.parent(parent);
  result.frames_per_second(frames_per_second);
  if (location != drawing::point {-1, -1}) result.location(location);
  if (size != drawing::size {-1, -1}) result.size(size);
  result.name(name);
  return result;
}

void animation::start() {
  running(true);
}

void animation::stop() {
  running(false);
}

void animation::on_updated(const animation_updated_event_args& e) {
  updated(*this, e);
}

void animation::on_frames_timer_tick(object& timer, const event_args& e) {
  ++data_->frame_counter;
  on_updated(animation_updated_event_args(data_->frame_counter, std::chrono::nanoseconds {data_->stopwatch.elapsed_nanoseconds()}));
  invalidate();
  data_->stopwatch = stopwatch::start_new();
}
