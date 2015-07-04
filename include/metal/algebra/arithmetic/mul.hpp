/// @copyright Bruno Dutra 2015
/// Distributed under the Boost Software License, Version 1.0.
/// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef METAL_ALGEBRA_ARITHMETIC_MUL_HPP
#define METAL_ALGEBRA_ARITHMETIC_MUL_HPP

#include <type_traits>

namespace metal
{
    template<typename x, typename y, typename... _>
    struct mul :
            mul<mul<x, y>, _...>
    {};

    template<typename x, typename y>
    struct mul<x, y> :
            std::integral_constant<
                decltype(x::value * y::value),
                x::value * y::value
            >
    {};
}

#endif
