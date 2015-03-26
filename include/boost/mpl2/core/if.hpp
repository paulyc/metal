// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MPL2_CORE_IF_HPP
#define BOOST_MPL2_CORE_IF_HPP

#include <boost/mpl2/core/integral.hpp>

namespace boost
{
    namespace mpl2
    {
        template<typename cond, typename yes, typename no>
        struct if_ :
                if_<integral<bool, cond::value ? true : false>, yes, no>
        {};

        template<typename yes, typename no>
        struct if_<true_, yes, no> : yes
        {};

        template<typename yes, typename no>
        struct if_<false_, yes, no> : no
        {};

    }
}

#endif
