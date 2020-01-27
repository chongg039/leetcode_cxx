//
// Created by GaoChong on 2020/1/27.
//

#ifndef LEETCODE_SOLUTION60_H
#define LEETCODE_SOLUTION60_H

#include <string>

class Solution60
{
public:
    static std::string getPermutation(int n, int k);

private:
    static char backtrack(std::string &s, int k);
    static int factorial(int k);
};


#endif //LEETCODE_SOLUTION60_H
