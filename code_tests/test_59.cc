//
// Created by GaoChong on 2020/1/26.
//
#include <iostream>
#include <vector>
#include "../59_spiral_matrix_2/Solution59.h"

int main()
{
    int n = 3;
    auto res = Solution59::generateMatrix(n);
    for (auto &re : res) {
        for (auto &it : re) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}