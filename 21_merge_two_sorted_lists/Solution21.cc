//
// Created by GaoChong on 2019/12/21.
//

#include "Solution21.h"

ListNode *Solution21::mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (!l1) return l2;
    if (!l2) return l1;
    ListNode *big_head_list;
    ListNode *small_head_list;
    if (l2->val >= l1->val) {
        big_head_list = l2;
        small_head_list = l1;
    } else {
        big_head_list = l1;
        small_head_list = l2;
    }
    while (big_head_list) {
        if (big_head_list->val >= small_head_list->val) {
            if (small_head_list->next == nullptr) small_head_list->next = big_head_list
            if (big_head_list->val >= small_head_list)
        }
    }

}