// Last updated: 10/2/2026, 11:53:02 PM
1class Solution {
2public:
3    void backtrack(int start, vector<int>& nums, vector<vector<int>>& result) {
4        if (start == nums.size()) {
5            result.push_back(nums);
6            return;
7        }
8        
9        for (int i = start; i < nums.size(); ++i) {
10            swap(nums[start], nums[i]);
11            backtrack(start + 1, nums, result);
12            swap(nums[start], nums[i]);
13        }
14    }
15    vector<vector<int>> permute(vector<int>& nums) {
16        vector<vector<int>> result;
17        backtrack(0, nums, result);
18        return result;
19    }
20};
21