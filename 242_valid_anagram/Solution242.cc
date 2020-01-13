//
// Created by GaoChong on 2020/1/13.
//

#include "Solution242.h"

bool Solution242::isAnagram(std::string s, std::string t)
{
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    return s == t;
}

bool Solution242::isAnagramHash(std::string s, std::string t)
{
    std::unordered_map<char, int> ma, mb;
    for (const auto &e : s) {
        ++ma[e];
    }
    for (const auto &e : t) {
        ++mb[e];
    }
    return ma == mb;
}