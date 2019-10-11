//
// Created by GaoChong on 2019/10/11.
//

#ifndef LEETCODE_SOLUTION5_H
#define LEETCODE_SOLUTION5_H

#include <string>
#include <stack>
#include <vector>

using std::string;
using std::vector;
using std::stack;

class Solution5 {
public:
    string longestPalindrome(string s);

private:
    void loop(string::const_iterator begin, string::const_iterator end);
    void stackClear();
    vector<int> max_lens;
    stack<char> temp_stack;
};


#endif //LEETCODE_SOLUTION5_H
