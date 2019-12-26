//
// Created by GaoChong on 2019/12/26.
//

#include "Solution31.h"

void Solution31::nextPermutation(std::vector<int> &nums)
{
    if (nums.empty() || 1 == nums.size()) return;
    for (auto left = nums.end() - 1; left != nums.begin(); --left) {
        if (*(left - 1) >= *left) continue;
        left -= 1;
        for (auto right = nums.end() - 1; right != left; --right) {
            if (*right <= *left) continue;
            else {
                swap(left, right);
                std::sort(left + 1, nums.end());
                return;
            }
        }
    }
    std::sort(nums.begin(), nums.end());
}

void Solution31::swap(std::vector<int>::iterator left, std::vector<int>::iterator right)
{
    int tmp = *left;
    *left = *right;
    *right = tmp;
}