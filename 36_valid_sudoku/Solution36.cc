//
// Created by GaoChong on 2019/12/29.
//

#include "Solution36.h"

bool Solution36::isValidSudoku(std::vector<std::vector<char>> &board)
{
    std::map<int, std::vector<int>> row_check, col_check, box_check;
    std::vector<int>::iterator row_iter, col_iter, box_iter;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int box_idx = (i / 3) * 3 + (j / 3);
            if ('.' == board[i][j]) continue;
            else if (board[i][j] >= '0' && board[i][j] <= '9') {
                row_iter = std::find(row_check[i].begin(), row_check[i].end(), board[i][j]);
                col_iter = std::find(col_check[j].begin(), col_check[j].end(), board[i][j]);
                box_iter = std::find(box_check[box_idx].begin(), box_check[box_idx].end(),
                                                                board[i][j]);
                if (row_iter != row_check[i].end()) {
                    return false;
                } else {
                    row_check[i].push_back(board[i][j]);
                }

                if (col_iter != col_check[j].end()) {
                    return false;
                } else {
                    col_check[j].push_back(board[i][j]);
                }

                if (box_iter != box_check[box_idx].end()) {
                    return false;
                } else {
                    box_check[box_idx].push_back(board[i][j]);
                }
            }
        }
    }
    return true;
}