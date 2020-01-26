//
// Created by GaoChong on 2020/1/26.
//

#include "Solution59.h"

std::vector<std::vector<int> > Solution59::generateMatrix(int n)
{
    std::vector<int> board(4, 0);
    std::vector<std::vector<int>> res(n, std::vector<int>(n, -1));
    // 遍历
    int i = 0, j = 0, count = 0;
    // 初始移动方向
    direction move{RIGHT};
    while (count < n * n) {
        ++count;
        res[i][j] = count;
        move = changeMove(i, j, n, board, move);
        if (RIGHT == move) {
            ++j;
        } else if (DOWN == move) {
            ++i;
        } else if (LEFT == move) {
            --j;
        } else if (UPON == move) {
            --i;
        }
    }
    return res;
}

Solution59::direction Solution59::changeMove(int i, int j, int n, std::vector<int> &board, direction origin_move)
{
    // 这里的n应该是当前边界
    // 可以使用一圈后边界再减1，因为不会冲突应该，也不需要考虑两侧相加
    // 边界厚度应该使用数组保存
    if (RIGHT == origin_move && j == n - board[1] - 1) {
        ++board[0];
        return DOWN;
    } else if (DOWN == origin_move && i == n - board[2] - 1) {
        ++board[1];
        return LEFT;
    } else if (LEFT == origin_move && j == board[3]) {
        ++board[2];
        return UPON;
    } else if (UPON == origin_move && i == board[0]) {
        ++board[3];
        return RIGHT;
    } else {
        return origin_move;
    }
}