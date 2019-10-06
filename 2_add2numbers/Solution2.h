//
// Created by chong on 2019/10/4.
//

#ifndef LEETCODE_SOLUTION2_H
#define LEETCODE_SOLUTION2_H

#include <stdio.h>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

private:
    // l是一个指针的引用
    int getValueAndMoveNext(ListNode* &l);
};


#endif //LEETCODE_SOLUTION2_H
