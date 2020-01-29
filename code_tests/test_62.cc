//
// Created by GaoChong on 2020/1/27.
//
#include <string>
#include "gtest/gtest.h"
#include "../62_unique_paths/Solution62.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest62, t1)
{
    int m = 3, n = 2;
    int res = 3;
    EXPECT_EQ(res, Solution62::uniquePaths(m, n));
}

TEST(GTest62, t2)
{
    int m = 7, n = 3;
    int res = 28;
    EXPECT_EQ(res, Solution62::uniquePaths(m, n));
}

TEST(GTest62, t3)
{
    int m = 23, n = 12;
    int res = 193536720;
    EXPECT_EQ(res, Solution62::uniquePaths(m, n));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
