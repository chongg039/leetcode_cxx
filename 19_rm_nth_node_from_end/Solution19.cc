//
// Created by GaoChong on 2019/12/21.
//

#include "Solution19.h"

ListNode *Solution19::removeNthFromEnd(ListNode *head, int n)
{
    if (!head) return head;
    int list_length = 1;
    ListNode *range_head = head;
    while (range_head->next != nullptr) {
        ++list_length;
        range_head = range_head->next;
    }
    if (list_length < n) return head;
    if (n == list_length) {
        ListNode *new_head = head->next;
        delete head;
        return new_head;
    }
    int i = 0;
    ListNode *rm_node = head;
    ListNode *rm_bf = head;
    while (i < list_length - n) {
        rm_bf = rm_node;
        rm_node = rm_node->next;
        ++i;
    }
    rm_bf->next = rm_node->next;
    return head;
}