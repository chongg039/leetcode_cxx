//
// Created by chong on 2019/10/6.
//

#include "gtest/gtest.h"
#include "../1_two_sum/Solution1.h"

using testing::Test;
using testing::InitGoogleTest;

class GTest1 : public Test {
public:
    GTest1() : Test() {}
    ~GTest1() override {}

    virtual void SetUp() override  {
        Test::SetUp();
        std::cout << "done" << std::endl;
    }

    virtual void TearDown() override {
        Test::TearDown();
        std::cout << "tear down" << std::endl;
    }
};

TEST_F(GTest1, tc_example_1) {
    std::cout << "Test demo" << std::endl;
}

GTEST_API_ int main(int argc, char* argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

