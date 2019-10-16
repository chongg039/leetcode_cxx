//
// Created by GaoChong on 2019/10/11.
//

#include "Solution5.h"

string Solution5::longestPalindrome(string s) {
    if (s.empty()) return "";
    input_s = s;
    max_str = "";
    for (string::const_iterator it = input_s.cbegin(); it != input_s.cend(); ++it) {
        string::const_iterator begin = it;
        string::const_iterator end = input_s.cend() - 1;
        outLoop(begin, end);
    }
    return max_str;
}

// 递归过程
void Solution5::outLoop(string::const_iterator begin, string::const_iterator end) {
    while (*begin != *end) {
        end--;
    }
    string::const_iterator last = end;
    if (innerLoop(begin, end)) {
        size_t begin_idx = distance(input_s.cbegin(), begin);
        size_t end_idx = distance(input_s.cbegin(), last);
        string sub_max = input_s.substr(begin_idx, end_idx-begin_idx+1);
        max_str = (sub_max.length() > max_str.length()) ? sub_max : max_str;
        return ;
    } else {
        return outLoop(begin, end-1);
    }
}

bool Solution5::innerLoop(string::const_iterator begin, string::const_iterator end) {
    if (*begin == *end && (1 < end - begin)) {
        return innerLoop(begin+1, end-1);
    } else return begin == end || (begin + 1 == end && *begin == *end);
}