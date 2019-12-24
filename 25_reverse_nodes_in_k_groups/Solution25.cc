//
// Created by GaoChong on 2019/12/23.
//

#include "Solution25.h"

ListNode *Solution25::reverseKGroups(ListNode *head, int k)
{
    auto *range_v = head;
    int i = 0;
    while (range_v) {
        ++i;
        range_v = range_v->next;
    }
    if (i < k) return head;

    auto *pre_head = new ListNode(-1);
    auto *prev = pre_head;
    pre_head->next = head;
    for (int j = 0; j < k; ++j) {
        pre_head = pre_head->next;
    }
    while (i >= k) {
        auto *new_head = swap(prev, k);
        prev->next = new_head;
        for (int j = 0; j < k; ++j) {
            prev = prev->next;
        }
        i -= k;
    }
    return pre_head;
}

ListNode *Solution25::swap(ListNode *prev, int k)
{
    auto *new_head = prev->next;
    int counter = k;
    while (counter > 1) {
        auto *new_tail = new_head;
        for (int i = 1; i < counter; ++i) {
            new_tail = new_tail->next;
        }
        new_head = swap_once(new_head, new_tail);
        --counter;
    }
    return new_head;
}

ListNode* Solution25::swap_once(ListNode *head, ListNode *tail)
{
    auto *new_head = head->next;
    auto *last_next = tail->next;
    tail->next = head;
    head->next = last_next;
    return new_head;
}