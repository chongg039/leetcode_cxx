//
// Created by GaoChong on 2019/12/12.
//
#include <string>
#include "gtest/gtest.h"
#include "../8_string_to_integer/Solution8.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest8, t1)
{
    std::string x("321");
    int x_i = 321;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t2)
{
    std::string x("-321");
    int x_i = -321;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t3)
{
    std::string x("   21");
    int x_i = 21;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t4)
{
    std::string x("--21");
    int x_i = 0;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t5)
{
    std::string x("321-  ");
    int x_i = 321;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t6)
{
    std::string x("-321-");
    int x_i = -321;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t7)
{
    std::string x("-0123");
    int x_i = -123;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t8)
{
    std::string x("-91283472332");
    int x_i = -2147483648;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t9)
{
    std::string x("+9");
    int x_i = 9;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t10)
{
    std::string x("+-9");
    int x_i = 0;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t11)
{
    std::string x(" -+9");
    int x_i = 0;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t12)
{
    std::string x("  +0 123");
    int x_i = 0;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t13)
{
    std::string x("+4193 with words");
    int x_i = 4193;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t14)
{
    std::string x("-4193 with words");
    int x_i = -4193;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t15)
{
    std::string x("-   4193");
    int x_i = 0;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

TEST(GTest8, t16)
{
    std::string x(" -1010023630o4");
    int x_i = -1010023630;
    EXPECT_EQ(x_i, Solution8().myAtoi(x));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


