//
// Created by GaoChong on 2019/10/18.
//

#include "Solution6.h"

std::string Solution6::convertBf(std::string s, int numRows)
{
    std::string final_s;
    int n = s.length();
    int base_mod = n + std::max(n - 2, 0);
    for (int row = 0; row < numRows; ++row) {
        int row_mod = row % (numRows - 1);
        int final_mod = base_mod - (2 * row_mod);
        for (size_t idx = 0; idx < s.length(); ++idx) {
            if (0 == idx % final_mod) {
                final_s.push_back(s[idx]);
            }
        }
    }
    return final_s;
}

std::string Solution6::convert(std::string s, int numRows)
{
    if (numRows < 2) return s;
    std::vector<std::string> waits(numRows, "");
    std::string res;
    int row_mod = 2 * (numRows - 1);
    for (int i = 0; i < s.size(); ++i) {
        int j = i % row_mod;
        if (j >= numRows) j = row_mod - j;
        waits[j] += s[i];
    }
    for (int row = 0; row < numRows; ++row) {
        res += waits[row];
    }
    return res;
}