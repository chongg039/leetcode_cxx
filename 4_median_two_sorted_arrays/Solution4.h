//
// Created by chong on 2019/10/6.
//

#ifndef LEETCODE_SOLUTION4_H
#define LEETCODE_SOLUTION4_H

#include <vector>
#include <iostream>

using std::vector;
using std::size_t;
using std::cout;
using std::endl;


class Solution4 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
private:
    void display(vector<int> &vec);
    void binaryInsert(vector<int> &vec, vector<int>::const_iterator middle, int ele);
    double median;
    vector<int> bf;
    vector<int> af;
};


#endif //LEETCODE_SOLUTION4_H
