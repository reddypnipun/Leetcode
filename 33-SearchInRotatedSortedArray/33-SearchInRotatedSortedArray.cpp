// Last updated: 8/17/2026, 5:24:15 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        int i = 0, j = nums.size() - 1;        
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] > nums[j]) i = mid + 1;
            else j = mid;
        }
        vector<int>::iterator it;        
        if (target >= nums[i] && target <= nums[nums.size() - 1]) {
            it = lower_bound(nums.begin() + i, nums.end(), target);
        }
        else if (i > 0 && target >= nums[0] && target <= nums[i - 1]) {
            it = lower_bound(nums.begin(), nums.begin() + i, target);
        }
        else {
            return -1;
        }      
        int index = it - nums.begin();        
        if (it != nums.end() && nums[index] == target) {
            return index;
        }
        return -1;
    }
};