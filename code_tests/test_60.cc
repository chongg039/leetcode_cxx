//
// Created by GaoChong on 2020/1/27.
//
#include <string>
#include "gtest/gtest.h"
#include "../60_permutation_sequence/Solution60.h"

using testing::Test;
using testing::InitGoogleTest;

TEST(GTest60, t1)
{
    int n = 3, k = 3;
    std::string res{"213"};
    EXPECT_EQ(res, Solution60::getPermutation(n, k));
}

TEST(GTest60, t2)
{
    int n = 4, k = 9;
    std::string res{"2314"};
    EXPECT_EQ(res, Solution60::getPermutation(n, k));
}

TEST(GTest60, t3)
{
    int n = 3, k = 2;
    std::string res{"132"};
    EXPECT_EQ(res, Solution60::getPermutation(n, k));
}

GTEST_API_ int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
