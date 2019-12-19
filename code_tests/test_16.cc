//
// Created by GaoChong on 2019/12/19.
//
#include <vector>
#include "gtest/gtest.h"
#include "../16_three_sum_closest/Solution16.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest16, t1)
{
    std::vector<int> nums{1, -1, 2, -4};
    int target = 3;
    int closest = 2;
    EXPECT_EQ(closest, Solution16::threeSumClosest(nums, target));
}

TEST(GTest16, t2)
{
    std::vector<int> nums{0, 1, 2};
    int target = 3;
    int closest = 3;
    EXPECT_EQ(closest, Solution16::threeSumClosest(nums, target));
}

TEST(GTest16, t3)
{
    std::vector<int> nums{1, 1, 1, 1};
    int target = -100;
    int closest = 3;
    EXPECT_EQ(closest, Solution16::threeSumClosest(nums, target));
}

TEST(GTest16, t4)
{
    std::vector<int> nums{0, 1, 2};
    int target = 0;
    int closest = 3;
    EXPECT_EQ(closest, Solution16::threeSumClosest(nums, target));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}