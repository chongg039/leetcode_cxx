//
// Created by GaoChong on 2019/12/22.
//

#include "Solution23.h"

ListNode *Solution23::mergeKLists(std::vector<ListNode *> &lists)
{
    if (lists.empty()) return nullptr;
    ListNode *l1 = nullptr;
    for (ListNode *lk : lists) {
        l1 = mergeTwoLists(l1, lk);
    }
    return l1;
}

ListNode *Solution23::mergeTwoLists(ListNode *l1, ListNode *l2)
{
    // 迭代法
    auto *pre_head = new ListNode(-1);
    auto *prev = pre_head;
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val <= l2->val) {
            prev->next = l1;
            l1 = l1->next;
        } else {
            prev->next = l2;
            l2 = l2->next;
        }
        prev = prev->next;
    }
    prev->next = l1 != nullptr ? l1 : l2;
    return pre_head->next;
}