//
// Created by GaoChong on 2019/12/26.
//

#ifndef LEETCODE_SOLUTION31_H
#define LEETCODE_SOLUTION31_H

#include <vector>
#include <algorithm>

class Solution31
{
public:
    static void nextPermutation(std::vector<int> &nums);

private:
    static void swap(std::vector<int>::iterator left, std::vector<int>::iterator right);
};


#endif //LEETCODE_SOLUTION31_H
