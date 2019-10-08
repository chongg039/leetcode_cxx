add_executable(run_test_1 test_1.cpp ../1_two_sum/Solution1.cpp)
add_executable(run_test_2 test_2.cpp ../2_add2numbers/Solution2.cpp)
add_executable(run_test_3 test_3.cpp ../3_longest_substring/Solution3.cpp)
add_executable(run_test_4 test_4.cpp ../4_median_two_sorted_arrays/Solution4.cpp)

target_link_libraries(run_test_1 gtest gtest_main)
target_link_libraries(run_test_2 gtest gtest_main)
target_link_libraries(run_test_3 gtest gtest_main)
target_link_libraries(run_test_4 gtest gtest_main)