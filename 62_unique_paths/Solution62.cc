//
// Created by GaoChong on 2020/1/27.
//

#include "Solution62.h"

int Solution62::uniquePaths(int m, int n)
{
    if (m <= 1 || n <= 1) return 1;
    std::vector<std::vector<int>> paths(n, std::vector<int>(m, 2));
    // 初始化为当前可走的次数
    init(paths, m, n);
    display(paths);
    int res = 1, i = 0, j = 0;
    res = search(i, j, m, n, paths, res);
    return res;
}

int Solution62::search(int i, int j, int m, int n, std::vector<std::vector<int>> &paths, int count)
{
    int new_count = 0;
    if (0 == paths[i][j]) {
        new_count = count;
    } else {
        // 进行所有可能的移动
        if (2 == paths[i][j]) {
            // 向右
            int next1 = search(i, j + 1, m, n, paths, count);
            // 向下
            int next2 = search(i + 1, j, m, n, paths, count);
            new_count = count * (next1 + next2);
        } else {
            if ((0 == i && m - 1 != j) || n - 1 == i) {
                // 向右移
                int next = search(i, j + 1, m, n, paths, count);
                new_count = count * next;
            } else if ((0 == j && n - 1 != i) || m - 1 == j) {
                // 向下移
                int next = search(i + 1, j, m, n, paths, count);
                new_count = count * next;
            }
        }
    }
    return new_count;
}

void Solution62::init(std::vector<std::vector<int>> &paths, int m, int n)
{
    // 左上、右上、左下、右下
    paths[0][0] = 2;
    paths[0][m - 1] = 1;
    paths[n - 1][0] = 1;
    paths[n - 1][m - 1] = 0;
    // 左边和右边
    for (int i = 1; i < n - 1; ++i) {
        paths[i][0] = 2;
        paths[i][m - 1] = 1;
    }
    // 上边和下边
    for (int j = 1; j < m - 1; ++j) {
        paths[0][j] = 2;
        paths[n - 1][j] = 1;
    }
}

void Solution62::display(const std::vector<std::vector<int>> &paths)
{
    for (auto &row : paths) {
        for (auto &it : row) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
}