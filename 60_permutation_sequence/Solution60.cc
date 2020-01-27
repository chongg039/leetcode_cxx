//
// Created by GaoChong on 2020/1/27.
//

#include "Solution60.h"

std::string Solution60::getPermutation(int n, int k)
{
    // 递归
    std::string s, res;
    for (int i = 0; i < n; ++i) {
//        s.push_back(i + 1);
        s += std::to_string(i + 1);
    }
    while (n > 0) {
        int outer = (k - 1) / factorial(n - 1), inner = k - outer * factorial(n - 1);
        res += backtrack(s, outer);
        --n;
        if (0 == inner) {
            res += s;
            break;
        } else {
            k = inner;
        }
    }
    return res;
}

char Solution60::backtrack(std::string &s, int k)
{
    char c = s[k];
    s.erase(k, 1);
    return c;
}

int Solution60::factorial(int k)
{
    if (0 == k) {
        return 1;
    } else {
        return k * factorial(k - 1);
    }
}