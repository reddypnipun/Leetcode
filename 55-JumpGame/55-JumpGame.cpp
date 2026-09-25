// Last updated: 9/25/2026, 10:03:23 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4    int max_reach = 0;
5    int last_index = nums.size() - 1;
6    for (int i = 0; i <= max_reach; ++i) {
7        max_reach = max(max_reach, i + nums[i]);
8        if (max_reach >= last_index) {
9            return true;
10        }
11        if (i == last_index) {
12            break;
13        }
14    }    
15    return false;
16}
17};