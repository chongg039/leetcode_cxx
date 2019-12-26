//
// Created by GaoChong on 2019/12/26.
//
#include <iostream>
#include <string>
#include <vector>
#include "../30_substring_with_concatenation_of_all_words/Solution30.h"

int main()
{
    std::string s("aaaaaaaa");
    std::vector<std::string> words({"aa", "aa", "aa"});
    auto result = Solution30::findSubstring(s, words);
    for (auto &item : result) {
        std::cout << item << std::endl;
    }
    return 0;
}

