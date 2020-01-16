//
// Created by GaoChong on 2020/1/16.
//
#include <iostream>
#include <vector>
#include <string>
#include "../51_n_queens/Solution51.h"

int main()
{
    auto res = Solution51::solveQueens(5);
    int count = 0;
    for (auto &re : res) {
        for (auto &it : re) {
            for (char c : it) {
                std::cout << c << " ";
            }
            std::cout << std::endl;
        }
        ++count;
        std::cout << std::endl;
    }
    std::cout << count << std::endl;
    return 0;
}

