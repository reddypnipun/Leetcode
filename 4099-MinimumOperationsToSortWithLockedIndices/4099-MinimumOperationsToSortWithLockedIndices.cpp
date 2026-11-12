// Last updated: 11/12/2026, 11:30:58 PM
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
    int n = nums.size();
    int max_dest_needed = 0;
    int required_unlocks = 0;
    vector<int> current_locked = locked;
    int chunk_start = 0;
    for (int i = 0; i < n; ++i) {
        int dest = nums[i] - 1;
        max_dest_needed = max(max_dest_needed, dest);
        if (max_dest_needed == i) {
            if (chunk_start < i) {
                for (int j = chunk_start; j <= i; ++j) {
                    if (current_locked[j] == 1) {
                        current_locked[j] = 0;
                        required_unlocks++;
                    }
                }
            }
            chunk_start = i + 1;
        }
    }
    if (required_unlocks > k) {
        return -1;
    }
    int swaps = 0;
    vector<int> arr = nums;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                if (current_locked[j] == 0 && current_locked[j + 1] == 0) {
                    swap(arr[j], arr[j + 1]);
                    swaps++;
                } else {
                    return -1;
                }
            }
        }
    }
    return required_unlocks + swaps;
}
};