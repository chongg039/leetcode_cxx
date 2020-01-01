//
// Created by GaoChong on 2019/12/31.
//
#include <string>
#include "gtest/gtest.h"
#include "../38_count_and_say/Solution38.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest38, t1)
{
    int num = 1;
    std::string result{"1"};
    EXPECT_EQ(result, Solution38::countAndSay(num));
}

TEST(GTest38, t2)
{
    int num = 2;
    std::string result{"11"};
    EXPECT_EQ(result, Solution38::countAndSay(num));
}

TEST(GTest38, t3)
{
    int num = 3;
    std::string result{"21"};
    EXPECT_EQ(result, Solution38::countAndSay(num));
}

TEST(GTest38, t4)
{
    int num = 4;
    std::string result{"1211"};
    EXPECT_EQ(result, Solution38::countAndSay(num));
}

TEST(GTest38, t5)
{
    int num = 5;
    std::string result{"111221"};
    EXPECT_EQ(result, Solution38::countAndSay(num));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
