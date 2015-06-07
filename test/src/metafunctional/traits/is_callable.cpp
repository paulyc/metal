// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <boost/mpl2/metafunctional/traits/is_callable.hpp>

#include "test/variadic.hpp"
#include "test/types.hpp"
#include "test/functions.hpp"
#include "test/main.hpp"

using namespace boost::mpl2;

BOOST_MPL2_ASSERT((not_<is_callable<test::a>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::b>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::c>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::d>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::e>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::f>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::g>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::h>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::i>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::j>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::a, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::b, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::c, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::d, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::e, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::f, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::g, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::h, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::i, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::j, void>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::a, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::b, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::c, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::d, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::e, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::f, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::g, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::h, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::i, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::j, void, void*>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::incomplete>>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::empty>>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::evaluable>>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::call>>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::incomplete>, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::empty>, void>>));
BOOST_MPL2_ASSERT((is_callable<test::unary<test::evaluable>, void>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::call>, void>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::incomplete>, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::empty>, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::evaluable>, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::unary<test::call>, void, void*>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::incomplete>>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::empty>>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::evaluable>>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::call>>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::incomplete>, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::empty>, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::evaluable>, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::call>, void>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::incomplete>, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::empty>, void, void*>>));
BOOST_MPL2_ASSERT((is_callable<test::binary<test::evaluable>, void, void*>));
BOOST_MPL2_ASSERT((not_<is_callable<test::binary<test::call>, void, void*>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::incomplete>>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::empty>>>));
BOOST_MPL2_ASSERT((is_callable<test::n_ary<test::evaluable>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::call>>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::incomplete>, void>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::empty>, void>>));
BOOST_MPL2_ASSERT((is_callable<test::n_ary<test::evaluable>, void>));
BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::call>, void>>));

BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::incomplete>, void, void*>>));
BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::empty>, void, void*>>));
BOOST_MPL2_ASSERT((is_callable<test::n_ary<test::evaluable>, void, void*>));
BOOST_MPL2_ASSERT((not_<is_callable<test::n_ary<test::call>, void, void*>>));
