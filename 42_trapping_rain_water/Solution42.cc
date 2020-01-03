//
// Created by GaoChong on 2020/1/2.
//

#include "Solution42.h"

int Solution42::trap(std::vector<int> &height)
{
    // 不要从全局考虑
    // 求每个位置的格子最大能装多少水
    // 向左向右遍历找最大边界，用边界的较小高度减去当前格子的高度，记得到当前格子最大容量
    int result = 0;
    if (height.empty() || height.size() < 3) return result;
    for (int i = 1; i < height.size() - 1; ++i) {
        int max_left = height[i], max_right = height[i];
        for (int j = i - 1; j >= 0; --j) {
            max_left = height[j] >= max_left ? height[j] : max_left;
        }
        for (int j = i + 1; j < height.size(); ++j) {
            max_right = height[j] >= max_right ? height[j] : max_right;
        }
        result += max_left >= max_right ? max_right - height[i] : max_left - height[i];
    }
    return result;
}

int Solution42::trapMemo(std::vector<int> &height)
{
    // 备忘录法，两个数组记下当前位置的左边最大高度和右边最大高度
    int result = 0;
    if (height.empty() || height.size() < 3) return result;
    int n = height.size();
    std::vector<int> l_max(n, 0);
    std::vector<int> r_max(n, 0);
    // 边界条件
    l_max[0] = height[0];
    r_max[n - 1] = height[n - 1];
    for (int i = 1; i < n; ++i) {
        l_max[i] = height[i] >= l_max[i - 1] ? height[i] : l_max[i - 1];
    }
    for (int i = n - 2; i >= 0; --i) {
        r_max[i] = height[i] >= r_max[i + 1] ? height[i] : r_max[i + 1];
    }
    for (int i = 0; i < n; ++i) {
        result += l_max[i] >= r_max[i] ? r_max[i] - height[i] : l_max[i] - height[i];
    }
    return result;
}
