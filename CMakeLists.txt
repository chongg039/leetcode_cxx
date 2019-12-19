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

add_executable(main main.cpp)
