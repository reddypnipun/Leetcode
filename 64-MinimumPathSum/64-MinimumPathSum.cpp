// Last updated: 10/22/2026, 10:37:09 PM
1class Solution {
2public:
3    int minPathSum(vector<vector<int>>& grid) {
4        int m = grid.size();
5        int n = grid[0].size();
6        vector<vector<int>> dp(m, vector<int>(n, 0));
7        dp[0][0] = grid[0][0];
8        for (int j = 1; j < n; j++) {
9            dp[0][j] = dp[0][j - 1] + grid[0][j];
10        }
11        for (int i = 1; i < m; i++) {
12            dp[i][0] = dp[i - 1][0] + grid[i][0];
13        }
14        for (int i = 1; i < m; i++) {
15            for (int j = 1; j < n; j++) {
16                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
17            }
18        }        
19        return dp[m - 1][n - 1];
20    }
21};
22