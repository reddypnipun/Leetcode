// Last updated: 11/25/2026, 11:32:49 PM
1class Solution {
2public:
3    int integerBreak(int n) {
4        vector<int> dp(n + 1, 0);
5        dp[1] = 1;
6        for (int i = 2; i <= n; ++i) {
7            for (int j = 1; j <= i / 2; ++j) {
8                dp[i] = max(dp[i], max(j, dp[j]) * max(i - j, dp[i - j]));
9            }
10        }
11        return dp[n];
12    }
13};