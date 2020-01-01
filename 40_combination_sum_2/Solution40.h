//
// Created by GaoChong on 2020/1/1.
//

#ifndef LEETCODE_SOLUTION40_H
#define LEETCODE_SOLUTION40_H

#include <vector>
#include <algorithm>
#include <climits>

class Solution40
{
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int> &candidates, int target);
    void dfs(int start, int target);

private:
    std::vector<std::vector<int>> results;
    std::vector<int> path;
    std::vector<int> path_idx;
    std::vector<int> cans;
};


#endif //LEETCODE_SOLUTION40_H
