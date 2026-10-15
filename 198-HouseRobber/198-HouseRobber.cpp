// Last updated: 10/15/2026, 11:30:06 PM
class Solution {
public:
    int robh(int k, vector<int>& nums, vector<int>& dp) {
        if (k >= nums.size()) {
            return 0;
        }
        if (dp[k] != -1) {
            return dp[k];
        }
        dp[k] = max(nums[k] + robh(k + 2, nums, dp), robh(k + 1, nums, dp));
        return dp[k];
    }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return robh(0, nums, dp); 
    }
};