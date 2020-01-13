cmake_minimum_required(VERSION 3.15)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)
set(GOOGLETEST_VERSION 1.10.0)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


# 设置执行文件输出目录
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 设置库输出路径
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


MESSAGE("++++++++++++++Start Build+++++++++++++++++")

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加googletest
add_subdirectory(code_tests)
add_subdirectory(external/googletest-master/googletest)
include_directories(external/googletest-master/googletest/include)

# 让clion自己寻找boost，若引入package有红色下划线，需要在Tools中Resync with remote host重新导入所有头文件
find_package(Boost COMPONENTS system filesystem thread REQUIRED)
if(Boost_FOUND)
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
endif()
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

add_subdirectory(1_two_sum)
add_subdirectory(2_add2numbers)
add_subdirectory(3_longest_substring)
add_subdirectory(4_median_two_sorted_arrays)
add_subdirectory(5_longest_palindromic_substring)
add_subdirectory(6_zigzag_conversion)
add_subdirectory(7_reverse_integer)
add_subdirectory(8_string_to_integer)
add_subdirectory(9_palindrome_number)
add_subdirectory(10_regular_expression_matching)
add_subdirectory(11_container_with_most_water)
add_subdirectory(12_integer_to_roman)
add_subdirectory(13_roman_to_integer)
add_subdirectory(14_longest_common_prefix)
add_subdirectory(15_three_sum)
add_subdirectory(16_three_sum_closest)
add_subdirectory(17_letter_combine_of_phone_number)
add_subdirectory(18_four_sum)
add_subdirectory(19_rm_nth_node_from_end)
add_subdirectory(20_valid_parentheses)
add_subdirectory(21_merge_two_sorted_lists)
add_subdirectory(22_generate_parentheses)
add_subdirectory(23_merge_k_sorted_lists)
add_subdirectory(24_swap_nodes_in_pairs)
add_subdirectory(25_reverse_nodes_in_k_groups)
add_subdirectory(26_remove_duplicates)
add_subdirectory(27_remove_element)
add_subdirectory(28_implement_strstr)
add_subdirectory(29_divide_two_integers)
add_subdirectory(30_substring_with_concatenation_of_all_words)
add_subdirectory(31_next_permutation)
add_subdirectory(32_longest_valid_parentheses)
add_subdirectory(33_search_in_rotated_sorted_array)
add_subdirectory(34_find_first_and_last_position)
add_subdirectory(35_search_insert_position)
add_subdirectory(36_valid_sudoku)
add_subdirectory(38_count_and_say)
add_subdirectory(39_combination_sum)
add_subdirectory(40_combination_sum_2)
add_subdirectory(41_first_missing_positive)
add_subdirectory(42_trapping_rain_water)
add_subdirectory(43_multiply_strings)
add_subdirectory(44_wildcard_matching)
add_subdirectory(45_jump_game_two)
# 46和47回溯法应用和剪枝
add_subdirectory(46_permutations)
add_subdirectory(47_permutations_2)
add_subdirectory(48_rotate_image)

add_executable(main main.cpp)
