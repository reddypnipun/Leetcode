// Last updated: 9/29/2026, 11:37:02 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    int findpos(Node* find,Node* head){
        Node* tem=head;
        int c=0;
        while(tem!=find){
            c++;
            tem=tem->next;
        }
        return c;
    }
    Node* copyRandomList(Node* head) {
        Node* tem=head;
        if(head==NULL)return head;
        Node* head2=new Node(tem->val);
        tem=tem->next;
        Node*tem2=head2;
        while(tem){
            Node* newNode = new Node(tem->val);
            tem2->next=newNode;
            tem2=tem2->next;
            tem=tem->next;
        }
        tem2->next=NULL;
        tem2=head2;
        tem=head;
        while(tem){
            if(tem->random==NULL) tem2->random=NULL;
            else{
                Node* tem3=head2;
                int k=findpos(tem->random,head);
            for(int i=0;i<k;i++){
                tem3=tem3->next;
            }
            tem2->random=tem3;
            }
            tem=tem->next;
            tem2=tem2->next;
        }
        return head2;
    }
};