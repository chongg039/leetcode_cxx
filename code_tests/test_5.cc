//
// Created by GaoChong on 2019/10/15.
//
#include <string>
#include "gtest/gtest.h"
#include "../5_longest_palindromic_substring/Solution5.h"

using std::string;
using testing::Test;
using testing::InitGoogleTest;

TEST(GTest5, t1) {
    string a = "a";
    string b = "a";

    EXPECT_EQ(b, Solution5().longestPalindrome(a));
}

TEST(GTest5, t2) {
    string a = "aa";
    string b = "aa";

    EXPECT_EQ(b, Solution5().longestPalindrome(a));
}

TEST(GTest5, t3) {
    string a = "aba";
    string b = "aba";

    EXPECT_EQ(b, Solution5().longestPalindrome(a));
}

TEST(GTest5, t4) {
    string a = "abac";
    string b = "aba";

    EXPECT_EQ(b, Solution5().longestPalindrome(a));
}

TEST(GTest5, t5) {
    string a = "abaabac";
    string b = "abaaba";

    EXPECT_EQ(b, Solution5().longestPalindrome(a));
}

TEST(GTest5, t6) {
    string a = "";
    string b = "";

    EXPECT_EQ(b, Solution5().longestPalindrome(a));
}

GTEST_API_ int main(int argc, char* argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
