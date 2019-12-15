//
// Created by GaoChong on 2019/12/15.
//

#include "Solution9.h"

bool Solution9::isPalindrome(int x)
{
    if (0 == x) return true;
    // negative or ten times
    if (x < 0 || 0 == x % 10) return false;
    int temp_x = x;
    int reverse_x = 0;
    while (x) {
        // 操作int一定注意上溢和下溢的情况
        if (reverse_x > INT_MAX / 10 || (reverse_x == INT_MAX / 10 && x % 10 > 7)) return false;
        reverse_x = reverse_x * 10 + x % 10;
        x /= 10;
    }
    return temp_x == reverse_x;
}