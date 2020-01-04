//
// Created by GaoChong on 2020/1/4.
//
#include <string>
#include "gtest/gtest.h"
#include "../43_multiply_strings/Solution43.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest43, t1)
{
    std::string num1{"2"};
    std::string num2{"3"};
    std::string result{"6"};
    EXPECT_EQ(result, Solution43::multiply(num1, num2));
}

TEST(GTest43, t2)
{
    std::string num1{"0"};
    std::string num2{"3"};
    std::string result{"0"};
    EXPECT_EQ(result, Solution43::multiply(num1, num2));
}

TEST(GTest43, t3)
{
    std::string num1{"123"};
    std::string num2{"456"};
    std::string result{"56088"};
    EXPECT_EQ(result, Solution43::multiply(num1, num2));
}

TEST(GTest43, t4)
{
    std::string num1{"123456789"};
    std::string num2{"987654321"};
    std::string result{"121932631112635269"};
    EXPECT_EQ(result, Solution43::multiply(num1, num2));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
