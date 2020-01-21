//
// Created by GaoChong on 2020/1/16.
//

#include "Solution54.h"

std::vector<int> Solution54::spiralOrder(std::vector<std::vector<int> > &matrix)
{
    std::vector<int> res;
    if (matrix.empty()) return res;
    int m = matrix.size(), n = matrix[0].size();
    int i = 0, j = 0, top = 0, right = 0, bottom = 0, left = 0;
    bool i_reverse = false, j_reverse = false;
    while (res.size() < m * n) {
        res.push_back(matrix[i][j]);
        if (j < n - right - 1 && !j_reverse) {
            ++j;
        } else if (j == n - right - 1) {
            if (i == 0 + top) {
                ++top;
                j_reverse = !j_reverse;
            }
            if (i < m - bottom - 1) {
                ++i;
            } else if (i == m - bottom - 1) {
                ++right;
//                ++top;
                --j;
                i_reverse = !i_reverse;
            }
        } else if (j > 0 + left && j_reverse) {
            --j;
        } else if (j == 0 + left) {
//            ++right;
            if (i == m - bottom - 1) {
                ++bottom;
                j_reverse = !j_reverse;
            }
            if (i > 0 + top) {
                --i;
            } else if (i == 0 + top) {
//                ++bottom;
                ++left;
                ++j;
                i_reverse = !i_reverse;
            }
        }
    }
    return res;
}