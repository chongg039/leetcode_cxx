//
// Created by GaoChong on 2019/12/15.
//
#include "gtest/gtest.h"
#include "../9_palindrome_number/Solution9.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest9, t1)
{
    int x = -123;
    EXPECT_EQ(false, Solution9::isPalindrome(x));
}

TEST(GTest9, t2)
{
    int x = 120;
    EXPECT_EQ(false, Solution9::isPalindrome(x));
}

TEST(GTest9, t3)
{
    int x = 12121;
    EXPECT_EQ(true, Solution9::isPalindrome(x));
}

TEST(GTest9, t4)
{
    int x = 0;
    EXPECT_EQ(true, Solution9::isPalindrome(x));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
