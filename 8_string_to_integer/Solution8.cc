//
// Created by GaoChong on 2019/12/12.
//

#include "Solution8.h"

int Solution8::myAtoi(const std::string &str)
{
    int x = 0;
    int sign = 0;
    bool has_num = false;
    for (char iter : str) {
        if (' ' == iter) {
            if (!has_num && 0 == sign) continue;
            else if (x > INT_MAX / 10 || (x == INT_MAX / 10 && iter > 55)) return sign < 2 ? INT_MAX : INT_MIN;
            else return sign < 2 ? x : -x;
        } else if ('+' == iter) {
            if (0 == sign && !has_num) {
                sign = 1;
                continue;
            } else if (x > INT_MAX / 10 || (x == INT_MAX / 10 && iter > 55)) {
                return sign < 2 ? INT_MAX : INT_MIN;
            } else return sign < 2 ? x : -x;
        } else if ('-' == iter && !has_num) {
            if (0 == sign) {
                sign = 2;
                continue;
            } else if (x > INT_MAX / 10 || (x == INT_MAX / 10 && iter > 55)) {
                return sign < 2 ? INT_MAX : INT_MIN;
            } else return sign < 2 ? x : -x;
        } else if (iter < 48 || iter > 57) {
            if (x > INT_MAX) return sign < 2 ? INT_MAX : INT_MIN;
            else return sign < 2 ? x : -x;
        } else {
            if (x > INT_MAX / 10 || (x == INT_MAX / 10 && iter > 55)) return sign < 2 ? INT_MAX : INT_MIN;
            else {
                x = x * 10 + (iter - 48);
                has_num = true;
            }
        }
    }
    return sign < 2 ? x : -x;
}