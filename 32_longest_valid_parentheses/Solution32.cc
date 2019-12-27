//
// Created by GaoChong on 2019/12/27.
//

#include "Solution32.h"

int Solution32::longestValidParentheses(std::string &s)
{
    int max = 0;
    if (s.empty() || 1 == s.size()) return max;
    std::string::iterator left(s.begin());
    while (*left != '(' && left != s.end()) ++left;
    if (left == s.end()) return max;
    std::string::iterator right(s.end() - 1);
    while (*right != ')' && right != left) --right;
    std::string::iterator outer_most(right);
    while (left != right) {
        while (right != left) {
            if (isValid(left, right)) {
                max = (right - left + 1) > max ? int(right - left + 1) : max;
                break;
            } else {
                --right;
                while (*right != ')' && right != left) --right;
            }
        }
        right = outer_most;
        ++left;
        while (*left != '(' && left != right) ++left;
    }
    return max;
}

bool Solution32::isValid(std::string::iterator left, std::string::iterator right)
{
    // 运用栈先进后出的思想
    // 注意判定")]}"不能先出现
    std::stack<char> bf;
    for (;;) {
        switch (*left) {
            case '(':
                bf.push(*left);
                break;
            case ')':
                if (!bf.empty() && '(' == bf.top()) {
                    bf.pop();
                } else return false;
                break;
            default:
                return false;
        }
        if (left == right) break;
        else {
            ++left;
            continue;
        }
    }
    return bf.empty();
}