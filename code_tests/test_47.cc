//
// Created by GaoChong on 2020/1/12.
//
#include <iostream>
#include <vector>
#include "../47_permutations_2/Solution47.h"

int main()
{
    std::vector<int> nums{1, 1, 2};
    auto res = Solution47().permuteUnique(nums);
    for (auto &its : res) {
        for (auto &it : its) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
