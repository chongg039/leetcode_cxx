//
// Created by GaoChong on 2020/1/22.
//
#include <vector>
#include "gtest/gtest.h"
#include "../56_merge_intervals/Solution56.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest56, t1)
{
    std::vector<std::vector<int>> nums{{1,  3},
                                       {2,  6},
                                       {8,  10},
                                       {15, 18}};
    std::vector<std::vector<int>> res{{1,  6},
                                      {8,  10},
                                      {15, 18}};
    EXPECT_EQ(res, Solution56::merge(nums));
}

TEST(GTest56, t2)
{
    std::vector<std::vector<int>> nums{{1, 4},
                                       {4, 5}};
    std::vector<std::vector<int>> res{{1, 5}};
    EXPECT_EQ(res, Solution56::merge(nums));
}

TEST(GTest56, t3)
{
    std::vector<std::vector<int>> nums{{1, 4},
                                       {0, 0}};
    std::vector<std::vector<int>> res{{0, 0},
                                      {1, 4}};
    EXPECT_EQ(res, Solution56::merge(nums));
}

TEST(GTest56, t4)
{
    std::vector<std::vector<int>> nums{{2, 3},
                                       {4, 5},
                                       {6, 7},
                                       {8, 9},
                                       {1, 10}};
    std::vector<std::vector<int>> res{{1, 10}};
    EXPECT_EQ(res, Solution56::merge(nums));
}

TEST(GTest56, t5)
{
    std::vector<std::vector<int>> nums{{2, 3},
                                       {2, 2},
                                       {3, 3},
                                       {1, 3},
                                       {5, 7},
                                       {2, 2},
                                       {4, 6}};
    std::vector<std::vector<int>> res{{1, 3},
                                      {4, 7}};
    EXPECT_EQ(res, Solution56::merge(nums));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
