//
// Created by GaoChong on 2019/12/22.
//

#ifndef LEETCODE_SOLUTION23_H
#define LEETCODE_SOLUTION23_H

#include <vector>

struct ListNode
{
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution23
{
public:
    static ListNode *mergeKLists(std::vector<ListNode *> &lists);

private:
    static ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
};


#endif //LEETCODE_SOLUTION23_H
