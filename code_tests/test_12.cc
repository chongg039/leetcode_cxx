//
// Created by GaoChong on 2019/12/17.
//
#include <string>
#include "gtest/gtest.h"
#include "../12_integer_to_roman/Solution12.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest12, t1)
{
    int x = 3;
    std::string roman("III");
    EXPECT_EQ(roman, Solution12::intToRoman(x));
}

TEST(GTest12, t2)
{
    int x = 4;
    std::string roman("IV");
    EXPECT_EQ(roman, Solution12::intToRoman(x));
}

TEST(GTest12, t3)
{
    int x = 58;
    std::string roman("LVIII");
    EXPECT_EQ(roman, Solution12::intToRoman(x));
}

TEST(GTest12, t4)
{
    int x = 1994;
    std::string roman("MCMXCIV");
    EXPECT_EQ(roman, Solution12::intToRoman(x));
}

TEST(GTest12, t5)
{
    int x = 9;
    std::string roman("IX");
    EXPECT_EQ(roman, Solution12::intToRoman(x));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
