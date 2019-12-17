//
// Created by GaoChong on 2019/12/17.
//

#include "Solution11.h"

int Solution11::maxArea(std::vector<int> &height)
{
    int max = 0;
    for (int lp = 0; lp < height.size() - 1; ++lp) {
        for (int rp = lp + 1; rp < height.size(); ++rp) {
            int width = height[lp] >= height[rp] ? height[rp] : height[lp];
            int length = rp - lp;
            max = max >= width * length ? max : width * length;
        }
    }
    return max;
}

int Solution11::maxArea2(std::vector<int> &height)
{
    // 使用两个指针
    // 移动判断：    两边必定有一边长一边短，向内部移动长度一定会减少
    //             但是向着内侧移动短边那一边的指针可能会产生正面的影响
    int max = 0, length = 0, width = 0;
    int lp = 0, rp = height.size() - 1;
    while (lp != rp) {
        length = rp - lp;
        width = height[lp] >= height[rp] ? height[rp] : height[lp];
        max = max >= width * length ? max : width * length;
        if (height[lp] >= height[rp]) {
            --rp;
        } else {
            ++lp;
        }
    }
    return max;
}