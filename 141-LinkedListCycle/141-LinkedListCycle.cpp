// Last updated: 10/10/2026, 10:26:21 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        if (head == nullptr || head->next == nullptr) {
13            return false;
14        }
15        ListNode *slow = head;
16        ListNode *fast = head;
17        while (fast != nullptr && fast->next != nullptr) {
18            slow = slow->next;
19            fast = fast->next->next;
20            if (slow == fast) {
21                return true;
22            }
23        }
24        return false;
25    }
26};
27