//
// Created by GaoChong on 2020/1/16.
//

#include "Solution52.h"

int Solution52::totalNQueens(int n)
{
    int res = 0;
    std::vector<std::string> board(n, std::string(n, '.'));
    std::vector<int> visited(n, 0);
    std::vector<std::pair<int, int>> visited_slash;

    backtrace(&res, board, visited, visited_slash, 0, n);
    return res;
}

void Solution52::backtrace(int *res, std::vector<std::string> &board, std::vector<int> &visited,
                           std::vector<std::pair<int, int> > &visited_slash, int i, int n)
{
    if (i == n) {
        ++(*res);
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

bool Solution52::isOnASlash(std::vector<std::pair<int, int> > &visited_slash, int i, int j)
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