//
// Created by chong on 2019/10/6.
//

#include "Solution4.h"

// https://leetcode-cn.com/problems/median-of-two-sorted-arrays/solution/4-xun-zhao-liang-ge-you-xu-shu-zu-de-zhong-wei-shu/
double Solution4::findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
{
    int n = nums1.size(), m = nums2.size();
    if (n > m) {
        // 用来保证nums1一定最短的方法
        return findMedianSortedArrays(nums2, nums1);
    }
    // 为了保证奇偶情况的相同，虚拟插入#，nums1长度变为了2n
    int l_max1 = 0, l_max2 = 0, r_min1 = 0, r_min2 = 0, lo = 0, hi = 2 * n;
    while (lo <= hi) {
        int c1 = (lo + hi) / 2;
        int c2 = m + n - c1;

        l_max1 = (0 == c1) ? INT_MIN : nums1[(c1 - 1) / 2];
        r_min1 = (2 * n == c1) ? INT_MAX : nums1[c1 / 2];
        l_max2 = (0 == c2) ? INT_MIN : nums2[(c2 - 1) / 2];
        r_min2 = (2 * m == c2) ? INT_MAX : nums2[c2 / 2];

        if (l_max1 > r_min2) {
            hi = c1 - 1;
        } else if (l_max2 > r_min1) {
            lo = c1 + 1;
        } else {
            break;
        }
    }
    return (std::max(l_max1, l_max2) + std::min(r_min1, r_min2)) / 2.0;
}