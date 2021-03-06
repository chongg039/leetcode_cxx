//
// Created by GaoChong on 2020/1/9.
//

#include "Solution45.h"

int Solution45::jump2(std::vector<int> &nums)
{
    if (nums.empty()) return 0;
    // 表示i跳跃到j需要的步数
    std::vector<std::vector<int>> dp(nums.size(), std::vector<int>(nums.size(), 0));
    for (int i = 0; i < nums.size(); ++i) {
        int max_jump = nums[i];
        for (int j = i + 1; j <= i + max_jump && j < nums.size(); ++j) {
            dp[i][j] = 1;
        }
    }
    for (int j = 1; j < nums.size(); ++j) {
        if (0 == dp[0][j]) {
            dp[0][j] = j + 1;
            for (int i = 1; i < j; ++i) {
                if (1 == dp[i][j]) {
                    int local_min = j + 1;
                    for (int row = 0; row < i; ++row) {
                        if (0 == dp[row][i]) continue;
                        int mini = dp[row][i] + dp[0][row];
                        local_min = local_min > mini ? mini : local_min;
                    }
                    if (local_min > 0) dp[0][j] = local_min + 1 < dp[0][j] ? local_min + 1 : dp[0][j];
                }
            }
        }
    }
    return dp[0][nums.size() - 1];
}

int Solution45::jump3(std::vector<int> &nums) {
    if (nums.size() <= 1) return 0;
    int right = nums.size() - 1;
    int count = 0;
    while (right) {
        for (int left = 0; left < right; ++left) {
            if (left + nums[left] >= right) {
                right = left;
                ++count;
                break;
            }
        }
    }
    return count;
}

int Solution45::jump(std::vector<int> &nums) {
    // 边界确定法23115
    // 2(0-step): 2
    // 2(1-step): 3,1
    // 2(2-step): 1,5
    // 每次更新当前边界，最后一个元素落在最后一部分的边界处
    int cur_end = 0, res = 0, longest_dis = 0;
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (i + nums[i] > longest_dis) {
            longest_dis = i + nums[i];
        }
        if (i == cur_end) {
            ++res;
            cur_end = longest_dis;
        }
    }
    return res;
}