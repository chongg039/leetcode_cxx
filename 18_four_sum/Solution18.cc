//
// Created by GaoChong on 2019/12/20.
//

#include "Solution18.h"

std::vector<std::vector<int>> Solution18::fourSum(std::vector<int> &nums, int target)
{
    std::vector<std::vector<int>> result;
    if (nums.empty() || nums.size() < 4) return result;

    std::sort(nums.begin(), nums.end());

    int i = 0, j = nums.size() - 1;
    bool flag = true;
    while (i + 2 < j) {
        int lp = i + 1, rp = j - 1;
        while (lp < rp) {
            int inner = nums[i] + nums[lp] + nums[rp] + nums[j];
            if (inner == target) {
                result.push_back({nums[i], nums[lp], nums[rp], nums[j]});
                lp += nums[lp] == nums[lp + 1] ? 2 : 1;
                rp -= nums[rp] == nums[rp + 1] ? 2 : 1;
            } else if (inner > target) --rp;
            else ++lp;
        }
        if (flag) ++i;
        else --i;
        flag = -flag;
    }
    return result;
}