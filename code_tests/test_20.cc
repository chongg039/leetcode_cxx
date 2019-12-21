//
// Created by GaoChong on 2019/12/21.
//
//
// Created by GaoChong on 2019/12/19.
//
#include <string>
#include "gtest/gtest.h"
#include "../20_valid_parentheses/Solution20.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest20, t1)
{
    std::string s("");
    EXPECT_EQ(true, Solution20::isValid(s));
}

TEST(GTest20, t2)
{
    std::string s(" ");
    EXPECT_EQ(false, Solution20::isValid(s));
}

TEST(GTest20, t3)
{
    std::string s("{}[]()");
    EXPECT_EQ(true, Solution20::isValid(s));
}

TEST(GTest20, t4)
{
    std::string s("[{(}]");
    EXPECT_EQ(false, Solution20::isValid(s));
}

TEST(GTest20, t5)
{
    std::string s("{([])}");
    EXPECT_EQ(true, Solution20::isValid(s));
}

TEST(GTest20, t6)
{
    std::string s("{[}]");
    EXPECT_EQ(false, Solution20::isValid(s));
}

TEST(GTest20, t7)
{
    std::string s("{[");
    EXPECT_EQ(false, Solution20::isValid(s));
}

TEST(GTest20, t8)
{
    std::string s(")]");
    EXPECT_EQ(false, Solution20::isValid(s));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
