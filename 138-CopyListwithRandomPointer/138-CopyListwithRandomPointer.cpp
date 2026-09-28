// Last updated: 9/28/2026, 2:07:37 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8    
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18public:
19    int findpos(Node* find,Node* head){
20        Node* tem=head;
21        int c=0;
22        while(tem!=find){
23            c++;
24            tem=tem->next;
25        }
26        return c;
27    }
28    Node* copyRandomList(Node* head) {
29        Node* tem=head;
30        if(head==NULL)return head;
31        Node* head2=new Node(tem->val);
32        tem=tem->next;
33        Node*tem2=head2;
34        while(tem){
35            Node* newNode = new Node(tem->val);
36            tem2->next=newNode;
37            tem2=tem2->next;
38            tem=tem->next;
39        }
40        tem2->next=NULL;
41        tem2=head2;
42        tem=head;
43        while(tem){
44            if(tem->random==NULL) tem2->random=NULL;
45            else{
46                Node* tem3=head2;
47                int k=findpos(tem->random,head);
48            for(int i=0;i<k;i++){
49                tem3=tem3->next;
50            }
51            tem2->random=tem3;
52            }
53            tem=tem->next;
54            tem2=tem2->next;
55        }
56        return head2;
57    }
58};