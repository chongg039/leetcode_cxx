//
// Created by GaoChong on 2020/1/1.
//
#include <iostream>
#include <vector>
#include "gtest/gtest.h"
#include "../40_combination_sum_2/Solution40.h"

using testing::Test;
using testing::InitGoogleTest;

template<typename T>
void show(std::vector<std::vector<T>> const &v)
{
    for (auto &sub_v : v) {
        std::cout << "[";
        for (auto &item : sub_v) {
            std::cout << item << " ";
        }
        std::cout << "]" << std::endl;
    }
}

TEST(GTest40, t1)
{
    std::vector<int> candidates{10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    auto result = Solution40().combinationSum2(candidates, target);
    show(result);
}

TEST(GTest40, t2)
{
    std::vector<int> candidates{2, 5, 2, 1, 2};
    int target = 5;
    auto result = Solution40().combinationSum2(candidates, target);
    show(result);
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

