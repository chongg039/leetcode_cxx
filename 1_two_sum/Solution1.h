//
// Created by chong on 2019/10/4.
//

#ifndef LEETCODE_SOLUTION1_H
#define LEETCODE_SOLUTION1_H

#include <vector>
using std::vector;
using std::distance;

class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (auto i = nums.cbegin(); i != nums.cend() ; ++i) {
            for (auto j = nums.cend()-1; j != i; --j) {
                int idx_i = distance(nums.cbegin(), i);
                int idx_j = distance(nums.cbegin(), j);
                if (*i + *j == target) {
                    result.push_back(idx_i);
                    result.push_back(idx_j);
                    return result;
                } else {
                    continue;
                }
            }
        }
        return result;
    }
};


#endif //LEETCODE_SOLUTION1_H
