//
// Created by GaoChong on 2020/1/26.
//
#include <string>
#include "gtest/gtest.h"
#include "../58_length_of_last_word/Solution58.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest58, t1)
{
    std::string s;
    int res = 0;
    EXPECT_EQ(res, Solution58::lengthOfLastWord(s));
}

TEST(GTest58, t2)
{
    std::string s{"hello world"};
    int res = 5;
    EXPECT_EQ(res, Solution58::lengthOfLastWord(s));
}

TEST(GTest58, t3)
{
    std::string s{"hello world "};
    int res = 5;
    EXPECT_EQ(res, Solution58::lengthOfLastWord(s));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}