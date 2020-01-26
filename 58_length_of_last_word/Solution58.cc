//
// Created by GaoChong on 2020/1/26.
//

#include "Solution58.h"

int Solution58::lengthOfLastWord(std::string &s)
{
    int res = 0;
    for (auto rit = s.rbegin(); rit != s.rend(); ++rit) {
        if (' ' == *rit) {
            if (0 == res) {
                continue;
            } else {
                break;
            }
        } else {
            ++res;
        }
    }
    return res;
}