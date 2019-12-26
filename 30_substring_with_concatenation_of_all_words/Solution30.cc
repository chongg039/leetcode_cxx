//
// Created by GaoChong on 2019/12/26.
//

#include "Solution30.h"

std::vector<int> Solution30::findSubstring(std::string &s, std::vector<std::string> &words)
{
    std::vector<int> result;
    if (s.empty() || words.empty()) {
        return result;
    }
    int num_size = words.size();
    int each_size = words[0].size();
    std::map<std::string, int> count_map;
    for (auto &word : words) {
        auto iter = count_map.find(word);
        if (iter != count_map.end()) {
            ++iter->second;
        } else {
            count_map[word] = 1;
        }
    }
    std::string::size_type s_idx(0);
    while (s_idx < s.size()) {
        if (s.size() - s_idx + 1 < num_size * each_size) break;
        std::map<std::string, int> count_map_bak(count_map.begin(), count_map.end());
        int check_num = 0;
        bool flag = true;
        while (check_num < num_size) {
            auto iter = count_map_bak.find(s.substr(s_idx + check_num * each_size, each_size));
            if (iter != count_map_bak.end() && iter->second > 0) {
                ++check_num;
                --iter->second;
            } else {
                flag = false;
                break;
            }
        }
        if (is_match_all(count_map_bak)) {
            result.push_back(s_idx);
            ++s_idx;
            continue;
        }
        if (flag) s_idx += each_size;
        else ++s_idx;
    }
    return result;
}

bool Solution30::is_match_all(std::map<std::string, int> &count_map)
{
    for (auto &pair : count_map) {
        if (0 == pair.second) continue;
        else return false;
    }
    return true;
}