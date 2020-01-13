//
// Created by GaoChong on 2020/1/12.
//

#include "Solution48.h"

void Solution48::rotate(std::vector<std::vector<int>> &matrix)
{
    int n = matrix.size();
    int half = 0 == n % 2 ? n / 2 : n / 2 + 1;
    // 遍历一半行
    for (int i = 0; i < half; ++i) {
        // 这里每次扭转的列数，除了两头减去i，还要再减1，因为头尾会重复
        for (int j = i; j < n - i - 1; ++j) {
            int tmp1 = matrix[j][n - i - 1];
            int tmp2 = matrix[n - i - 1][n - j - 1];
            int tmp3 = matrix[n - j - 1][i];
            matrix[j][n - i - 1] = matrix[i][j];
            matrix[i][j] = tmp3;
            matrix[n - i - 1][n - j - 1] = tmp1;
            matrix[n - j - 1][i] = tmp2;
        }
    }
}
