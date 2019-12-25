//
// Created by GaoChong on 2019/12/25.
//
#include <vector>
#include "gtest/gtest.h"
#include "../27_remove_element/Solution27.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest27, t1)
{
    std::vector<int> nums{1, 1, 2};
    int val = 2;
    int size = 2;
    EXPECT_EQ(size, Solution27::removeElement(nums, val));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

