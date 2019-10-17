# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)
# 生成链接库
#add_library(LongestPalindromicSubstring ${DIR_LIB_SRCS})

add_library(LongestPalindromicSubstring ./Solution5.cpp)
add_library(LongestPalindromicSubstringDP ./Solution5_dp.cpp)