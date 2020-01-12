//
// Created by GaoChong on 2020/1/12.
//

#include "Solution46.h"

// 排列问题是典型的回溯法
std::vector<std::vector<int> > Solution46::permute(std::vector<int> &nums)
{
    res.clear();
    if (0 == nums.size()) return res;
    std::vector<bool> visitor(nums.size(), false);
    std::vector<int> p;
    generate(nums, 0, p, visitor);
    return res;
}

void Solution46::generate(const std::vector<int> &nums, int idx, std::vector<int> &p, std::vector<bool> &visitor)
{
    // 假设p[0, idx - 1]已经是一个组合，p保存了一个idx-1个元素的排列
    // 针对当前idx要生成的新的组合
    // 向该末尾添加第idx个元素生成一个新的排列，这个新插入的一定是没有见过的
    // 停止条件：当插入大小等于原有数组大小
    if (idx == nums.size()) {
        res.push_back(p);
        return;
    }
    for (int i = 0; i < nums.size(); ++i) {
        if (!visitor[i]) {
            p.push_back(nums[i]);
            visitor[i] = true;
            generate(nums, idx + 1, p, visitor);
            p.pop_back();
            visitor[i] = false;
        }
    }
}