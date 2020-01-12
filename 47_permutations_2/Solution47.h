//
// Created by GaoChong on 2020/1/12.
//

#ifndef LEETCODE_SOLUTION47_H
#define LEETCODE_SOLUTION47_H

#include <vector>
#include <algorithm>

class Solution47
{
public:
    std::vector<std::vector<int>> permuteUnique(std::vector<int> &nums);

private:
    std::vector<std::vector<int>> res;
    void generate(const std::vector<int> &nums, int idx, std::vector<int> &p, std::vector<bool> &visitor);
};


#endif //LEETCODE_SOLUTION47_H
