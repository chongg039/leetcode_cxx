//
// Created by GaoChong on 2019/12/27.
//

#ifndef LEETCODE_SOLUTION32_H
#define LEETCODE_SOLUTION32_H

#include <stack>
#include <string>

class Solution32
{
public:
    static int longestValidParentheses(std::string &s);
    static bool isValid(std::string::iterator left, std::string::iterator right);
};


#endif //LEETCODE_SOLUTION32_H
