//
// Created by GaoChong on 2020/1/27.
//

#ifndef LEETCODE_SOLUTION61_H
#define LEETCODE_SOLUTION61_H

struct ListNode
{
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution61
{
public:
    static ListNode *rotateRight(ListNode *head, int k);

private:
    static ListNode* swapEnds(ListNode *head);
};


#endif //LEETCODE_SOLUTION61_H
