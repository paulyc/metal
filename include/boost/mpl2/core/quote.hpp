// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MPL2_CORE_QUOTE_HPP
#define BOOST_MPL2_CORE_QUOTE_HPP

namespace boost
{
    namespace mpl2
    {
        template<template<typename...> class f>
        struct quote
        {
        private:
            template<typename... args>
            struct type_ :
                    f<args...>
            {};

        public:
            template<typename... args>
            using type = type_<args...>;
        };
    }
}

#endif