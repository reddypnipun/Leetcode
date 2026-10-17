// Last updated: 10/17/2026, 10:35:53 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n = nums.size();
5        if (n == 0) return 0;
6        vector<int> dp_max(n);
7        vector<int> dp_min(n);
8        dp_max[0] = nums[0];
9        dp_min[0] = nums[0];
10        int res = nums[0];
11        for (int i = 1; i < n; ++i) {
12            if (nums[i] < 0) {
13                dp_max[i] = max(nums[i], dp_min[i - 1] * nums[i]);
14                dp_min[i] = min(nums[i], dp_max[i - 1] * nums[i]);
15            } else {
16                dp_max[i] = max(nums[i], dp_max[i - 1] * nums[i]);
17                dp_min[i] = min(nums[i], dp_min[i - 1] * nums[i]);
18            }
19            res = max(res, dp_max[i]);
20        }
21        return res;
22    }
23};
24