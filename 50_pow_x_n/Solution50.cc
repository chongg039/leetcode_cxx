//
// Created by GaoChong on 2020/1/13.
//

#include "Solution50.h"

double Solution50::myPow(double x, int n)
{
    double res = 1.0;
    for (int i = n; i; i /= 2) {
        if (i & 1) {
            res *= x;
        }
        x *= x;
    }
    return n >= 0 ? res : 1 / res;
}

double Solution50::myPowBf(double x, int n)
{
    if (0 == n) return 1;
    bool flag = false;
    bool of = false;
    double origin = x;
    if (n < 0) {
        if (INT_MIN == n) {
            n = -(n + 1);
            of = true;
        } else {
            n = -n;
        }
        flag = true;
    }
    std::vector<double> ma;
    std::vector<int> mb{1};
    if (flag) {
        ma.emplace_back(1 / x);
        x = 1 / x;
    } else {
        ma.emplace_back(x);
    }
    // 倍乘法，每次自己乘自己
    int i = 1;
    while (i < n) {
        int last = ma.size() - 1;
        while ((i > (INT_MAX - mb[last])) || i + mb[last] > n) --last;
        x *= ma[last];
        i += mb[last];
        ma.push_back(x);
        mb.push_back(i);
    }
    if (of) x *= 1 / origin;
    return x;
}