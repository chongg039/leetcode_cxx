//
// Created by GaoChong on 2019/12/27.
//

#include "Solution32.h"

int Solution32::longestValidParentheses(std::string &s)
{
    // 技巧解法，先左遍历，再右遍历
    // 时间O(n)，空间O(1)
    int left = 0, right = 0, max_len = 0;
    for (int i = 0; i < s.length(); ++i) {
        if ('(' == s[i]) ++left;
        else ++right;
        if (left == right) max_len = 2 * right > max_len ? 2 * right : max_len;
        else if (right > left) left = right = 0;
    }
    left = right = 0;
    for (int i = s.length() - 1; i > -1; --i) {
        if ('(' == s[i]) ++left;
        else ++right;
        if (left == right) max_len = 2 * right > max_len ? 2 * right : max_len;
        else if (left > right) left = right = 0;
    }
    return max_len;
}

int Solution32::longestValidParenthesesDp(std::string &s)
{
    // 时间O(n)，空间O(n)
    int max_len = 0;
    std::vector<int> dp(s.length(), 0);
    for (std::string::size_type i = 1; i < s.length(); ++i) {
        if (')' == s[i]) {
            if ('(' == s[i - 1]) {
                dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
            } else if (i - dp[i - 1] > 0 && '(' == s[i - dp[i - 1] - 1]) {
                dp[i] = dp[i - 1] + (i - dp[i - 1] >= 2 ? dp[i - dp[i - 1] - 2] : 0) + 2;
            }
            max_len = dp[i] > max_len ? dp[i] : max_len;
        }
    }
    return max_len;
}

int Solution32::longestValidParenthesesBf(std::string &s)
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