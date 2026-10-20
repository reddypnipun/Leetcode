// Last updated: 10/21/2026, 1:41:43 AM
1class Solution {
2public:
3    int maxRotateFunction(vector<int>& nums) {
4        int n = nums.size();
5        vector<long long> dp(n, 0); 
6        long long sum = 0;
7        for(int i = 0; i < n; i++) {
8            dp[0] += (long long)i * nums[i]; 
9            sum += nums[i];
10        }
11        long long max_val = dp[0];
12        for(int i = 1; i < n; i++){
13            dp[i] = dp[i-1] + sum - ((long long)n * nums[n - i]);
14            max_val = max(max_val, dp[i]);
15        }
16        return (int)max_val; 
17    }
18};
19