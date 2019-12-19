//
// Created by GaoChong on 2019/12/18.
//

#include "Solution15.h"

std::vector<std::vector<int>> Solution15::threeSum(std::vector<int> &nums)
{
    std::vector<std::vector<int>> result;
    if (nums.empty()) return result;

    // 默认从小到大排序，类似快排，时间O(n*log_2(n))
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i) {
        // 从现在开始后面的都大于零
        if (nums[i] > 0) break;
        // 该数字前面出现过，跳过
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int lp = i + 1, rp = nums.size() - 1;
        while (lp < rp) {
            int sum = nums[i] + nums[lp] + nums[rp];
            if (sum < 0) ++lp;
            else if (sum > 0) --rp;
            else {
                result.push_back({nums[i], nums[lp], nums[rp]});
                int last_left = nums[lp], last_right = nums[rp];
                while (lp < rp && nums[lp] == last_left) ++lp;
                while (lp < rp && nums[rp] == last_right) --rp;
            }
        }
    }
    return result;
}
