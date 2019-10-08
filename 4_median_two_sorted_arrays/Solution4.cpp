//
// Created by chong on 2019/10/6.
//

#include "Solution4.h"

void Solution4::binaryInsert(vector<int> &vec, vector<int>::const_iterator middle, int ele) {
    if (vec.empty()) {
        return;
    }
    if (1 == vec.size()) {
        if (ele >= *vec.cbegin()) {
            vec.insert(vec.cend(), ele);
        } else {
            vec.insert(vec.cbegin(), ele);
        }
        return ;
    }
    if (ele >= *middle) {
        // 若middle不在末尾
        if (vec.cend() != middle+1) {
            // 若ele小于等于middle+1，在middle+1插入
            if (ele <= *(middle+1)) {
                vec.insert(middle+1, ele);
                return ;
            } else {
                af = {middle+1, vec.cend()};
                middle += af.size() / 2 + 1;
                af.clear();
                binaryInsert(vec, middle, ele);
            }
        } else {
            vec.insert(vec.cend(), ele);
            return ;
        }
    } else {
        // 若middle不在开头
        if (vec.cbegin() != middle) {
            // 若ele大于等于middle-1，在middle插入
            if (ele >= *(middle-1)) {
                vec.insert(middle, ele);
                return ;
            } else {
                bf = {vec.cbegin(), middle};
                middle -=  bf.size() / 2 + 1;
                bf.clear();
                binaryInsert(vec, middle, ele);
            }
        } else {
            vec.insert(vec.cbegin(), ele);
            return ;
        }
    }
}

double Solution4::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    if (nums1.empty() && nums2.empty()){
        median = 0;
    } else if (nums1.empty() && !nums2.empty()) {
        if (0 == nums2.size() % 2) {
            median = float(nums2.at(nums2.size() / 2 - 1) + nums2.at(nums2.size() / 2)) / 2;
        } else {
            median = nums2.at(nums2.size() / 2);
        }
    } else if (!nums1.empty() && nums2.empty()) {
        if (0 == nums1.size() % 2) {
            median = float(nums1.at(nums1.size() / 2 - 1) + nums1.at(nums1.size() / 2)) / 2;
        } else {
            median = nums1.at(nums1.size() / 2);
        }
    } else {
        // nums1 和 nums2 都不为空，使用二分插入组合
        for (auto it = nums2.cbegin(); it != nums2.cend(); ++it) {
            size_t half_size = nums1.size() / 2;
            auto middle_pos = nums1.cbegin() + half_size;
            binaryInsert(nums1, middle_pos, *it);
        }
        if (0 == nums1.size() % 2) {
            median = float(nums1.at(nums1.size() / 2 - 1) + nums1.at(nums1.size() / 2)) / 2;
        } else {
            median = nums1.at(nums1.size() / 2);
        }
    }
    return median;
}

void Solution4::display(vector<int> &vec) {
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return ;
}