// Last updated: 10/16/2026, 10:46:27 PM
1class Solution {
2public:
3    int numberOfArithmeticSlices(vector<int>& nums) {
4        int n = nums.size();
5        if (n < 3) return 0;
6        int total = 0;
7        int current = 0;
8        for (int i = 2; i < n; i++) {
9            if (nums[i] - nums[i-1] == nums[i-1] - nums[i-2]) {
10                current++;
11                total += current;
12            } else {
13                current = 0;
14            }
15        }
16        return total;
17    }
18};
19