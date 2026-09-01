// Last updated: 9/1/2026, 8:48:03 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorderRecursive(TreeNode* root, int &result,int &c,int k) {
    if (root == nullptr) return; 
    inorderRecursive(root->left, result,c,k);
    c++;
    if(c==k) result=root->val;         
    inorderRecursive(root->right, result, c,k); 
}
    int kthSmallest(TreeNode* root, int k) {
        int result;
        int c=0;
        inorderRecursive(root, result, c,k);
        return result;
    }
};