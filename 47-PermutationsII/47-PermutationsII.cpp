// Last updated: 10/8/2026, 11:35:17 PM
1class Solution {
2public:
3    void permute(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, vector<bool>& used) {
4        if (current.size() == nums.size()) {
5            result.push_back(current);
6            return;
7        }
8        for (int i = 0; i < nums.size(); ++i) {
9            if (used[i]) continue;
10            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;
11            used[i] = true;
12            current.push_back(nums[i]);
13            permute(nums, result, current, used);
14            current.pop_back();
15            used[i] = false;
16        }
17    }
18
19    vector<vector<int>> permuteUnique(vector<int>& nums) {
20        vector<vector<int>> result;
21        vector<int> current;
22        vector<bool> used(nums.size(), false);
23        sort(nums.begin(), nums.end());
24        permute(nums, result, current, used);
25        return result;
26    }
27};
28