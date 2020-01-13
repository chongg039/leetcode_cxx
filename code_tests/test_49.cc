//
// Created by GaoChong on 2020/1/13.
//
#include <iostream>
#include <vector>
#include <string>
#include "../49_group_anagrams/Solution49.h"

int main()
{
    std::vector<std::string> nums{"eat", "tea", "tan", "ate", "nat", "bat"};
    auto res = Solution49::groupAnagramsHash(nums);
    for (auto &re : res) {
        for (auto &it : re) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
