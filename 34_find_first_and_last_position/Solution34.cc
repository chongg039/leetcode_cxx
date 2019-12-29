//
// Created by GaoChong on 2019/12/29.
//

#include "Solution34.h"

std::vector<int> Solution34::searchRange(std::vector<int> &nums, int target)
{
    // 首先二分查找target，直到left==right
    // 再找大于target的且直到left==right，此时就是最右侧target的下一个位置
    std::vector<int> result{-1, -1};
    if (nums.empty()) return result;
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result[0] = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (-1 == result[0]) return result;
    if (1 == nums.size()) {
        result[1] = result[0];
        return result;
    }
    left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        if (left <= right) {
            if (left > 0 && nums[left] > target) {
                result[1] = left - 1;
            } else if (nums[left] == target) {
                result[1] = left;
            }
        }
    }
    return result;
}