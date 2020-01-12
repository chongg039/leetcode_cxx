//
// Created by GaoChong on 2020/1/12.
//
#include <iostream>
#include <vector>
#include "../46_permutations/Solution46.h"

int main()
{
    std::vector<int> nums{1, 2, 3};
    auto res = Solution46().permute(nums);
    for (auto &its : res) {
        for (auto &it : its) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}