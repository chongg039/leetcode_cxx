//
// Created by GaoChong on 2019/12/18.
//

#include "Solution13.h"

int Solution13::romanToInt(std::string s)
{
    int x = 0;
    std::string::const_iterator iter(s.cbegin());
    while (iter != s.cend()) {
        switch (*iter) {
            case 'M':
                x += 1000;
                ++iter;
                break;
            case 'D':
                x += 500;
                ++iter;
                break;
            case 'C':
                if ('M' == *(iter + 1)) {
                    x += 900;
                    iter += 2;
                } else if ('D' == *(iter + 1)) {
                    x += 400;
                    iter += 2;
                } else {
                    x += 100;
                    ++iter;
                }
                break;
            case 'L':
                x += 50;
                ++iter;
                break;
            case 'X':
                if ('C' == *(iter + 1)) {
                    x += 90;
                    iter += 2;
                } else if ('L' == *(iter + 1)) {
                    x += 40;
                    iter += 2;
                } else {
                    x += 10;
                    ++iter;
                }
                break;
            case 'V':
                x += 5;
                ++iter;
                break;
            case 'I':
                if ('X' == *(iter + 1)) {
                    x += 9;
                    iter += 2;
                } else if ('V' == *(iter + 1)) {
                    x += 4;
                    iter += 2;
                } else {
                    x += 1;
                    ++iter;
                }
                break;
            default:
                return x;
        }
    }
    return x;
}