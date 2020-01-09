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

bool Solution44::isMatchDp(const std::string &s, const std::string &p)
{
    size_t m = s.length(), n = p.length();
    std::vector<std::vector<int>> states(m + 1, std::vector<int>(n + 1, 0));
    states[0][0] = 1;

    for (size_t i = 1; i <= n; i++) {
        states[0][i] = states[0][i - 1] && p[i - 1] == '*';
    }

    for (size_t i = 1; i <= m; ++i) {
        for (size_t j = 1; j <= n; ++j) {
            // 这里还是采用往前看一位来讨论的情况
            if (s[i - 1] == p[j - 1] || p[j - 1] == '?') {
                states[i][j] = states[i - 1][j - 1];
            }

            if (p[j - 1] == '*') {
                // 左边是匹配零次，右边是匹配一次
                states[i][j] = states[i][j - 1] || states[i - 1][j];
            }
        }
    }
    return states[m][n];
}