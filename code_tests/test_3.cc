//
// Created by chong on 2019/10/6.
//
#include <string>
#include "gtest/gtest.h"
#include "../3_longest_substring/Solution3.h"

using std::string;
using testing::Test;
using testing::InitGoogleTest;

TEST(GTest3, t1) {
    string s = "abcabcbb";

    EXPECT_EQ(3, Solution3().lengthOfLongestSubString(s));
}

TEST(GTest3, t2) {
    string s = "bbbbb";

    EXPECT_EQ(1, Solution3().lengthOfLongestSubString(s));
}

TEST(GTest3, t3) {
    string s = "pwwkew";

    EXPECT_EQ(3, Solution3().lengthOfLongestSubString(s));
}

TEST(GTest3, t4) {
    string s = " ";

    EXPECT_EQ(1, Solution3().lengthOfLongestSubString(s));
}

GTEST_API_ int main(int argc, char* argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

