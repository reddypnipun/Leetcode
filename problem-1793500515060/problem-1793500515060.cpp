// Last updated: 11/1/2026, 8:05:15 AM
1class Solution {
2public:
3    int minMergedInteger(vector<int>& nums) {
4        int ans = INT_MAX;
5        for (int i = 0; i < nums.size(); i += 2) {
6            string s = to_string(nums[i]) + to_string(nums[i + 1]);
7            ans = min(ans, stoi(s));
8        }
9        return ans;
10    }
11};