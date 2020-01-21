//
// Created by GaoChong on 2020/1/21.
//
#include <vector>
#include "gtest/gtest.h"
#include "../55_jump_game/Solution55.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest55, t1)
{
    std::vector<int> nums{2, 3, 1, 1, 5};
    bool res = true;
    EXPECT_EQ(res, Solution55::canJump(nums));
}

TEST(GTest55, t2)
{
    std::vector<int> nums{3, 2, 1, 0, 4};
    bool res = false;
    EXPECT_EQ(res, Solution55::canJump(nums));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
