//
// Created by GaoChong on 2020/1/13.
//

#ifndef LEETCODE_SOLUTION49_H
#define LEETCODE_SOLUTION49_H

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution49
{
public:
    static std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs);

    static std::vector<std::vector<std::string>> groupAnagramsHash(std::vector<std::string> &strs);

    struct AnagramHash
    {
        size_t operator()(std::string s) const noexcept
        {
            std::sort(s.begin(), s.end());
            return std::hash<std::string>{}(s);
        }
    };

    struct AnagramCmp
    {
        bool operator()(const std::string &str1, const std::string &str2) const
        {
            std::unordered_map<char, int> ma, mb;
            for (const auto &e : str1) {
                ++ma[e];
            }
            for (const auto &e : str2) {
                ++mb[e];
            }
            return ma == mb;
        };
    };

private:
    static bool isEqual(std::string &str1, std::string &str2);
};


#endif //LEETCODE_SOLUTION49_H
