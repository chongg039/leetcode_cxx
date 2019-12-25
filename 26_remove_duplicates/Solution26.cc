//
// Created by GaoChong on 2019/12/24.
//

#include "Solution26.h"

int Solution26::removeDuplicates(std::vector<int> &nums)
{
    if (nums.empty()) return 0;
    int pre_item = nums[0];
    int size = nums.size();
    auto it(nums.begin() + 1);
    while (it != nums.end()) {
        if (*it == pre_item) {
            it = nums.erase(it);
            --size;
        } else {
            pre_item = *it;
            ++it;
        }
    }
    return size;
}