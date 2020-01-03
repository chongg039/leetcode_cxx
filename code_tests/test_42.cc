//
// Created by GaoChong on 2020/1/2.
//
#include <vector>
#include "gtest/gtest.h"
#include "../42_trapping_rain_water/Solution42.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest42, t1)
{
    std::vector<int> heights{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int target = 6;
    EXPECT_EQ(target, Solution42::trap(heights));
}

TEST(GTest42, t2)
{
    std::vector<int> heights{2, 0, 2};
    int target = 2;
    EXPECT_EQ(target, Solution42::trap(heights));
}

TEST(GTest42, t3)
{
    std::vector<int> heights{2, 1, 0, 2};
    int target = 3;
    EXPECT_EQ(target, Solution42::trap(heights));
}

TEST(GTest42, t4)
{
    std::vector<int> heights{5, 4, 1, 2};
    int target = 1;
    EXPECT_EQ(target, Solution42::trap(heights));
}

TEST(GTest42, t5)
{
    std::vector<int> heights{5, 2, 1, 2, 1, 5};
    int target = 14;
    EXPECT_EQ(target, Solution42::trap(heights));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
