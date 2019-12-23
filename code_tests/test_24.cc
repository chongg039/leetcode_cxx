//
// Created by GaoChong on 2019/12/23.
//
#include <iostream>
#include "../24_swap_nodes_in_pairs/Solution24.h"

int main()
{
    auto l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);

    auto result = Solution24::swapPairs(l1);
    while (result) {
        std::cout << result->val;
        if (result->next) std::cout << "->";
        result = result->next;
    }
    std::cout << std::endl;
    return 0;
}
