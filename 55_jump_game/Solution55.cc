//
// Created by GaoChong on 2020/1/21.
//

#include "Solution55.h"

bool Solution55::canJump(std::vector<int> &nums)
{
    int last = nums.size() - 1;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] + i >= last) {
            last = i;
        }
    }
    return last == 0;
}

bool Solution55::canJumpBf(std::vector<int> &nums)
{
    if (nums.size() <= 1) return true;
    int right = nums.size() - 1;
    while (right) {
        for (int left = 0; left < right; ++left) {
            if (left + nums[left] >= right) {
                right = left;
                break;
            }
            if (left + 1 == right) return false;
        }
    }
    return true;
}