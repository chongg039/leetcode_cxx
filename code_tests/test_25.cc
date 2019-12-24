//
// Created by GaoChong on 2019/12/23.
//
#include <iostream>
#include "../25_reverse_nodes_in_k_groups/Solution25.h"

int main()
{
    auto *l1 = new ListNode(1);
    auto *l2 = new ListNode(2);
    auto *l3 = new ListNode(3);
    auto *l4 = new ListNode(4);
    auto *l5 = new ListNode(5);
    auto *l6 = new ListNode(6);
    auto *l7 = new ListNode(7);
    auto *l8 = new ListNode(8);
    auto *l9 = new ListNode(9);
    auto *l10 = new ListNode(10);
    auto *l11 = new ListNode(11);
    auto *prev = new ListNode(-1);
    prev->next = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = l6;
    l6->next = l7;
    l7->next = l8;
    l8->next = l9;
    l9->next = l10;
    l10->next = l11;

//    auto *result = Solution25::swap_once(l1, l5);
//    auto *result = Solution25::swap(prev, 5);
    auto *result = Solution25::reverseKGroups(l1, 5);
    while (result) {
        std::cout << result->val;
        if (result->next) std::cout << "->";
        result = result->next;
    }
    std::cout << std::endl;
    return 0;
}
