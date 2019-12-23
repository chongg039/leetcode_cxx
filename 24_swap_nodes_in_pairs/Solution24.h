//
// Created by GaoChong on 2019/12/23.
//

#ifndef LEETCODE_SOLUTION24_H
#define LEETCODE_SOLUTION24_H

struct ListNode
{
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution24
{
public:
    static ListNode *swapPairs(ListNode *head);
};


#endif //LEETCODE_SOLUTION24_H
