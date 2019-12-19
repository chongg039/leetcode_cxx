//
// Created by GaoChong on 2019/12/19.
//

#include "Solution16.h"

int Solution16::threeSumClosest(std::vector<int> &nums, int target)
{
    int result = 0;
    if (target > 0) result = INT_MAX - 1;
    else result = INT_MIN + 1;
    if (nums.empty() || nums.size() < 3) return result;

    std::size_t n_size = nums.size();
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n_size; ++i) {
        int lp = i + 1, rp = n_size - 1;
        while (lp < rp) {
            int tmp = nums[i] + nums[lp] + nums[rp];
            if (tmp == target) return tmp;
            int tmp_abs = tmp > target ? tmp - target : target - tmp;
            // 注意，0-INT_MIN = INT_MIN
            int res_abs = result > target ? result - target : target - result;
            if (tmp_abs < res_abs) result = tmp;
            else {
                if (tmp > target) --rp;
                else ++lp;
            }
        }
    }

    return result;
}