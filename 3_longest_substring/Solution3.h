//
// Created by chong on 2019/10/5.
//

#ifndef LEETCODE_SOLUTION3_H
#define LEETCODE_SOLUTION3_H

#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::find;
using std::max_element;

class Solution3 {
public:
    int lengthOfLongestSubString(string s);

private:
    bool isIn(int ele);
    vector<int> hasValue;
    vector<int> allMax;
};


#endif //LEETCODE_SOLUTION3_H
