// Last updated: 8/24/2026, 2:12:20 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* tem=head;
        while(tem!=NULL){
            tem=tem->next;
            cnt++;
        }
        tem=head;
        for(int i=0;i<cnt-n-1;i++){
            tem=tem->next;
        }
        if(tem->next==NULL) return NULL;
        else if(cnt-n-1==-1) return head->next;
        tem->next=tem->next->next;
        return head;
    }
};