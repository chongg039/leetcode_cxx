//
// Created by GaoChong on 2020/1/16.
//

#ifndef LEETCODE_SOLUTION52_H
#define LEETCODE_SOLUTION52_H

#include <vector>
#include <string>

class Solution52
{
public:
    static int totalNQueens(int n);

    static void
    backtrace(int *res, std::vector<std::string> &board, std::vector<int> &visited,
              std::vector<std::pair<int, int>> &visited_slash, int i, int n);

    static bool isOnASlash(std::vector<std::pair<int, int>> &visited_slash, int i, int j);
};


#endif //LEETCODE_SOLUTION52_H
