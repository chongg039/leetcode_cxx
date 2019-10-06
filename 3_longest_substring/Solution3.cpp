//
// Created by chong on 2019/10/5.
//

#include "Solution3.h"

bool Solution3::isIn(int ele) {
    return find(hasValue.cbegin(), hasValue.cend(), ele) != hasValue.cend();
}

int Solution3::lengthOfLongestSubString(string s) {
    if (s.empty()) {
        return 0;
    }
    for (size_t i = 0; i < s.size(); ++i) {
        hasValue.push_back(s.at(i));
        if (i == s.size() - 1) {
            allMax.push_back(hasValue.size());
            hasValue.clear();
            break;
        }
        bool flag = false;
        for (size_t j = i + 1; j < s.size(); ++j) {
            flag = isIn(s.at(j));
            if (flag) {
                allMax.push_back(hasValue.size());
                hasValue.clear();
                break;
            } else {
                hasValue.push_back(s.at(j));
                // 到达末尾
                if (j == s.size() - 1) {
                    allMax.push_back(hasValue.size());
                    hasValue.clear();
                    break;
                }
            }
        }
    }
    return *max_element(allMax.cbegin(), allMax.cend());
}
