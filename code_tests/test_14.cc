//
// Created by GaoChong on 2019/12/18.
//
#include <string>
#include <vector>
#include "gtest/gtest.h"
#include "../14_longest_common_prefix/Solution14.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest14, t1)
{
    std::vector<std::string> strs{"flower", "flow", "flight"};
    std::string longest_prefix("fl");
    EXPECT_EQ(longest_prefix, Solution14::longestCommonPrefix(strs));
}

TEST(GTest14, t2)
{
    std::vector<std::string> strs{"flower", "flow", ""};
    std::string longest_prefix;
    EXPECT_EQ(longest_prefix, Solution14::longestCommonPrefix(strs));
}

TEST(GTest14, t3)
{
    std::vector<std::string> strs;
    std::string longest_prefix;
    EXPECT_EQ(longest_prefix, Solution14::longestCommonPrefix(strs));
}

TEST(GTest14, t4)
{
    std::vector<std::string> strs{"aca", "cba"};
    std::string longest_prefix;
    EXPECT_EQ(longest_prefix, Solution14::longestCommonPrefix(strs));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
