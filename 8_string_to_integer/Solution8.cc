//
// Created by GaoChong on 2019/12/12.
//

#include "Solution8.h"

int Solution8::myAtoi(const std::string &str)
{
    int x = 0;
    bool flag = true;
    std::string::const_iterator str_iter;
    for (str_iter = str.begin(); str_iter != str.end(); ++str_iter) {
        if (' ' == *str_iter) {
            if (0 == x) continue;
            else if (x > INT_MAX / 10 || (x == INT_MAX / 10 && *str_iter > 55)) return flag ? INT_MAX : INT_MIN;
            else return flag ? x : -x;
        } else if ('-' == *str_iter) {
            if (0 == x) {
                if (flag) {
                    flag = false;
                    continue;
                } else {
                    return 0;
                }
            } else {
                if (x > INT_MAX / 10 || (x == INT_MAX / 10 && *str_iter > 55)) return flag ? INT_MAX : INT_MIN;
                else return flag ? x : -x;
            }
        } else if ('+' == *str_iter) {
            if (0 == x) {
                if (flag) {
                    flag = true;
                    continue;
                } else {
                    return 0;
                }
            } else {
                if (x > INT_MAX / 10 || (x == INT_MAX / 10 && *str_iter > 55)) return flag ? INT_MAX : INT_MIN;
                else return flag ? x : -x;
            }
        }
        if (*str_iter < 48 || *str_iter > 57) {
            if (0 == x) return 0;
            else {
                if (x > INT_MAX / 10 || (x == INT_MAX / 10 && *str_iter > 55)) return flag ? INT_MAX : INT_MIN;
                else return flag ? x : -x;
            }
        } else {
            if (x > INT_MAX / 10 || (x == INT_MAX / 10 && *str_iter > 55)) return flag ? INT_MAX : INT_MIN;
                // or use (*str_iter - '0')
            else x = x * 10 + (*str_iter - 48);
        }
    }
    return flag ? x : -x;
}