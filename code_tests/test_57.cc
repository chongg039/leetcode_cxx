//
// Created by GaoChong on 2020/1/26.
//
#include <vector>
#include "gtest/gtest.h"
#include "../57_insert_interval/Solution57.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest57, t1)
{
    std::vector<std::vector<int>> nums{{2, 3},
                                       {2, 2},
                                       {3, 3},
                                       {1, 3},
                                       {5, 7},
                                       {2, 2}};
    std::vector<int> new_interval{4, 6};
    std::vector<std::vector<int>> res{{1, 3},
                                      {4, 7}};
    EXPECT_EQ(res, Solution57::insert(nums, new_interval));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
