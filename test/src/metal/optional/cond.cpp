// Copyright Bruno Dutra 2015-2016
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <metal/optional/cond.hpp>
#include <metal/optional/optional.hpp>

#include "test.hpp"

#define MATRIX(M, N) \
    ASSERT((metal::is_just_t<metal::cond<VAL(M), NUMS(INC(N))>>), (FALSE)); \
    ASSERT((metal::is_just_t<metal::cond<NUM(M), NUMS(INC(N))>>), (BOOL(M || N))); \
    ASSERT((metal::is_just_t<metal::cond<metal::just<VAL(M)>, NUMS(INC(N))>>), (FALSE)); \
    ASSERT((metal::is_just_t<metal::cond<metal::just<NUM(M)>, NUMS(INC(N))>>), (BOOL(M || N))); \
    ASSERT((metal::cond_t<ENUM(M, NUM(0) BAR) COMMA(M) NUM(INC(N)), EXPR()<VAL(N)>>), (EXPR()<VAL(N)>::type)); \
    ASSERT((metal::cond_t<metal::just<NUM(INC(N))>, EXPR()<VAL(N)> COMMA(M) VALS(M)>), (EXPR()<VAL(N)>::type)); \
/**/

GEN(MATRIX)