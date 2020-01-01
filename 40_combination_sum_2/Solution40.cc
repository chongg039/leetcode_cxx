//
// Created by GaoChong on 2020/1/1.
//

#include "Solution40.h"

std::vector<std::vector<int> > Solution40::combinationSum2(std::vector<int> &candidates, int target)
{
    if (candidates.empty()) return results;
    cans = candidates;
    std::sort(cans.begin(), cans.end());
    dfs(0, target);
    return results;
}

void Solution40::dfs(int start, int target)
{
    if (0 == target) {
        results.push_back(path);
        return;
    }
    int last = INT_MIN;
    for (int i = start; i < cans.size() && target - cans[i] >= 0; ++i) {
        auto path_idx_iter = std::find(path_idx.begin(), path_idx.end(), i);
        if (path_idx_iter != path_idx.end() || last >= cans[i]) {
            continue;
        } else {
            path.push_back(cans[i]);
            path_idx.push_back(i);
            dfs(i, target - cans[i]);
            path.pop_back();
            path_idx.pop_back();
            last = cans[i];
        }
    }
}