//
// Created by GaoChong on 2019/12/20.
//
#include <iostream>
#include <vector>
#include "../18_four_sum/Solution18.h"

int main()
{
    std::vector<int> nums{-3, -2, -1, 0, 0, 1, 2, 3};
    std::vector<std::vector<int>> results = Solution18::fourSum(nums, 0);
    for (auto &result : results) {
        std::cout << "[";
        for (auto &it : result) {
            std::cout << it << ", ";
        }
        std::cout << "]" << std::endl;
    }
    return 0;
}
