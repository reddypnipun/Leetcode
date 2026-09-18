// Last updated: 9/18/2026, 11:22:12 PM
1class Solution {
2public:
3    int longestArithSeqLength(vector<int>& nums) {
4        int n = nums.size();
5        if (n <= 2) return n;
6        int maxLength = 2;
7        vector<vector<int>> dp(n, vector<int>(1001, 1));
8        for (int i = 1; i < n; i++) {
9            for (int j = 0; j < i; j++) {
10                int diff = nums[i] - nums[j] + 500;
11                dp[i][diff] = max(dp[i][diff], dp[j][diff] + 1);
12                maxLength = max(maxLength, dp[i][diff]);
13            }
14        }
15
16        return maxLength;
17    }
18};
19