//
// Created by GaoChong on 2019/12/28.
//

#include "Solution33.h"

int Solution33::search(std::vector<int> &nums, int target)
{
    if (nums.empty()) return -1;
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] <= nums[high]) {
            // mid位于右半部分
            if (target <= nums[high] && target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        } else if (nums[mid] >= nums[high]) {
            // mid位于左半部分
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }
    return -1;
}

