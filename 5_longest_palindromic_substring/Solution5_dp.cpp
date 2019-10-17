//
// Created by GaoChong on 2019/10/17.
//

#include "Solution5_dp.h"

/** 使用动态规划的最长回文子串
 *  对子串A[i...j]，用二维数组存放，i为起始，j为终止，A[i][j]
 *  1.i==j，回文；j-i==1且*j==*i，回文
 *  2.子串长度>2，若A[i][j]回文，则*j==*i两段相等，且A[i+1][j-1]也是回文串
 *  3.A[i][j]保存i起始，j终止的子串是否回文，问题增大依次求解
 * */

string Solution5_dp::longestPalindrome(string s) {
    if (s.length() == 0) {
        return s;
    }
    vector<int> temp(s.length());
    tempArray.resize(s.length(), temp);
    // size_t 是无符号整数，0-MAXINT
    size_t max_len = 0;
    size_t begin_idx = 0;

    for (size_t j = 0; j < s.length(); ++j) {
        for (size_t i = 0; i <= j; ++i) {
            if (j-i < 2) {
                tempArray[i][j] = (s[i] == s[j]);
            } else {
                tempArray[i][j] = (s[i] == s[j]) && (tempArray[i+1][j-1] == 1);
            }
            // 先后顺序不能调换，begin_idx的判断条件
            begin_idx = ((1 == tempArray[i][j] && j-i+1 > max_len) ? i : begin_idx);
            max_len = ((1 == tempArray[i][j] && j-i+1 > max_len) ? j-i+1 : max_len);
        }
    }
    cout << begin_idx << "and" << max_len << endl;
    printVec(tempArray);
    return s.substr(begin_idx, max_len);
}

void Solution5_dp::printVec(vector<vector<int>> vec) {
    for (auto i = vec.cbegin(); i != vec.cend(); ++i) {
        auto tmpVec = *i;
        for (auto j = tmpVec.cbegin(); j != tmpVec.cend(); ++j) {
            cout << *j;
        }
        cout << endl;
    }
}