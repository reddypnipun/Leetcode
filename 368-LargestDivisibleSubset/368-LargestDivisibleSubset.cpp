// Last updated: 11/13/2026, 11:16:32 PM
1class Solution {
2public:
3    vector<int> largestDivisibleSubset(vector<int>& nums) {
4        int n = nums.size();
5        if (n == 0) return {};
6        sort(nums.begin(), nums.end());
7        vector<int> dp(n, 1);
8        vector<int> p(n, -1);
9        int m_len = 1, m_idx = 0;
10        for (int i = 1; i < n; ++i) {
11            for (int j = 0; j < i; ++j) {
12                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
13                    dp[i] = dp[j] + 1;
14                    p[i] = j;
15                }
16            }
17            if (dp[i] > m_len) {
18                m_len = dp[i];
19                m_idx = i;
20            }
21        }
22        vector<int> res;
23        while (m_idx != -1) {
24            res.push_back(nums[m_idx]);
25            m_idx = p[m_idx];
26        }
27        return res;
28    }
29};