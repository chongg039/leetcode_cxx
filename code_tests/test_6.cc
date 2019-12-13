//
// Created by GaoChong on 2019/10/18.
//
#include <string>
#include "gtest/gtest.h"
#include "../6_zigzag_conversion/Solution6.h"

using std::string;
using testing::Test;
using testing::InitGoogleTest;

TEST(GTest6, t1) {
    string s = "PAYPALISHIRING";
    string a = "PAHNAPLSIIGYIR";
    EXPECT_EQ(a, Solution6().convert(s, 3));
}

GTEST_API_ int main(int argc, char* argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

