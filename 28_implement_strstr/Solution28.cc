//
// Created by GaoChong on 2019/12/25.
//

#include "Solution28.h"

int Solution28::strStr(std::string haystack, std::string needle)
{
    if (needle.empty()) return 0;
    int idx = -1;
    if (haystack.empty() || needle.size() > haystack.size()) return idx;
    for (std::string::size_type i = 0; i < haystack.size(); ++i) {
        if (haystack.size() - i < needle.size()) return idx;
        std::string::size_type tmp_i = i;
        bool flag = false;
        for (std::string::size_type j = 0; j < needle.size(); ++j) {
            if (needle[j] == haystack[tmp_i]) {
                flag = true;
                ++tmp_i;
            } else {
                flag = false;
                break;
            }
        }
        if (flag) {
            idx = i;
            break;
        }
        else continue;
    }
    return idx;
}