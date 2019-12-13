//
// Created by GaoChong on 2019/12/11.
//
#include "gtest/gtest.h"
#include "../7_reverse_integer/Solution7.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest7, t1) {
    int x = 123;
    int reverse_x = 321;
    EXPECT_EQ(reverse_x, Solution7().reverse(x));
}

TEST(GTest7, t2) {
    int x = -123;
    int reverse_x = -321;
    EXPECT_EQ(reverse_x, Solution7().reverse(x));
}

TEST(GTest7, t3) {
    int x = 120;
    int reverse_x = 21;
    EXPECT_EQ(reverse_x, Solution7().reverse(x));
}

TEST(GTest7, t4) {
    int x = -120;
    int reverse_x = -21;
    EXPECT_EQ(reverse_x, Solution7().reverse(x));
}

TEST(GTest7, t5) {
    int x = 1020;
    int reverse_x = 201;
    EXPECT_EQ(reverse_x, Solution7().reverse(x));
}

TEST(GTest7, t6) {
    int x = -1020;
    int reverse_x = -201;
    EXPECT_EQ(reverse_x, Solution7().reverse(x));
}

TEST(GTest7, t7) {
    int x = 1234567898;
    int reverse_x = 0;
    EXPECT_EQ(reverse_x, Solution7().reverse(x));
}

GTEST_API_ int main(int argc, char* argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


