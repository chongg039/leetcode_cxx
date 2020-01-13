//
// Created by GaoChong on 2020/1/13.
//

#include "Solution49.h"

std::vector<std::vector<std::string> > Solution49::groupAnagramsHash(std::vector<std::string> &strs)
{
    std::vector<std::vector<std::string>> res;
    if (strs.empty()) return res;
//    std::unordered_map<std::string, int, AnagramHash, AnagramCmp> mm;
    std::unordered_map<std::string, int> mm;
    std::string str_bak;
    for (auto &str : strs) {
        str_bak = str;
        std::sort(str_bak.begin(), str_bak.end());
        auto iter = mm.find(str_bak);
        if (iter != mm.end()) {
            res[mm[str_bak]].push_back(str);
        } else {
            int n = mm.size();
            mm[str_bak] = n;
            std::vector<std::string> re{str};
            res.push_back(re);
        }
    }
    return res;
}

// 超时方法
std::vector<std::vector<std::string> > Solution49::groupAnagrams(std::vector<std::string> &strs)
{
    std::vector<std::vector<std::string>> res;
    if (strs.empty()) return res;
    res.emplace_back(std::vector<std::string>{strs[0]});
    for (auto str_iter = strs.begin() + 1; str_iter != strs.end(); ++str_iter) {
        bool in = false;
        for (auto &re : res) {
            if (isEqual(*str_iter, re[0])) {
                re.push_back(*str_iter);
                in = true;
                break;
            }
        }
        if (!in) {
            std::vector<std::string> sub_res{*str_iter};
            res.push_back(sub_res);
        }
    }
    return res;
}

bool Solution49::isEqual(std::string &str1, std::string &str2)
{
    std::unordered_map<char, int> ma, mb;
    for (const auto &e : str1) {
        ++ma[e];
    }
    for (const auto &e : str2) {
        ++mb[e];
    }
    return ma == mb;
}