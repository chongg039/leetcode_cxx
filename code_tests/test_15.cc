//
// Created by GaoChong on 2019/12/18.
//
#include <iostream>
#include <vector>
#include "../15_three_sum/Solution15.h"

int main()
{
    std::vector<int> input{-1, 0, 1, 2, -1, 4};
    std::vector<std::vector<int>> results = Solution15::threeSum(input);
    for (auto &result : results) {
        std::cout << "[";
        for (auto it : result) {
            std::cout << it << ",";
        }
        std::cout << "]" << std::endl;
    }
    return 0;
}

