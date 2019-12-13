//
// Created by GaoChong on 2019/10/17.
//
#include <string>
#include "gtest/gtest.h"
#include "../5_longest_palindromic_substring/Solution5_dp.h"

using std::string;
using testing::Test;
using testing::InitGoogleTest;

TEST(GTest5DP, t1) {
    string a = "ababa";
    string b = "ababa";

    EXPECT_EQ(b, Solution5_dp().longestPalindrome(a));
}

TEST(GTest5DP, t2) {
    string a = "a";
    string b = "a";

    EXPECT_EQ(b, Solution5_dp().longestPalindrome(a));
}

TEST(GTest5DP, t3) {
    string a = "cbbd";
    string b = "bb";

    EXPECT_EQ(b, Solution5_dp().longestPalindrome(a));
}

GTEST_API_ int main(int argc, char* argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
