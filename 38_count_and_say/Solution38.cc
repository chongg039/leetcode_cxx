//
// Created by GaoChong on 2019/12/31.
//

#include "Solution38.h"

std::string Solution38::countAndSay(int n)
{
    std::string result{"1"};
    --n;
    while (n > 0) {
        int num = 1;
        std::string tmp;
        for (int i = 0; i < result.size(); ++i) {
            if (i + 1 < result.size() && result[i] == result[i + 1]) {
                ++num;
            } else {
                tmp += std::to_string(num) + result[i];
                num = 1;
            }
        }
        result = tmp;
        --n;
    }
    return result;
}