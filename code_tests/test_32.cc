//
// Created by GaoChong on 2019/12/27.
//
#include <string>
#include "gtest/gtest.h"
#include "../32_longest_valid_parentheses/Solution32.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest32, t1)
{
    std::string s(")()())");
    int max = 4;
    EXPECT_EQ(max, Solution32::longestValidParentheses(s));
}

TEST(GTest32, t2)
{
    std::string s("");
    int max = 0;
    EXPECT_EQ(max, Solution32::longestValidParentheses(s));
}

TEST(GTest32, t3)
{
    std::string s("()");
    int max = 2;
    EXPECT_EQ(max, Solution32::longestValidParentheses(s));
}

TEST(GTest32, t4)
{
    std::string s("((()))");
    int max = 6;
    EXPECT_EQ(max, Solution32::longestValidParentheses(s));
}

TEST(GTest32, t5)
{
    std::string s("))))))))");
    int max = 0;
    EXPECT_EQ(max, Solution32::longestValidParentheses(s));
}

TEST(GTest32, t6)
{
    std::string s(")()())()()(");
    int max = 4;
    EXPECT_EQ(max, Solution32::longestValidParentheses(s));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}