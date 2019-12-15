//
// Created by GaoChong on 2019/12/15.
//

#include "Solution10.h"

bool Solution10::isMatch(const std::string &s, const std::string &p)
{
    int m = s.length(), n = p.length();
    std::vector<std::vector<bool>> state_vector(m + 1, std::vector<bool>(n + 1, false));
    state_vector[0][0] = true;
    for (size_t i = 0; i <= m; ++i) {
        for (size_t j = 1; j <= n; ++j) {
            if (j > 1 && p[j-1] == '*') {
                if (i > 0) {
                    state_vector[i][j] = state_vector[i-1][j] && (s[i-1] == p[j-2] || p[j-2] == '.');
                }
            }
        }
    }
}