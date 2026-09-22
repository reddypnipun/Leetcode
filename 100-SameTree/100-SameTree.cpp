// Last updated: 9/22/2026, 11:07:58 PM
1class Solution {
2public:
3    bool isSameTree(TreeNode* p, TreeNode* q) {
4        if (p == nullptr && q == nullptr) {
5            return true;
6        }
7        if (p == nullptr || q == nullptr) {
8            return false;
9        }
10        if (p->val != q->val) {
11            return false;
12        }   
13        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
14    }
15};
16