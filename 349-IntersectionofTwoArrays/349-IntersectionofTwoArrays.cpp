// Last updated: 9/16/2026, 10:02:03 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1,vector<int>& nums2) {
4        unordered_set<int> set1(nums1.begin(), nums1.end());
5        vector<int> result;
6        
7        for (int num : nums2) {
8            if (set1.count(num)) {
9                result.push_back(num);
10                set1.erase(num);
11            }
12        }
13        
14        return result;
15    }
16};
17