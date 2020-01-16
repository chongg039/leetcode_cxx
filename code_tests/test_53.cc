//
// Created by GaoChong on 2020/1/16.
//
#include <vector>
#include "gtest/gtest.h"
#include "../53_maximum_sub_array/Solution53.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest42, t1)
{
    std::vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int target = 6;
    EXPECT_EQ(target, Solution53::maxSubArrayBf(nums));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
