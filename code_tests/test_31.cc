//
// Created by GaoChong on 2019/12/26.
//
#include <iostream>
#include <vector>
#include "../31_next_permutation/Solution31.h"

int main()
{
    std::vector<int> nums{3, 2, 1};
    Solution31::nextPermutation(nums);
    for (auto &it : nums) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    return 0;
}
