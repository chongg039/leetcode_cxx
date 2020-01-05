//
// Created by GaoChong on 2020/1/4.
//

#include "Solution44.h"

bool Solution44::isMatch(const std::string &s, const std::string &p)
{
    if (p.empty()) return s.empty();
    if ("*" == p) return true;
    if (1 == p.length() && 1 < s.length()) return false;
    if (s.empty() && ('*' == p[0])) return isMatch(s, p.substr(1));
    bool match = (!s.empty() && (p[0] == s[0] || p[0] == '?')) || ('*' == p[0]);
//    if ('*' == p[0]) return (match && isMatch(s.substr(1), p)) || (match && isMatch(s, p.substr(1)));
    if (p[0] == '*') {
        return (match && isMatch(s, p.substr(1))) || (match && isMatch(s.substr(1), p));
    } else {
        return match && isMatch(s.substr(1), p.substr(1));
    }
}