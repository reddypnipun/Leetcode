// Last updated: 9/7/2026, 9:15:09 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (nums.empty()) return false;
        int max_idx = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                max_idx = i;
                break;
            }
            if (nums[i] == nums[i + 1] && nums[i] >= nums[max_idx]) {
                max_idx = i;
            }
        }
        int low, high;
        if (target >= nums[0] && target <= nums[max_idx]) {
            low = 0;
            high = max_idx;
        } else {
            low = max_idx + 1;
            high = nums.size() - 1;
        }
        if (low > high) return false;
        return binary_search(nums.begin() + low, nums.begin() + high + 1, target);
    }
};
