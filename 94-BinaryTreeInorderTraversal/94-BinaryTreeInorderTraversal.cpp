// Last updated: 11/24/2026, 11:53:28 PM
1class Solution {
2public:
3    vector<int> inorderTraversal(TreeNode* root) {
4        vector<int> res;
5        dfs(root, res);
6        return res;
7    }
8    void dfs(TreeNode* node, vector<int>& res) {
9        if (!node) return;
10        dfs(node->left, res);
11        res.push_back(node->val);
12        dfs(node->right, res);
13    }
14};
15