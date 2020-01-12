//
// Created by GaoChong on 2020/1/12.
//

#include "Solution47.h"

std::vector<std::vector<int> > Solution47::permuteUnique(std::vector<int> &nums)
{
    if (nums.empty()) return res;
    std::vector<int> p;
    std::vector<bool> visitor(nums.size(), false);
    std::sort(nums.begin(), nums.end());
    generate(nums, 0, p, visitor);
    return res;
}

void Solution47::generate(const std::vector<int> &nums, int idx, std::vector<int> &p, std::vector<bool> &visitor)
{
    if (idx == nums.size()) {
        res.push_back(p);
        return;
    }
    for (int i = 0; i < nums.size(); ++i) {
        // 剪枝条件：关键是判断上一个元素若被回溯过则跳过
        // 即若当前是个和前面重复的元素，若前面的元素没有被访问过，将当前跳过即可
        if (i > 0 && nums[i] == nums[i - 1] && !visitor[i - 1]) continue;
        if (!visitor[i]) {
            p.push_back(nums[i]);
            visitor[i] = true;
            generate(nums, idx + 1, p, visitor);
            p.pop_back();
            visitor[i] = false;
        }
    }
}