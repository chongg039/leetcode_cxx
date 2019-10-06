//
// Created by chong on 2019/10/6.
//

#ifndef LEETCODE_SOLUTION4_H
#define LEETCODE_SOLUTION4_H

#include <vector>

using std::vector;

class Solution4 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
private:
    void binaryInsert(vector<int> &vec, int ele);
    double median;
};


#endif //LEETCODE_SOLUTION4_H
