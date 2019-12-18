//
// Created by GaoChong on 2019/12/17.
//

#include "Solution12.h"

std::string Solution12::intToRoman(int num)
{
    std::string roman;
    int pop = 0;
    while (num != 0) {
        if (num >= 1000) {
            pop = num / 1000;
            for (int i = 0; i < pop; ++i) {
                roman += 'M';
            }
            num %= 1000;
        } else if (num >= 500 && num < 1000) {
            if (num >= 900) {
                roman += "CM";
                num -= 900;
            } else {
                roman += 'D';
                num -= 500;
            }
        } else if (num >= 100 && num < 500) {
            if (num >= 400) {
                roman += "CD";
                num -= 400;
            } else {
                pop = num / 100;
                for (int i = 0; i < pop; ++i) {
                    roman += 'C';
                }
                num %= 100;
            }
        } else if (num >= 50 && num < 100) {
            if (num >= 90) {
                roman += "XC";
                num -= 90;
            } else {
                roman += 'L';
                num -= 50;
            }
        } else if (num >= 10 && num < 50) {
            if (num >= 40) {
                roman += "XL";
                num -= 40;
            } else {
                pop = num / 10;
                for (int i = 0; i < pop; ++i) {
                    roman += 'X';
                }
                num %= 10;
            }
        } else if (num >= 5 && num < 10) {
            if (num >= 9) {
                roman += "IX";
                num -= 9;
            } else {
                roman += 'V';
                num -= 5;
            }
        } else if (num >= 1 && num < 5) {
            if (num >= 4) {
                roman += "IV";
                num -= 4;
            } else {
                for (int i = 0; i < num; ++i) {
                    roman += 'I';
                }
                num %= 1;
            }
        } else {
            return roman;
        }
    }
    return roman;
}