//
// Created by GaoChong on 2020/1/27.
//

#include "Solution61.h"

ListNode *Solution61::rotateRight(ListNode *head, int k)
{
    // 检测长度
    int length = 0;
    ListNode *range = head;
    while (nullptr != range) {
        range = range->next;
        ++length;
    }
    if (0 == length) return head;
    k %= length;
    if (0 == k) return head;
    ListNode *new_head = swapEnds(head);
    if (1 == k) {
        return new_head;
    } else {
        return rotateRight(new_head, k - 1);
    }
}

ListNode *Solution61::swapEnds(ListNode *head)
{
    // 最后一个节点的前一个
    ListNode *new_head_bf = head;
    ListNode *new_head = head;
    while (new_head->next != nullptr) {
        new_head_bf = new_head;
        new_head = new_head->next;
    }
    new_head->next = head;
    new_head_bf->next = nullptr;
    return new_head;
}