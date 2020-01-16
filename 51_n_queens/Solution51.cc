//
// Created by GaoChong on 2020/1/16.
//

#include "Solution51.h"

std::vector<std::vector<std::string> > Solution51::solveQueens(int n)
{
    std::vector<std::vector<std::string>> res;
    std::vector<std::string> board(n, std::string(n, '.'));
    std::vector<int> visited(n, 0);
    std::vector<std::pair<int, int>> visited_slash;
    // 同一行、同一列、同一斜线都会互相攻击
    // 首先行列不能相同
    // 其次斜率不能为1或-1，，或直接检查左右上方是否为Q
    // 斜率的计算涉及到整型转换到浮点数
    backtrace(res, board, visited, visited_slash, 0, n);
    return res;
}

void Solution51::backtrace(std::vector<std::vector<std::string> > &res, std::vector<std::string> &board,
                           std::vector<int> &visited, std::vector<std::pair<int, int>> &visited_slash, int i, int n)
{
    if (i == n) {
        res.push_back(board);
        return;
    }
    for (int j = 0; j < n; ++j) {
        if (!visited[j] && !isOnASlash(visited_slash, i, j)) {
            board[i][j] = 'Q';
            visited[j] = 1;
            visited_slash.emplace_back(i, j);
            backtrace(res, board, visited, visited_slash, i + 1, n);
            visited[j] = 0;
            visited_slash.pop_back();
            board[i][j] = '.';
        }
    }
}

bool Solution51::isOnASlash(std::vector<std::pair<int, int> > &visited_slash, int i, int j)
{
    bool flag = false;
    if (visited_slash.empty()) return flag;
    for (std::pair<int, int> &p : visited_slash) {
        // 这里注意不能使用int，否则会舍弃小数位导致错误
        double k = static_cast<double>(j - p.second) / static_cast<double>(i - p.first);
        if (1 == k || -1 == k) {
            flag = true;
            break;
        }
    }
    return flag;
}

bool Solution51::isValid(std::vector<std::string> &board, int i, int j) {
    // 检查右上方
    for (int m = i - 1, n = j + 1; m >= 0 && n < board.size(); --m, ++n) {
        if ('Q' == board[m][n]) return false;
    }
    // 检查左上方
    for (int m = i - 1, n = j - 1; m >= 0 && n >= 0; --m, --n) {
        if ('Q' == board[m][n]) return false;
    }
    return true;
}