// Last updated: 11/3/2026, 10:32:13 PM
1class Solution {
2    public:
3    int m, n;
4    int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
5    int dfs(vector<vector<int>>& matrix, vector<vector<int>>& dp, int r, int c) {
6        if (dp[r][c] != 0) {
7            return dp[r][c];
8        }
9        int maxLen = 1;
10        for (int i = 0; i < 4; i++) {
11            int nr = r + dirs[i][0];
12            int nc = c + dirs[i][1];
13            if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
14                if (matrix[nr][nc] > matrix[r][c]) {
15                    maxLen = max(maxLen, 1 + dfs(matrix, dp, nr, nc));
16                }
17            }
18        }
19        dp[r][c] = maxLen;
20        return maxLen;
21    }
22
23    int longestIncreasingPath(vector<vector<int>>& matrix) {
24        m = matrix.size();
25        n = matrix[0].size();
26        vector<vector<int>> dp(m, vector<int>(n, 0));
27        int maxPath = 0;
28        for (int i = 0; i < m; i++) {
29            for (int j = 0; j < n; j++) {
30                maxPath = max(maxPath, dfs(matrix, dp, i, j));
31            }
32        }
33        
34        return maxPath;
35    }
36};
37