// Last updated: 9/12/2026, 8:05:19 PM
1class Solution {
2public:
3    int countSpecialIntegers(vector<int>& nums) {
4        unordered_map<int, vector<int>> NI;
5        int n = nums.size(); 
6        for (int i = 0; i < n; i++) {
7            NI[nums[i]].push_back(i);
8        }
9        int specialCount = 0;
10        for (auto const& [num, indices] : NI) {
11            if (indices.size() == 3 && (indices[1] - indices[0] == indices[2] - indices[1])) {
12                specialCount++;
13            }
14        }
15        return specialCount;
16    }
17};