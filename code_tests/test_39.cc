//
// Created by GaoChong on 2020/1/1.
//
#include <iostream>
#include <vector>
#include "gtest/gtest.h"
#include "../39_combination_sum/Solution39.h"

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

TEST(GTest39, t1)
{
    std::vector<int> candidates{2, 3, 6, 7};
    int target = 7;
    auto result = Solution39().combinationSum(candidates, target);
    show(result);
}

TEST(GTest39, t2)
{
    std::vector<int> candidates{2, 3, 5};
    int target = 8;
    auto result = Solution39().combinationSum(candidates, target);
    show(result);
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
