//
// Created by GaoChong on 2019/12/29.
//
#include <iostream>
#include <vector>
#include "gtest/gtest.h"
#include "../34_find_first_and_last_position/Solution34.h"

using testing::Test;
using testing::InitGoogleTest;

void show(std::vector<int> &result)
{
    for (auto &item : result) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

TEST(GTest34, t1)
{
    std::vector<int> nums{5, 7, 7, 8, 8, 10};
    int target = 8;
    auto result = Solution34::searchRange(nums, target);
    show(result);
}

TEST(GTest34, t2)
{
    std::vector<int> nums{2, 2};
    int target = 2;
    auto result = Solution34::searchRange(nums, target);
    show(result);
}

TEST(GTest34, t3)
{
    std::vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 6, 8, 10, 10};
    int target = 4;
    auto result = Solution34::searchRange(nums, target);
    show(result);
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}