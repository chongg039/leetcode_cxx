//
// Created by GaoChong on 2019/12/21.
//

#include "Solution20.h"

bool Solution20::isValid(std::string &s)
{
    // 运用栈先进后出的思想
    // 注意判定")]}"不能先出现
    if (s.empty()) return true;
    if (0 != s.size() % 2) return false;
    std::stack<char> bf;
    for (auto &c : s) {
        switch (c) {
            case '(':
            case '[':
            case '{':
                bf.push(c);
                break;
            case ')':
                if (!bf.empty() && '(' == bf.top()) {
                    bf.pop();
                } else return false;
                break;
            case ']':
                if (!bf.empty() && '[' == bf.top()) {
                    bf.pop();
                } else return false;
                break;
            case '}':
                if (!bf.empty() && '{' == bf.top()) {
                    bf.pop();
                } else return false;
                break;
            default:
                return false;
        }
    }
    return bf.empty();
}