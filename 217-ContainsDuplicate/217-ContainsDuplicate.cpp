// Last updated: 9/19/2026, 10:08:01 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> seen;
5        for (int num : nums) {
6            if (seen.count(num)) {
7                return true;
8            }
9            seen.insert(num);
10        }
11        return false;
12    }
13};
14