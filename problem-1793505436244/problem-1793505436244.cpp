// Last updated: 11/1/2026, 9:27:16 AM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
4    int n = nums.size();
5    int max_dest_needed = 0;
6    int required_unlocks = 0;
7    vector<int> current_locked = locked;
8    int chunk_start = 0;
9    for (int i = 0; i < n; ++i) {
10        int dest = nums[i] - 1;
11        max_dest_needed = max(max_dest_needed, dest);
12        if (max_dest_needed == i) {
13            if (chunk_start < i) {
14                for (int j = chunk_start; j <= i; ++j) {
15                    if (current_locked[j] == 1) {
16                        current_locked[j] = 0;
17                        required_unlocks++;
18                    }
19                }
20            }
21            chunk_start = i + 1;
22        }
23    }
24    if (required_unlocks > k) {
25        return -1;
26    }
27    int swaps = 0;
28    vector<int> arr = nums;
29    for (int i = 0; i < n; ++i) {
30        for (int j = 0; j < n - 1 - i; ++j) {
31            if (arr[j] > arr[j + 1]) {
32                if (current_locked[j] == 0 && current_locked[j + 1] == 0) {
33                    swap(arr[j], arr[j + 1]);
34                    swaps++;
35                } else {
36                    return -1;
37                }
38            }
39        }
40    }
41    return required_unlocks + swaps;
42}
43};