#include "gmock/gmock.h"
#include "func.hpp"

using namespace testing;

TEST(func, zero)
{
    EXPECT_THAT(func(0, 0), DoubleEq(0));
}

TEST(func, three)
{
    EXPECT_THAT(func(1, 2), DoubleEq(3));
}

