//
// Created by GaoChong on 2019/12/18.
//
//
// Created by GaoChong on 2019/12/17.
//
#include <string>
#include "gtest/gtest.h"
#include "../13_roman_to_integer/Solution13.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest13, t1)
{
    int x = 3;
    std::string roman("III");
    EXPECT_EQ(x, Solution13::romanToInt(roman));
}

TEST(GTest13, t2)
{
    int x = 4;
    std::string roman("IV");
    EXPECT_EQ(x, Solution13::romanToInt(roman));
}

TEST(GTest13, t3)
{
    int x = 58;
    std::string roman("LVIII");
    EXPECT_EQ(x, Solution13::romanToInt(roman));
}

TEST(GTest13, t4)
{
    int x = 1994;
    std::string roman("MCMXCIV");
    EXPECT_EQ(x, Solution13::romanToInt(roman));
}

TEST(GTest13, t5)
{
    int x = 9;
    std::string roman("IX");
    EXPECT_EQ(x, Solution13::romanToInt(roman));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


