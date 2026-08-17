// Last updated: 8/17/2026, 4:06:50 PM
class Solution {
public:
    int longestSubsequence(std::vector<int>& nums) {
        int n = nums.size();
        bool all_zeros = std::all_of(nums.begin(), nums.end(), [](int x) { return x == 0; });
        if (all_zeros) return 0;
        int total_xor = 0;
        for (int num : nums) {
            total_xor ^= num;
        }
        return (total_xor != 0) ? n : n - 1;
    }
};