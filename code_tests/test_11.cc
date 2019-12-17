//
// Created by GaoChong on 2019/12/17.
//
#include <vector>
#include "gtest/gtest.h"
#include "../11_container_with_most_water/Solution11.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest11, t1)
{
    std::vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max_area = 49;
    EXPECT_EQ(max_area, Solution11::maxArea(height));
}

TEST(GTest11, t2)
{
    std::vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max_area = 49;
    EXPECT_EQ(max_area, Solution11::maxArea2(height));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}