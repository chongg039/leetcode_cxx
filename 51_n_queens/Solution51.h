//
// Created by GaoChong on 2020/1/16.
//

#ifndef LEETCODE_SOLUTION51_H
#define LEETCODE_SOLUTION51_H

#include <vector>
#include <string>

class Solution51
{
public:
    static std::vector<std::vector<std::string>> solveQueens(int n);

    static void
    backtrace(std::vector<std::vector<std::string>> &res, std::vector<std::string> &board, std::vector<int> &visited,
              std::vector<std::pair<int, int>> &visited_slash, int i, int n);
    static bool isOnASlash(std::vector<std::pair<int, int>> &visited_slash, int i, int j);
    static bool isValid(std::vector<std::string> &board, int i, int j);
};


#endif //LEETCODE_SOLUTION51_H
