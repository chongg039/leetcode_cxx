//
// Created by GaoChong on 2019/12/15.
//
#include <string>
#include "gtest/gtest.h"
#include "../10_regular_expression_matching/Solution10.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest10, t1)
{
    std::string s("abc");
    std::string p("abc");
    EXPECT_EQ(true, Solution10::isMatchDp(s, p));
}

TEST(GTest10, t2)
{
    std::string s("abccd");
    std::string p("ab.*d");
    EXPECT_EQ(true, Solution10::isMatchDp(s, p));
}

TEST(GTest10, t3)
{
    std::string s("abccd");
    std::string p("a.*d");
    EXPECT_EQ(true, Solution10::isMatchDp(s, p));
}

TEST(GTest10, t4)
{
    std::string s("abbc");
    std::string p("a*c");
    EXPECT_EQ(false, Solution10::isMatchDp(s, p));
}

TEST(GTest10, t5)
{
    std::string s("aa");
    std::string p("a");
    EXPECT_EQ(false, Solution10::isMatchDp(s, p));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
