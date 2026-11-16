// Last updated: 11/16/2026, 11:00:55 PM
1class Solution {
2public:
3    int minimumTotal(vector<vector<int>>& triangle) {
4        vector<int> dp = triangle.back();
5        int n = triangle.size();
6        for (int i = n - 2; i >= 0; --i) {
7            for (int j = 0; j <= i; ++j) {
8                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
9            }
10        }
11        return dp[0];
12    }
13};
14