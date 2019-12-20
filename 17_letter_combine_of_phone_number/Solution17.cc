//
// Created by GaoChong on 2019/12/19.
//

#include "Solution17.h"

std::vector<std::string> Solution17::letterCombinations(const std::string &digits)
{
    std::vector<std::string> result;
    if (digits.empty()) return result;
    result.emplace_back("");
    for (auto &digit : digits) {
        std::vector<std::string> news;
        switch (digit) {
            case '2':
                for (std::string &s : result) {
                    // 必须先初始化，尤其是对push_back而言，否则会段错误
                    std::string s1{s + "b"};
                    std::string s2{s + "c"};
                    s += "a";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            case '3':
                for (auto &s : result) {
                    std::string s1{s + "e"};
                    std::string s2{s + "f"};
                    s += "d";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            case '4':
                for (auto &s : result) {
                    std::string s1{s + "h"};
                    std::string s2{s + "i"};
                    s += "g";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            case '5':
                for (auto &s : result) {
                    std::string s1{s + "k"};
                    std::string s2{s + "l"};
                    s += "j";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            case '6':
                for (auto &s : result) {
                    std::string s1{s + "n"};
                    std::string s2{s + "o"};
                    s += "m";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            case '7':
                for (auto &s : result) {
                    std::string s1{s + "q"};
                    std::string s2{s + "r"};
                    std::string s3{s + "s"};
                    s += "p";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                    news.emplace_back(s3);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            case '8':
                for (auto &s : result) {
                    std::string s1{s + "u"};
                    std::string s2{s + "v"};
                    s += "t";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            case '9':
                for (auto &s : result) {
                    std::string s1{s + "x"};
                    std::string s2{s + "y"};
                    std::string s3{s + "z"};
                    s += "w";
                    news.emplace_back(s1);
                    news.emplace_back(s2);
                    news.emplace_back(s3);
                }
                result.insert(result.end() ,news.begin(), news.end());
                break;
            default:
                break;
        }
    }
    return result;
}