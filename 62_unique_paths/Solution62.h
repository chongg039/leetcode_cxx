//
// Created by GaoChong on 2020/1/27.
//

#ifndef LEETCODE_SOLUTION62_H
#define LEETCODE_SOLUTION62_H

#include <iostream>
#include <vector>

class Solution62
{
public:
    static int uniquePaths(int m, int n);

private:
    static void init(std::vector<std::vector<int>> &paths, int m, int n);

    static int search(int i, int j, int m, int n, std::vector<std::vector<int>> &paths, int count);

    static void display(const std::vector<std::vector<int>> &paths);

};


#endif //LEETCODE_SOLUTION62_H
