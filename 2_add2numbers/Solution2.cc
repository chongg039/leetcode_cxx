//
// Created by chong on 2019/10/4.
//

#include "Solution2.h"

ListNode* Solution2::addTwoNumbers(ListNode *l1, ListNode *l2) {
    int x = 0, y = 0, carry = 0, sum = 0;
    ListNode *h = NULL;
    ListNode **t = &h;

    while (l1 != NULL || l2 != NULL) {
        x = getValueAndMoveNext(l1);
        y = getValueAndMoveNext(l2);

        sum = x + y + carry;

        ListNode* node = new ListNode(sum%10);
        *t = node;
        t = &node->next;

        carry = sum/10;
    }

    if (carry > 0) {
        ListNode *node = new ListNode(carry%10);
        *t = node;
    }

    return h;
}

int Solution2::getValueAndMoveNext(ListNode *&l) {
    int x = 0;
    if (l != NULL) {
        x = l->val;
        l = l->next;
    }
    return x;
}