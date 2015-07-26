// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef METAL_ALGEBRA_LOGICAL_OR_HPP
#define METAL_ALGEBRA_LOGICAL_OR_HPP

#include <type_traits>

namespace metal
{
    ///\cond
    template<typename head, typename... tail>
    struct or_ :
            or_<head, or_<tail...>>
    {};

    template<typename x>
    struct or_<x> :
            std::integral_constant<bool, !!x::value>
    {};

    template<typename x, typename y>
    struct or_<x, y> :
            or_<std::integral_constant<bool, !!x::value>, y>
    {};

    template<typename y> struct or_<std::false_type, y> : y {};
    template<typename y> struct or_<std::true_type, y> : std::true_type {};
    ///\endcond

    template<typename head, typename... tail>
    using or_t = typename or_<head, tail...>::type;
}

#endif
