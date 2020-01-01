//
// Created by GaoChong on 2019/12/31.
//

#include "Solution39.h"

std::vector<std::vector<int> > Solution39::combinationSum(std::vector<int> &candidates, int target)
{
    if (candidates.empty()) return results;
    std::sort(candidates.begin(), candidates.end());
    dfs(0, target, candidates);
    return results;
}

void Solution39::dfs(int start, int target, std::vector<int> &candidates)
{
    if (0 == target) {
        results.push_back(path);
        return;
    }
    for (int i = start; i < candidates.size() && target - candidates[i] >= 0; ++i) {
        path.push_back(candidates[i]);
        dfs(i, target-candidates[i], candidates);
        path.pop_back();
    }
}