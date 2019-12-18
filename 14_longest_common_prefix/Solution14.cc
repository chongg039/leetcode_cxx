//
// Created by GaoChong on 2019/12/18.
//

#include "Solution14.h"

std::string Solution14::longestCommonPrefix(const std::vector<std::string> &strs)
{
    std::string longest_prefix;
    if (strs.empty()) return longest_prefix;
    size_t max_length = strs[0].length();
    for (auto &str : strs) {
        max_length = str.length() > max_length ? max_length : str.length();
    }
    if (0 == max_length) return longest_prefix;
    for (size_t i = 0; i < max_length; ++i) {
        char c = strs[0][i];
        bool flag = false;
        for (auto &str : strs) {
            if (c == str[i]) {
                flag = true;
                continue;
            } else {
                flag = false;
                break;
            }
        }
        if (flag) longest_prefix += c; else break;
    }
    return longest_prefix;
}