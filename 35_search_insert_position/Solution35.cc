//
// Created by GaoChong on 2019/12/29.
//

#include "Solution35.h"

int Solution35::searchInsert(std::vector<int> &nums, int target)
{
    if (nums.empty()) return 0;
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            if (0 == mid) {
                return 0;
            } else if (nums[mid - 1] == target) {
                return mid - 1;
            } else if (nums[mid - 1] < target) {
                return mid;
            } else {
                right = mid - 1;
            }
        } else {
            if (nums.size() - 1 == mid) {
                return nums.size();
            } else if (nums[mid + 1] >= target) {
                return mid + 1;
            } else {
                left = mid + 1;
            }
        }
    }
}