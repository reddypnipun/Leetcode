// Last updated: 10/12/2026, 8:38:07 PM
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) {
4        int n = cost.size();
5        vector<int> dp(n + 1, 0);
6        for(int i = 2; i <= n; i++){
7            dp[i] = min(dp[i-1] +cost[i-1], dp[i-2] +cost[i-2]);
8        }
9        return dp[n];
10    }
11};