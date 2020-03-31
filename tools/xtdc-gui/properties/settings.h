#pragma region xtd generated code
// This code was generated by CMake script.
//
// Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.

#pragma once

#include <xtd/environment.h>
#include <xtd/forms/component.h>
#include <xtd/forms/settings.h>
#include <string>

namespace xtdc_gui::properties {
  class settings : public xtd::forms::component {
  public:
    settings() : ::xtdc_gui::properties::settings(true) {}
    
    static ::xtdc_gui::properties::settings& default_settings() {
      static ::xtdc_gui::properties::settings default_settings;
      return default_settings;
    }
    
    bool auto_close() const {return auto_close_;}
    void auto_close(bool value) {auto_close_ = value;}
    
    std::string open_propject_folder() const {return open_propject_folder_;}
    void open_propject_folder(std::string value) {open_propject_folder_ = value;}
    
    void reload() {
      open_propject_folder_ = settings_.read("auto_close", auto_close_);
      open_propject_folder_ = settings_.read("open_propject_folder", open_propject_folder_);
    }
    
    void reset() {
      settings_.reset();
      *this = settings(false);
      reload();
    }
    
    void save() {
      settings_.write("auto_close", auto_close_);
      settings_.write("open_propject_folder", open_propject_folder_);
      settings_.save();
    }
    
  private:
    settings(bool load) {if (load) reload();}
    xtd::forms::settings settings_;
    bool auto_close_ {false};
    std::string open_propject_folder_ {xtd::environment::get_folder_path(xtd::environment::special_folder::home)};
  };
}

#pragma endregion
