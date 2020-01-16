//
// Created by GaoChong on 2020/1/16.
//

#ifndef LEETCODE_SOLUTION53_H
#define LEETCODE_SOLUTION53_H

#include <vector>
#include <algorithm>

class Solution53
{
public:
    static int maxSubArrayBf(std::vector<int> &nums);
    static int maxSubArrayDp(std::vector<int> &nums);
    static int maxSubArray(std::vector<int> &nums);
};


#endif //LEETCODE_SOLUTION53_H
