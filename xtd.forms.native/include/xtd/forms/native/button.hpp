#pragma once
#include "../create_params.hpp"

namespace xtd {
  namespace forms {
    namespace native {
      class button {
      public:
        button() = delete;
        static intptr_t create(const create_params& create_params);
      };
    }
  }
}
