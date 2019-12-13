//
// Created by GaoChong on 2019/10/18.
//

#include "Solution6.h"

string Solution6::convert(string s, int numRows) {
    string final_s;
    int n = s.length();
    int base_mod = n + max(n-2, 0);
    for (int row = 0; row < numRows; ++row) {
        int row_mod = row % (numRows-1);
        int final_mod = base_mod - (2 * row_mod);
        for (size_t idx = 0; idx < s.length(); ++idx) {
            if (0 == idx % final_mod) {
                final_s.push_back(s[idx]);
            }
        }
    }
    return final_s;
}