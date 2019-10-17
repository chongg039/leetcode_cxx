//
// Created by GaoChong on 2019/10/11.
//

#ifndef LEETCODE_SOLUTION5_H
#define LEETCODE_SOLUTION5_H

#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::distance;

class Solution5 {
public:
    string longestPalindrome(string s);

private:
    void outLoop(string::const_iterator begin, string::const_iterator end);
    static bool innerLoop(string::const_iterator begin, string::const_iterator end);
    string input_s;
    string max_str;
};


#endif //LEETCODE_SOLUTION5_H
