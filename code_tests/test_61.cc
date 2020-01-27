//
// Created by GaoChong on 2020/1/27.
//
#include <iostream>
#include "../61_rotate_list/Solution61.h"

int main()
{
    ListNode l1{1};
    ListNode l2{2};
    ListNode l3{3};
    ListNode l4{4};
    ListNode l5{5};
    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    l4.next = &l5;
    int k = 2;
    ListNode *new_head = Solution61::rotateRight(&l1, k);
    while (new_head) {
        std::cout << new_head->val << "->";
        new_head = new_head->next;
    }
    std::cout << "NULL" << std::endl;
    return 0;
}