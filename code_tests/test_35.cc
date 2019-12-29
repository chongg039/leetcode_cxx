//
// Created by GaoChong on 2019/12/29.
//
#include <iostream>
#include <vector>
#include "gtest/gtest.h"
#include "../35_search_insert_position/Solution35.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest35, t1)
{
    std::vector<int> nums{1, 3, 5, 6};
    int target = 5;
    int result = 2;
    EXPECT_EQ(result, Solution35::searchInsert(nums, target));
}

TEST(GTest35, t2)
{
    std::vector<int> nums{1, 3, 5, 6};
    int target = 2;
    int result = 1;
    EXPECT_EQ(result, Solution35::searchInsert(nums, target));
}

TEST(GTest35, t3)
{
    std::vector<int> nums{1, 3, 5, 6};
    int target = 7;
    int result = 4;
    EXPECT_EQ(result, Solution35::searchInsert(nums, target));
}

TEST(GTest35, t4)
{
    std::vector<int> nums{1, 3, 5, 6};
    int target = 0;
    int result = 0;
    EXPECT_EQ(result, Solution35::searchInsert(nums, target));
}

TEST(GTest35, t5)
{
    std::vector<int> nums{1, 3, 5, 6};
    int target = 5;
    int result = 2;
    EXPECT_EQ(result, Solution35::searchInsert(nums, target));
}

TEST(GTest35, t6)
{
    std::vector<int> nums{1, 3, 5, 6};
    int target = 1;
    int result = 0;
    EXPECT_EQ(result, Solution35::searchInsert(nums, target));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
