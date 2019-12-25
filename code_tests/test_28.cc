//
// Created by GaoChong on 2019/12/25.
//
#include <string>
#include "gtest/gtest.h"
#include "../28_implement_strstr/Solution28.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest28, t1)
{
    std::string haystack("");
    std::string needle("");
    int idx = 0;
    EXPECT_EQ(idx, Solution28::strStr(haystack, needle));
}

TEST(GTest28, t2)
{
    std::string haystack("");
    std::string needle("abc");
    int idx = -1;
    EXPECT_EQ(idx, Solution28::strStr(haystack, needle));
}

TEST(GTest28, t3)
{
    std::string haystack("hello");
    std::string needle("ll");
    int idx = 2;
    EXPECT_EQ(idx, Solution28::strStr(haystack, needle));
}

TEST(GTest28, t4)
{
    std::string haystack("aaaaa");
    std::string needle("aa");
    int idx = 0;
    EXPECT_EQ(idx, Solution28::strStr(haystack, needle));
}

TEST(GTest28, t5)
{
    std::string haystack("aaaaa");
    std::string needle("abc");
    int idx = -1;
    EXPECT_EQ(idx, Solution28::strStr(haystack, needle));
}

TEST(GTest28, t6)
{
    std::string haystack("mississippi");
    std::string needle("mississippi");
    int idx = 0;
    EXPECT_EQ(idx, Solution28::strStr(haystack, needle));
}


GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
