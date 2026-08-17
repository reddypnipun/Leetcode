// Last updated: 8/17/2026, 4:07:19 PM
#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3 = malloc(sizeof(struct ListNode));
    struct ListNode* newnode = l3;

    int carry = 0;

    l3->val = l1->val + l2->val;
    if (l3->val > 9) {
        carry = l3->val / 10;
        l3->val %= 10;
    }

    while (1) {

        if (l1 != NULL)
            l1 = l1->next;
        if (l2 != NULL)
            l2 = l2->next;

        if (l1 == NULL && l2 == NULL && carry == 0) {
            newnode->next = NULL;
            break;
        }

        struct ListNode* newnode1 = malloc(sizeof(struct ListNode));
        newnode->next = newnode1;
        newnode = newnode1;

        int sum = carry;

        if (l1 != NULL)
            sum += l1->val;
        if (l2 != NULL)
            sum += l2->val;

        newnode->val = sum % 10;
        carry = sum / 10;
    }

    return l3;
}