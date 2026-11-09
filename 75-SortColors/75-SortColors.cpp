// Last updated: 11/9/2026, 9:23:30 AM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int idx=0;
5        int n=nums.size();
6        if(nums[idx]==*min_element(nums.begin(), nums.end())) idx++;
7        for(int i=0;i<3;i++){
8            for(int j=idx;j<n;j++){
9                if(nums[j]==i){ swap(nums[j],nums[idx]);idx++;}
10            }
11        }
12    }
13};