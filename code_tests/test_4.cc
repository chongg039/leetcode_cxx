//
// Created by GaoChong on 2019/10/8.
//

//
// Created by chong on 2019/10/6.
//
#include <vector>
#include "gtest/gtest.h"
#include "../4_median_two_sorted_arrays/Solution4.h"

using std::vector;
using testing::Test;
using testing::InitGoogleTest;

TEST(GTest4, t1) {
    vector<int> a = {1, 3};
    vector<int> b = {2};

    EXPECT_EQ(2.0, Solution4::findMedianSortedArrays(a, b));
}

TEST(GTest4, t2) {
    vector<int> a = {1, 2};
    vector<int> b = {3, 4};

    EXPECT_EQ(2.5, Solution4::findMedianSortedArrays(a, b));
}

TEST(GTest4, t3) {
    vector<int> a = {3, 4};
    vector<int> b = {1, 2};

    EXPECT_EQ(2.5, Solution4::findMedianSortedArrays(a, b));
}

TEST(GTest4, t4) {
    vector<int> a = {2, 3, 4, 5};
    vector<int> b = {1};

    EXPECT_EQ(3, Solution4::findMedianSortedArrays(a, b));
}

TEST(GTest4, t5) {
    vector<int> a = {1, 2, 3, 4, 6, 7, 8};
    vector<int> b = {5};

    EXPECT_EQ(4.5, Solution4().findMedianSortedArrays(a, b));
}

TEST(GTest4, t6) {
    vector<int> a = {1, 2};
    vector<int> b = {1, 2, 3};

    EXPECT_EQ(2.0, Solution4().findMedianSortedArrays(a, b));
}

GTEST_API_ int main(int argc, char* argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

