//
// Created by GaoChong on 2019/12/21.
//

#ifndef LEETCODE_SOLUTION19_H
#define LEETCODE_SOLUTION19_H

struct ListNode
{
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution19
{
public:
    static ListNode *removeNthFromEnd(ListNode *head, int n);
};


#endif //LEETCODE_SOLUTION19_H
