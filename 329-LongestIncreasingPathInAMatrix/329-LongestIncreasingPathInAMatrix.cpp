// Last updated: 11/12/2026, 11:31:58 PM
class Solution {
    public:
    int m, n;
    int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int dfs(vector<vector<int>>& matrix, vector<vector<int>>& dp, int r, int c) {
        if (dp[r][c] != 0) {
            return dp[r][c];
        }
        int maxLen = 1;
        for (int i = 0; i < 4; i++) {
            int nr = r + dirs[i][0];
            int nc = c + dirs[i][1];
            if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                if (matrix[nr][nc] > matrix[r][c]) {
                    maxLen = max(maxLen, 1 + dfs(matrix, dp, nr, nc));
                }
            }
        }
        dp[r][c] = maxLen;
        return maxLen;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        int maxPath = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                maxPath = max(maxPath, dfs(matrix, dp, i, j));
            }
        }
        
        return maxPath;
    }
};
