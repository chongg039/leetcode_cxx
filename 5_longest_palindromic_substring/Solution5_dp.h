//
// Created by GaoChong on 2019/10/17.
//

#ifndef LEETCODE_SOLUTION5_DP_H
#define LEETCODE_SOLUTION5_DP_H

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


class Solution5_dp {
public:
    string longestPalindrome(string s);

private:
    vector<vector<int>> tempArray;
    void printVec(vector<vector<int>> vec);
};


#endif //LEETCODE_SOLUTION5_DP_H
