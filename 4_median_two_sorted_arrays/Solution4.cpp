//
// Created by chong on 2019/10/6.
//

#include "Solution4.h"

void Solution4::binaryInsert(vector<int> &vec, int ele) {
    if (vec.empty()) {
        return;
    }
    int middlePos = vec.size() / 2;
    if (ele > vec.at(middlePos)) {

    } else if (ele <= vec.at(middlePos)) {

    }

}

double Solution4::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    if (nums1.empty() && nums2.empty()){
        median = 0;
    } else if (nums1.empty() && !nums2.empty()) {
        if (0 == nums2.size() % 2) {
            median = (nums2.at(nums2.size() / 2 - 1) + nums2.at(nums2.size() / 2)) / 2;
        } else {
            median = nums2.at(nums2.size() / 2);
        }
    } else if (!nums1.empty() && nums2.empty()) {
        if (0 == nums1.size() % 2) {
            median = (nums1.at(nums1.size() / 2 - 1) + nums1.at(nums1.size() / 2)) / 2;
        } else {
            median = nums1.at(nums1.size() / 2);
        }
    } else {
        // nums1 和 nums2 都不为空
//        vector<int> merged;
//        if (*(nums1.cend()-1) < *nums2.cbegin()) {
//            merged.insert(merged.cend(), nums1.cbegin(), nums1.cend());
//            merged.insert(merged.cend(), nums2.cbegin(), nums2.cend());
//        } else if (*(nums2.cend()-1) < *nums1.cbegin()) {
//            merged.insert(merged.cend(), nums2.cbegin(), nums2.cend());
//            merged.insert(merged.cend(), nums1.cbegin(), nums1.cend());
//        } else {
//            if (*nums1.cbegin() <= *nums2.cbegin()) {
//
//            } else {
//
//            }
//        }

    }
}