//
// Created by GaoChong on 2019/12/22.
//
#include <iostream>
#include <string>
#include <vector>
#include "../22_generate_parentheses/Solution22.h"

int main()
{
    int n = 3;
    std::vector<std::string> result = Solution22::generateParentheses(n);
    for (auto &it : result) {
        std::cout << it << std::endl;
    }

    std::cout << "next is dp" << std::endl;

    int m = 4;
    std::vector<std::string> result_dp = Solution22::generateParenthesesDP(m);
    for (auto &it : result_dp) {
        std::cout << it << std::endl;
    }
    return 0;
}
