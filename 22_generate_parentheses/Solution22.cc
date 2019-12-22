//
// Created by GaoChong on 2019/12/22.
//

#include "Solution22.h"

std::vector<std::string> Solution22::generateParentheses(int n)
{
    // 闭合数: S[n] = '(' + S[c] + ')' + S[n-c-1]
    std::vector<std::string> result;
    if (0 == n) {
        result.emplace_back("");
    } else {
        for (int c = 0; c < n; ++c) {
            for (std::string &left : generateParentheses(c)) {
                for (std::string &right : generateParentheses(n - c - 1)) {
                    std::string part("(" + left + ")");
                    result.push_back(part + right);
                }
            }
        }
    }
    return result;
}

std::vector<std::string> Solution22::generateParenthesesDP(int n)
{
    std::map<int, std::vector<std::string>> book;
    book[0].push_back("");
    for (int i = 1; i <= n; ++i) {
        for (int c = 0; c < i; ++c) {
            for (std::string &left : book[c]) {
                for (std::string &right : book[i - c - 1]) {
                    std::string part("(" + left + ")");
                    book[i].push_back(part + right);
                }
            }
        }
    }
    return book[n];
}