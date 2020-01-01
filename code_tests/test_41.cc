//
// Created by GaoChong on 2020/1/1.
//
#include <vector>
#include "gtest/gtest.h"
#include "../41_first_missing_positive/Solution41.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest41, t1)
{
    std::vector<int> nums{1, 2, 0};
    int target = 3;
    EXPECT_EQ(target, Solution41().firstMissingPositive(nums));
}

TEST(GTest41, t2)
{
    std::vector<int> nums{3, 4, -1, 1};
    int target = 2;
    EXPECT_EQ(target, Solution41().firstMissingPositive(nums));
}

TEST(GTest41, t3)
{
    std::vector<int> nums{7, 8, 9, 10, 11};
    int target = 1;
    EXPECT_EQ(target, Solution41().firstMissingPositive(nums));
}

TEST(GTest41, t4)
{
    std::vector<int> nums{2, 1};
    int target = 3;
    EXPECT_EQ(target, Solution41().firstMissingPositive(nums));
}

TEST(GTest41, t5)
{
    std::vector<int> nums{10, 10, 11, 3, 2, 1, -1, 0, -11};
    int target = 4;
    EXPECT_EQ(target, Solution41().firstMissingPositive(nums));
}

TEST(GTest41, t6)
{
    std::vector<int> nums{1, 1000};
    int target = 2;
    EXPECT_EQ(target, Solution41().firstMissingPositive(nums));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}