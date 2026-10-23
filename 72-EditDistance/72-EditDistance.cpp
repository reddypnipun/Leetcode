// Last updated: 10/23/2026, 10:07:38 PM
1class Solution {
2public:
3    int minDistance(string w1, string w2) {
4        int m = w1.size();
5        int n = w2.size();
6        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
7        for (int i = 0; i <= m; i++) dp[i][0] = i;
8        for (int j = 0; j <= n; j++) dp[0][j] = j;
9        for (int i = 1; i <= m; i++) {
10            for (int j = 1; j <= n; j++) {
11                if (w1[i - 1] == w2[j - 1]) {
12                    dp[i][j] = dp[i - 1][j - 1];
13                } else {
14                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
15                }
16            }
17        }
18        return dp[m][n];
19    }
20};
21