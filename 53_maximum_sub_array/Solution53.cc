//
// Created by GaoChong on 2020/1/16.
//

#include "Solution53.h"

int Solution53::maxSubArrayBf(std::vector<int> &nums)
{
    if (nums.empty()) return 0;
    if (1 == nums.size()) return nums[0];
    int m = nums[0], n = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        n = std::max(n + nums[i], nums[i]);
        m = std::max(m, n);
    }
    return m;
}

int Solution53::maxSubArrayDp(std::vector<int> &nums)
{
    return 0;
}

int Solution53::maxSubArray(std::vector<int> &nums)
{
    return 0;
}