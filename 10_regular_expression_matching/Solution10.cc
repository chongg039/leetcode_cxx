//
// Created by GaoChong on 2019/12/15.
//

#include "Solution10.h"

bool Solution10::isMatch(const std::string &s, const std::string &p)
{
    if (0 == p.length()) return 0 == s.length();
    bool match = (s.length() > 0 && (s[0] == p[0] || p[0] == '.'));
    if (p.length() > 1 && p[1] == '*') {
        // 如果匹配0次，跳过这两个字符进行下一步判断
        // 如果匹配多次，将s向后移动一位，继续判断
        return isMatch(s, p.substr(2)) || (match && isMatch(s.substr(1), p));
    } else {
        return match && isMatch(s.substr(1), p.substr(1));
    }
}

bool Solution10::isMatchDp(const std::string &s, const std::string &p)
{
//   （一）状态
//    f[i][j]表示s1的前i个字符，和s2的前j个字符，能否匹配
//   （二）转移方程
//    如果s1的第 i 个字符和s2的第 j 个字符相同，或者s2的第 j 个字符为 “.”
//              f[i][j] = f[i - 1][j - 1]
//    如果s2的第 j 个字符为 *
//      若s2的第 j 个字符匹配 0 次第 j - 1 个字符
//              f[i][j] = f[i][j - 2] 比如(ab, abc*)
//      若s2的第 j 个字符匹配至少 1 次第 j - 1 个字符,
//              f[i][j] = f[i - 1][j] and s1[i] == s2[j - 1] or s[j - 1] == '.'
//      这里注意不是 f[i - 1][j - 1]， 举个例子就明白了 (abbb, ab*) f[4][3] = f[3][3]
//   （三）初始化
//    f[0][i] = f[0][i - 2] && s2[i] == *
//            即s的前0个字符和p的前i个字符能否匹配
//   （四）结果
//    f[m][n]
    size_t m = s.length(), n = p.length();
    std::vector<std::vector<int>> states(m + 1, std::vector<int>(n + 1, 0));
    states[0][0] = 1;

    // 注意访问越界的情况，会报heap-buffer-overflow
    for (size_t i = 2; i <= n; i++) {
        states[0][i] = states[0][i - 2] && p[i - 1] == '*';
    }

    for (size_t i = 1; i <= m; ++i) {
        for (size_t j = 1; j <= n; ++j) {
            if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
                states[i][j] = states[i - 1][j - 1];
            }

            if (p[j - 1] == '*' && j >= 2) {
                if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                    states[i][j] = states[i - 1][j] || states[i][j - 2];
                } else {
                    states[i][j] = states[i][j - 2];
                }
            }
        }
    }
    return states[m][n];
}