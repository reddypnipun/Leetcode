// Last updated: 11/4/2026, 10:17:27 PM
1class Solution {
2public:
3    bool canPartition(vector<int>& nums) {
4        int totalSum = 0;
5        for (int num : nums) {
6            totalSum += num;
7        }
8        if (totalSum % 2 != 0) {
9            return false;
10        }
11        int target = totalSum / 2;
12        vector<bool> dp(target + 1, false);
13        dp[0] = true;
14        for (int num : nums) {
15            for (int j = target; j >= num; j--) {
16                if (dp[j - num]) {
17                    dp[j] = true;
18                }
19            }
20        }
21        return dp[target];
22    }
23};
24