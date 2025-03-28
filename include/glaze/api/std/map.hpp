// Glaze Library
// For the license information refer to glaze.hpp

#pragma once

#include <map>
#include <string_view>

#include "glaze/core/meta.hpp"
#include "glaze/util/string_literal.hpp"

namespace glz
{
   template <class Key, class Mapped>
   struct meta<std::map<Key, Mapped>>
   {
      static constexpr std::string_view name =
         join_v<chars<"std::map<">, name_v<Key>, chars<",">, name_v<Mapped>, chars<">">>;
   };
}
