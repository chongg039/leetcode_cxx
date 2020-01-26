//
// Created by GaoChong on 2020/1/26.
//

#ifndef LEETCODE_SOLUTION59_H
#define LEETCODE_SOLUTION59_H

#include <vector>

class Solution59
{
public:
    enum direction
    {
        RIGHT = 0,
        DOWN = 1,
        LEFT = 2,
        UPON = 3
    };

    static std::vector<std::vector<int>> generateMatrix(int n);

private:
    // 分别表示上边界、右边界、下边界、左边界的厚度
    static direction changeMove(int i, int j, int n, std::vector<int> &board, direction origin_move);
};


#endif //LEETCODE_SOLUTION59_H
