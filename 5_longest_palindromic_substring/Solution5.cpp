//
// Created by GaoChong on 2019/10/11.
//

#include "Solution5.h"

string Solution5::longestPalindrome(string s) {
    for (string::const_iterator it = s.cbegin(); it != s.cend(); ++it) {
        string::const_iterator begin = it;
        string::const_iterator end = s.cend() - 1;
        stackClear();
        loop(begin, end);

    }
}

// 递归过程
void Solution5::loop(string::const_iterator begin, string::const_iterator end) {
    if (begin != end) {
        if (*begin != *end) {
            stackClear();
            loop(begin, end--);
        } else {
            temp_stack.push(*begin);
            if (begin+1 == end) {
                return;
            } else {
                loop(begin++, end--);
            }
        }
    } else {
        temp_stack.push(*begin);
        return;
    }
}

void Solution5::stackClear() {
    while (!temp_stack.empty()) {
        temp_stack.pop();
    }
}