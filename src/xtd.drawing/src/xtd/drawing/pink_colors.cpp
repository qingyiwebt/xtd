#include "../../../include/xtd/drawing/pink_colors.h"

using namespace std;
using namespace xtd;
using namespace xtd::drawing;

color pink_colors::deep_pink() {
  return color::from_known_color(known_color::deep_pink);
}

color pink_colors::hot_pink() {
  return color::from_known_color(known_color::hot_pink);
}

color pink_colors::light_pink() {
  return color::from_known_color(known_color::light_pink);
}

color pink_colors::medium_violet_red() {
  return color::from_known_color(known_color::medium_violet_red);
}

color pink_colors::pale_violet_red() {
  return color::from_known_color(known_color::pale_violet_red);
}

color pink_colors::pink() {
  return color::from_known_color(known_color::pink);
}

const vector<color>& pink_colors::get_colors() {
  static vector colors {pink_colors::medium_violet_red(), pink_colors::deep_pink(), pink_colors::pale_violet_red(), pink_colors::hot_pink(), pink_colors::light_pink(), pink_colors::pink()};
  return colors;
}

const vector<ustring>& pink_colors::get_color_names() {
  static vector color_names {pink_colors::medium_violet_red().name(), pink_colors::deep_pink().name(), pink_colors::pale_violet_red().name(), pink_colors::hot_pink().name(), pink_colors::light_pink().name(), pink_colors::pink().name()};
  return color_names;
}
