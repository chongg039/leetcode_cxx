//
// Created by GaoChong on 2020/1/21.
//

#include "Solution56.h"

std::vector<std::vector<int> > Solution56::merge(std::vector<std::vector<int> > &intervals)
{
    std::vector<std::vector<int>> res;
    if (intervals.empty()) return res;
    // 按照左端点排序
    std::sort(intervals.begin(), intervals.end(), comp);
    display(intervals);
    res.emplace_back(intervals[0]);
    for (auto tobe = intervals.begin() + 1; tobe != intervals.end(); ++tobe) {
        bool flag = false;
        for (auto &re : res) {
            if (*tobe->begin() > re.back()) {
                // 在没检测完所有的之前不能插入
                continue;
            } else if (tobe->back() >= re.back()) {
                re[1] = tobe->back();
                flag = true;
                break;
            } else if (tobe->back() < re.back()) {
                flag = true;
                break;
            } else continue;
        }
        if (!flag) res.emplace_back(*tobe);
    }
    return res;
}

bool Solution56::comp(std::vector<int> &lhs, std::vector<int> &rhs)
{
    if (lhs[0] != rhs[0]) {
        return lhs[0] < rhs[0];
    } else {
        return lhs[1] < rhs[1];
    }
}

void Solution56::display(const std::vector<std::vector<int>> &nums)
{
    for (auto &its : nums) {
        std::cout << "[";
        for (auto &it : its) {
            std::cout << it << " ";
        }
        std::cout << "]" << std::endl;
    }
}