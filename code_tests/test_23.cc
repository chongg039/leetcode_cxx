//
// Created by GaoChong on 2019/12/22.
//
#include <vector>
#include <iostream>
#include "../23_merge_k_sorted_lists/Solution23.h"

int main()
{
    auto l1 = new ListNode(1);
    auto l2 = new ListNode(1);
    auto l3 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(5);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    l3->next = new ListNode(6);

    std::vector<ListNode *> lists({l1, l2, l3});
    auto result = Solution23::mergeKLists(lists);
    while (result) {
        std::cout << result->val;
        if (result->next) std::cout << "->";
        result = result->next;
    }
    std::cout << std::endl;
    return 0;
}
