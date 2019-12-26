//
// Created by GaoChong on 2019/12/25.
//

#include "Solution29.h"

int Solution29::divide(int dividend, int divisor)
{
    if (0 == dividend) return 0;
    if (1 == divisor) return dividend;
    if (-1 == divisor) {
        if (INT_MIN == dividend) return INT_MAX;
        else return -dividend;
    }
    bool flag = true;
    bool is_overflow = false;
    int dividend_abs = dividend;
    int divisor_abs = divisor;
    if (dividend < 0) {
        flag = !flag;
        if (INT_MIN == dividend) {
            dividend_abs = INT_MAX;
            is_overflow = true;
        } else {
            dividend_abs = -dividend_abs;
        }
    }
    if (divisor < 0) {
        flag = !flag;
        if (INT_MIN == divisor && INT_MIN == dividend) return 1;
        else if (INT_MIN == divisor && INT_MIN != dividend) return 0;
        else divisor_abs = -divisor_abs;
    }
    if (dividend_abs < divisor_abs) return 0;
    int quotient = 0, multiply = 0, tmp_divisor = divisor_abs;
    // 倍增法
    while (dividend_abs >= divisor_abs) {
        if (dividend_abs >= tmp_divisor) {
            dividend_abs -= tmp_divisor;
            // equal std::pow
            if (0 == multiply) quotient += 1;
            else quotient += 2 << (multiply - 1);
            ++multiply;
            tmp_divisor = divisor_abs << multiply;
        } else {
            multiply = 0;
            tmp_divisor = divisor_abs;
        }
    }
    // 检测溢出
    if (is_overflow && dividend_abs + 1 >= divisor_abs) {
        ++quotient;
    }
    return flag ? quotient : -quotient;
}


int Solution29::divide_bf(int dividend, int divisor)
{
    if (0 == dividend) return 0;
    if (1 == divisor) return dividend;
    if (-1 == divisor) {
        if (INT_MIN == dividend) return INT_MAX;
        else return -dividend;
    }
    bool flag = true;
    bool is_overflow = false;
    int dividend_abs = dividend;
    int divisor_abs = divisor;
    if (dividend < 0) {
        flag = !flag;
        if (INT_MIN == dividend) {
            dividend_abs = INT_MAX;
            is_overflow = true;
        } else {
            dividend_abs = -dividend_abs;
        }
    }
    if (divisor < 0) {
        flag = !flag;
        divisor_abs = -divisor_abs;
    }
    if (dividend_abs < divisor_abs) return 0;
    int quotient = 0;
    while (dividend_abs >= divisor_abs) {
        dividend_abs -= divisor_abs;
        ++quotient;
    }
    // 检测溢出
    if (is_overflow && dividend_abs + 1 >= divisor_abs) {
        ++quotient;
    }
    return flag ? quotient : -quotient;
}