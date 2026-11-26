// Last updated: 11/26/2026, 10:19:38 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        ListNode* curr = head;
5        while (curr != nullptr && curr->next != nullptr) {
6            if (curr->val == curr->next->val) {
7                ListNode* temp = curr->next;
8                curr->next = curr->next->next;
9                delete temp;
10            } else {
11                curr = curr->next;
12            }
13        }
14        return head;
15    }
16};
17