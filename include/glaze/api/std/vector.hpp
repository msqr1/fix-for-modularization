// Glaze Library
// For the license information refer to glaze.hpp

#pragma once

#include <string_view>
#include <vector>

#include "glaze/core/meta.hpp"
#include "glaze/util/string_literal.hpp"

namespace glz
{
   template <class T>
   struct meta<std::vector<T>>
   {
      static constexpr std::string_view name = join_v<chars<"std::vector<">, name_v<T>, chars<">">>;
   };
}
