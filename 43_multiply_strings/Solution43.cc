//
// Created by GaoChong on 2020/1/4.
//

#include "Solution43.h"

std::string Solution43::multiply(std::string &num1, std::string &num2)
{
    if ("0" == num1 || "0" == num2) return "0";
    std::string result;
    int outer_multi = 0;
    for (int i = num1.size() - 1; i >= 0; --i) {
        std::string sub(outer_multi, '0');
        int carry = 0;
        for (int j = num2.size() - 1; j >= 0; --j) {
            int sub_sub = (num1[i] - '0') * (num2[j] - '0') + carry;
            if (sub_sub < 10) {
                sub.insert(0, std::to_string(sub_sub));
                carry = 0;
            } else {
                carry = sub_sub / 10;
                sub.insert(0, std::to_string(sub_sub % 10));
            }
        }
        if (0 != carry) sub.insert(0, std::to_string(carry));
        result = plus(result, sub);
        ++outer_multi;
    }
    return result;
}

std::string Solution43::plus(std::string num1, std::string num2)
{
    if (num1.size() < num2.size()) {
        std::string complete(num2.size() - num1.size(), '0');
        num1.insert(0, complete);
    } else if (num2.size() < num1.size()) {
        std::string complete(num1.size() - num2.size(), '0');
        num2.insert(0, complete);
    }
    std::string result;
    int carry = 0;
    for (int i = num1.size() - 1; i >= 0; --i) {
        int sub = (num1[i] - '0') + (num2[i] - '0') + carry;
        if (sub < 10) {
            result.insert(0, std::to_string(sub));
            carry = 0;
        } else {
            carry = sub / 10;
            result.insert(0, std::to_string(sub % 10));
        }
    }
    if (0 != carry) {
        result.insert(0, std::to_string(carry));
    }
    return result;
}