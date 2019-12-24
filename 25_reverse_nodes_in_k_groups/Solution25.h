//
// Created by GaoChong on 2019/12/23.
//

#ifndef LEETCODE_SOLUTION25_H
#define LEETCODE_SOLUTION25_H

struct ListNode
{
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution25
{
public:
    static ListNode *reverseKGroups(ListNode *head, int k);

    static ListNode *swap_once(ListNode *head, ListNode *tail);
    static ListNode *swap(ListNode *prev, int k);
};


#endif //LEETCODE_SOLUTION25_H
