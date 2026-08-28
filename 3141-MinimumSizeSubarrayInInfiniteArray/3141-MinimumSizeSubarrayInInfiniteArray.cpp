// Last updated: 8/28/2026, 2:59:18 PM
class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long full_cycles = target / sum; 
        target %= sum; 
        sum = 2;
        if (target == 0) return full_cycles * nums.size();
        vector<int> repeated;
        repeated.reserve(nums.size() * sum);

    for (int i = 0; i < sum; ++i) {
        repeated.insert(repeated.end(), nums.begin(), nums.end());
    }
    int min_len = INT_MAX;
        long long current_sum = 0;
        int f = 0; 
        for (int b = 0; b < repeated.size(); ++b) {
            current_sum += repeated[b];
            while (current_sum > target && f <= b) {
                current_sum -= repeated[f];
                f++;
            }
            if (current_sum == target) {
                min_len = min(min_len, b - f + 1);
            }
        }
        return (min_len == INT_MAX) ? -1 : min_len + (full_cycles * nums.size());
    }
};