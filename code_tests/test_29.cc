//
// Created by GaoChong on 2019/12/25.
//
#include <climits>
#include "gtest/gtest.h"
#include "../29_divide_two_integers/Solution29.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest29, t1)
{
    int dividend = 0;
    int divisor = 1;
    int quotient = 0;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t2)
{
    int dividend = 10;
    int divisor = 3;
    int quotient = 3;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t3)
{
    int dividend = 10;
    int divisor = -3;
    int quotient = -3;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t4)
{
    int dividend = 7;
    int divisor = -3;
    int quotient = -2;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t5)
{
    int dividend = -7;
    int divisor = -3;
    int quotient = 2;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t6)
{
    int dividend = INT_MIN;
    int divisor = -1;
    int quotient = INT_MAX;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t7)
{
    int dividend = INT_MIN;
    int divisor = 2;
    int quotient = INT_MIN / 2;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t8)
{
    int dividend = INT_MIN;
    int divisor = -3;
    int quotient = 715827882;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t9)
{
    int dividend = INT_MIN;
    int divisor = INT_MIN;
    int quotient = 1;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

TEST(GTest29, t10)
{
    int dividend = -10;
    int divisor = INT_MIN;
    int quotient = 0;
    EXPECT_EQ(quotient, Solution29::divide(dividend, divisor));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

