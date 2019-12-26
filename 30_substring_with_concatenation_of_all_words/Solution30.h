//
// Created by GaoChong on 2019/12/26.
//

#ifndef LEETCODE_SOLUTION30_H
#define LEETCODE_SOLUTION30_H

#include <map>
#include <string>
#include <vector>

class Solution30
{
public:
    static std::vector<int> findSubstring(std::string &s, std::vector<std::string> &words);

    static bool is_match_all(std::map<std::string, int> &count_map);
};


#endif //LEETCODE_SOLUTION30_H
