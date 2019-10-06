#include <iostream>
#include <vector>
#include "1_two_sum/Solution1.h"
#include "2_add2numbers/Solution2.h"

using std::vector;
using std::cout;
using std::endl;

int main() {
//    vector<int> nums = {2, 7, 11, 15};
//    int target = 9;
//
//    vector<int> result_1 = Solution2().twoSum(nums, target);
//
//    cout << "The result is ";
//    for (auto i = result_1.cbegin(); i != result_1.cend(); ++i) {
//        cout << *i << " ";
//    }
//    cout << endl;
//    return 0;
    struct ListNode l11(2);
    struct ListNode l12(4);
    struct ListNode l13(3);
    struct ListNode l21(5);
    struct ListNode l22(6);
    struct ListNode l23(4);

    l11.next = &l12;
    l12.next = &l13;
    l21.next = &l22;
    l22.next = &l23;

    ListNode* result = NULL;
    result = Solution2().addTwoNumbers(&l11, &l21);
    while (result != NULL) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}