//
// Created by GaoChong on 2020/1/1.
//

#include "Solution41.h"

int Solution41::firstMissingPositive(std::vector<int> &nums)
{
    // 鸽巢原理：将对应数字放在对应下标的新数组中，第一个没有的即为缺失的
    // 这个数一定不大于nums.size() + 1，可以初步防止针对大数产生太多无用鸽巢的问题
    int result = 0;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        if (*it > result && *it <= nums.size() + 1) result = *it;
    }
    if (0 == result) return 1;
    int size = result + 1;
    std::vector<int> nest(size, -1);
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        // 这里不要忘记检测排除大于范围的数，否则会产生非法写入
        if (*it <= 0 || *it > nums.size() + 1) continue;
        nest[*it - 1] = *it;
    }
    for (int i = 0; i < size; ++i) {
        if (-1 == nest[i]) {
            result = i + 1;
            break;
        }
    }
    return result;
}