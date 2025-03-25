// Glaze Library
// For the license information refer to glaze.hpp

#pragma once

#include <deque>
#include <string_view>

#include "glaze/core/meta.hpp"
#include "glaze/util/string_literal.hpp"

namespace glz
{
   template <class T>
   struct meta<std::deque<T>>
   {
      static constexpr std::string_view name = join_v<chars<"std::deque<">, name_v<T>, chars<">">>;
   };
}
