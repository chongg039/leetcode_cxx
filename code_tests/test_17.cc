//
// Created by GaoChong on 2019/12/20.
//
#include <iostream>
#include <vector>
#include <string>
#include "../17_letter_combine_of_phone_number/Solution17.h"

int main()
{
    std::string s{"23"};
    std::vector<std::string> results = Solution17::letterCombinations(s);
    for (auto &result : results) {
        std::cout << result << ", ";
    }
    std::cout << std::endl;
    return 0;
}

