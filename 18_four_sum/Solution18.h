//
// Created by GaoChong on 2019/12/20.
//

#ifndef LEETCODE_SOLUTION18_H
#define LEETCODE_SOLUTION18_H

#include <vector>
#include <algorithm>

class Solution18
{
public:
    // 若vector为const形参，则不能使用排序算法
    static std::vector<std::vector<int>> fourSum(std::vector<int> &nums, int target);
};


#endif //LEETCODE_SOLUTION18_H
