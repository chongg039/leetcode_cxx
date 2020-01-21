//
// Created by GaoChong on 2020/1/16.
//
#include <vector>
#include "gtest/gtest.h"
#include "../54_spiral_matrix/Solution54.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest54, t1)
{
    std::vector<std::vector<int>> nums{{1, 2, 3},
                                       {4, 5, 6},
                                       {7, 8, 9}};
    std::vector<int> res{1, 2, 3, 6, 9, 8, 7, 4, 5};
    EXPECT_EQ(res, Solution54::spiralOrder(nums));
}

TEST(GTest54, t2)
{
    std::vector<std::vector<int>> nums{{1, 2,  3,  4},
                                       {5, 6,  7,  8},
                                       {9, 10, 11, 12}};
    std::vector<int> res{1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};
    EXPECT_EQ(res, Solution54::spiralOrder(nums));
}

TEST(GTest54, t3)
{
    std::vector<std::vector<int>> nums{{2, 5, 8},
                                       {4, 0, -1}};
    std::vector<int> res{2, 5, 8, -1, 0, 4};
    EXPECT_EQ(res, Solution54::spiralOrder(nums));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
