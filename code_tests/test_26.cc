//
// Created by GaoChong on 2019/12/24.
//
#include <vector>
#include "gtest/gtest.h"
#include "../26_remove_duplicates/Solution26.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest26, t1)
{
    std::vector<int> nums{1, 1, 2};
    int size = 2;
    EXPECT_EQ(size, Solution26::removeDuplicates(nums));
}

TEST(GTest26, t2)
{
    std::vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size = 5;
    EXPECT_EQ(size, Solution26::removeDuplicates(nums));
}

TEST(GTest26, t3)
{
    std::vector<int> nums;
    int size = 0;
    EXPECT_EQ(size, Solution26::removeDuplicates(nums));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
