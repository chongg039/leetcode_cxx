//
// Created by GaoChong on 2020/1/11.
//
#include <vector>
#include "gtest/gtest.h"
#include "../45_jump_game_two/Solution45.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest45, t1)
{
    std::vector<int> nums{2, 3, 1, 1, 4};
    int step = 2;
    EXPECT_EQ(step, Solution45::jump(nums));
}

TEST(GTest45, t2)
{
    std::vector<int> nums{1, 1, 1, 1};
    int step = 3;
    EXPECT_EQ(step, Solution45::jump(nums));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
