//
// Created by GaoChong on 2020/1/4.
//
#include <string>
#include "gtest/gtest.h"
#include "../44_wildcard_matching/Solution44.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest44, t1)
{
    std::string s{"aa"};
    std::string p{"a"};
    bool result = false;
    EXPECT_EQ(result, Solution44::isMatch(s, p));
}

TEST(GTest44, t2)
{
    std::string s{"aa"};
    std::string p{"*"};
    bool result = true;
    EXPECT_EQ(result, Solution44::isMatch(s, p));
}

TEST(GTest44, t3)
{
    std::string s{"cb"};
    std::string p{"?a"};
    bool result = false;
    EXPECT_EQ(result, Solution44::isMatch(s, p));
}

TEST(GTest44, t4)
{
    std::string s{"adceb"};
    std::string p{"a*c?b"};
    bool result = true;
    EXPECT_EQ(result, Solution44::isMatch(s, p));
}

TEST(GTest44, t5)
{
    std::string s{"adceb"};
    std::string p{"*a*b"};
    bool result = true;
    EXPECT_EQ(result, Solution44::isMatch(s, p));
}

TEST(GTest44, t6)
{
    std::string s{"acdcb"};
    std::string p{"a*c?b"};
    bool result = false;
    EXPECT_EQ(result, Solution44::isMatch(s, p));
}

TEST(GTest44, t7)
{
    std::string s{"aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba"};
    std::string p{"a****b"};
    bool result = false;
    EXPECT_EQ(result, Solution44::isMatch(s, p));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
