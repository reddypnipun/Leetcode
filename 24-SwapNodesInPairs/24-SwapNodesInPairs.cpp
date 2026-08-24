// Last updated: 8/24/2026, 12:52:50 PM
//can someone tell me why is my memory at 11.37 even though i used only 3,4 variable and not suddenly is 11.07 ,how?? on wt does it depent on 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* tem=head;
        ListNode* prev=tem;
        ListNode* tem2=nullptr;
        while(tem !=NULL && tem->next!=NULL){
            if(tem!=head) prev->next=tem->next;
            if(tem==head)head=tem->next;
            tem2=tem->next->next;
            tem->next->next=tem;
            tem->next=tem2;
            prev=tem;
            tem=tem2;
        }
        return head;
    }
};