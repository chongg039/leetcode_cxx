//
// Created by GaoChong on 2019/12/23.
//

#include "Solution24.h"

ListNode *Solution24::swapPairs(ListNode *head)
{
    if (!head || !head->next) return head;
    auto *pre_head = new ListNode(-1);
    pre_head->next = head->next;
    auto *prev = new ListNode(-1);
    prev->next = head;
    while (head) {
        if (head->next) {
            auto tmp_next = head->next;
            head->next = head->next->next;
            prev->next = tmp_next;
            tmp_next->next = head;
            prev = head;
            head = head->next;
        } else {
            return pre_head->next;
        }
    }
    return pre_head->next;
}