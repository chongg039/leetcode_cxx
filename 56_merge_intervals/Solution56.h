//
// Created by GaoChong on 2020/1/21.
//

#ifndef LEETCODE_SOLUTION56_H
#define LEETCODE_SOLUTION56_H

#include <iostream>
#include <vector>
#include <algorithm>

class Solution56
{
public:
    static std::vector<std::vector<int>> merge(std::vector<std::vector<int>> &intervals);

private:
    static bool
    comp(std::vector<int> &lhs, std::vector<int> &rhs);

    static void display(const std::vector<std::vector<int>> &nums);
};


#endif //LEETCODE_SOLUTION56_H
