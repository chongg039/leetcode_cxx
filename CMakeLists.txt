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

#为项目引入测试功能
add_subdirectory(code_tests)
add_subdirectory(external/googletest-master/googletest)
include_directories(
        external/googletest-master/googletest/include
)

add_subdirectory(1_two_sum)
add_subdirectory(2_add2numbers)
add_subdirectory(3_longest_substring)
add_subdirectory(4_median_two_sorted_arrays)

add_executable(main main.cpp)
# 添加链接库
target_link_libraries(main TwoSum)
target_link_libraries(main AddNumber)
target_link_libraries(main LongestSubString)
target_link_libraries(main MedianTwoSortedArray)