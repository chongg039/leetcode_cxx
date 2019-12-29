//
// Created by GaoChong on 2019/12/29.
//
#include <vector>
#include "gtest/gtest.h"
#include "../33_search_in_rotated_sorted_array/Solution33.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest33, t1)
{
    std::vector<int> nums{4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int idx = 4;
    EXPECT_EQ(idx, Solution33::search(nums, target));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}