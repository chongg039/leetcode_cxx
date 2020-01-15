//
// Created by GaoChong on 2020/1/14.
//
#include "gtest/gtest.h"
#include "../50_pow_x_n/Solution50.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest50, t1)
{
    double x = 2;
    int n = 10;
    double res = 1024;
    EXPECT_EQ(res, Solution50::myPow(x, n));
}

TEST(GTest50, t2)
{
    double x = -2;
    int n = 10;
    double res = 1024;
    EXPECT_EQ(res, Solution50::myPow(x, n));
}

TEST(GTest50, t3)
{
    double x = 2;
    int n = -2;
    double res = 0.25;
    EXPECT_EQ(res, Solution50::myPow(x, n));
}

TEST(GTest50, t4)
{
    double x = 0.00001;
    int n = 2147483647;
    double res = 0;
    EXPECT_EQ(res, Solution50::myPow(x, n));
}

TEST(GTest50, t5)
{
    double x = 1;
    int n = -2147483648;
    double res = 1;
    EXPECT_EQ(res, Solution50::myPow(x, n));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
