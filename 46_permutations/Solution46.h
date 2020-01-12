//
// Created by GaoChong on 2020/1/12.
//

#ifndef LEETCODE_SOLUTION46_H
#define LEETCODE_SOLUTION46_H

#include <vector>

class Solution46
{
public:
    std::vector<std::vector<int>> permute(std::vector<int> &nums);

private:
    void generate(const std::vector<int> &nums, int idx, std::vector<int> &p, std::vector<bool> &visitor);

    std::vector<std::vector<int>> res;
};


#endif //LEETCODE_SOLUTION46_H
