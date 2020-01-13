//
// Created by GaoChong on 2020/1/12.
//
#include <iostream>
#include <vector>
#include "../48_rotate_image/Solution48.h"

int main()
{
    std::vector<std::vector<int>> matrix{
//            {1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}
            {5,  1,  9,  11},
            {2,  4,  8,  10},
            {13, 3,  6,  7},
            {15, 14, 12, 16}
    };
    Solution48::rotate(matrix);
    for (auto &its : matrix) {
        for (auto &it : its) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}