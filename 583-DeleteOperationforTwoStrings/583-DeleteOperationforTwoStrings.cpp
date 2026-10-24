// Last updated: 10/24/2026, 10:24:18 PM
1class Solution {
2public: 
3int minDistance(string w1, string w2) {
4    int m = w1.length();
5    int n = w2.length();
6    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
7    for (int i = 1; i <= m; i++) {
8        for (int j = 1; j <= n; j++) {
9            if (w1[i - 1] == w2[j - 1]) {
10                dp[i][j] = dp[i - 1][j - 1] + 1;
11            } else {
12                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
13            }
14        }
15    }
16    return (m - dp[m][n]) + (n - dp[m][n]);
17}
18
19};