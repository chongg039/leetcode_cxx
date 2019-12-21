//
// Created by GaoChong on 2019/12/21.
//

#ifndef LEETCODE_SOLUTION21_H
#define LEETCODE_SOLUTION21_H

struct ListNode
{
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution21
{
    static ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
};


#endif //LEETCODE_SOLUTION21_H
