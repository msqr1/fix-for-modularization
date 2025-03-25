// Glaze Library
// For the license information refer to glaze.hpp

#pragma once

#include <cstddef>
#include <string_view>
#include <utility>

#include "glaze/core/meta.hpp"
#include "glaze/tuplet/tuple.hpp"
#include "glaze/util/string_literal.hpp"

namespace glz
{
   template <class... T>
   struct meta<glz::tuple<T...>>
   {
      static constexpr std::string_view name = []<size_t... I>(std::index_sequence<I...>) {
         return join_v<chars<"glz::tuple<">,
                       ((I != sizeof...(T) - 1) ? join_v<name_v<T>, chars<",">> : join_v<name_v<T>>)..., chars<">">>;
      }(std::make_index_sequence<sizeof...(T)>{});
   };
}
