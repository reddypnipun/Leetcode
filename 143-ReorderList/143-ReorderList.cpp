// Last updated: 9/28/2026, 12:31:03 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    void reorderList(ListNode* head) {
14        vector<ListNode*> arr;
15        ListNode* tem=head;
16        int n=0;
17        while(tem){
18            arr.push_back(tem);
19            tem=tem->next;
20        }
21        int f=0;
22        int b=arr.size()-1;
23        while (f < b) {
24            arr[f]->next = arr[b];
25            f++;
26            if (f == b) break;
27            arr[b]->next = arr[f];
28            b--;
29        }
30        arr[f]->next = nullptr;
31    }
32};