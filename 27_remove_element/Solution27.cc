//
// Created by GaoChong on 2019/12/25.
//
#include "Solution27.h"

int Solution27::removeElement(std::vector<int> &nums, int val)
{
    if (nums.empty()) return 0;
    std::vector<int>::iterator it(nums.begin());
    while (it != nums.end()) {
        if (*it == val) {
            it = nums.erase(it);
        } else ++it;
    }
    return nums.size();
}