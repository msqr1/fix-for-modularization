// Glaze Library
// For the license information refer to glaze.hpp

#pragma once

#include <set>
#include <string_view>

#include "glaze/core/meta.hpp"
#include "glaze/util/string_literal.hpp"

namespace glz
{
   template <class T>
   struct meta<std::set<T>>
   {
      static constexpr std::string_view name = join_v<chars<"std::set<">, name_v<T>, chars<">">>;
   };
}
