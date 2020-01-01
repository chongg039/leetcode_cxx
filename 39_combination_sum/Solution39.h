//
// Created by GaoChong on 2019/12/31.
//

#ifndef LEETCODE_SOLUTION39_H
#define LEETCODE_SOLUTION39_H

#include <vector>
#include <algorithm>

class Solution39
{
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int> &candidates, int target);

    void dfs(int start, int target, std::vector<int> &candidates);

private:
    std::vector<int> path;
    std::vector<std::vector<int>> results;
};


#endif //LEETCODE_SOLUTION39_H
