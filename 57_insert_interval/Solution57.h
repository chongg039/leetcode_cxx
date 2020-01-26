//
// Created by GaoChong on 2020/1/23.
//

#ifndef LEETCODE_SOLUTION57_H
#define LEETCODE_SOLUTION57_H

#include <vector>
#include <algorithm>

class Solution57
{
public:
    static std::vector<std::vector<int>>
    insert(std::vector<std::vector<int>> &intervals, std::vector<int> &newInterval);

private:
    static bool comp(std::vector<int> &lhs, std::vector<int> &rhs);
};


#endif //LEETCODE_SOLUTION57_H
