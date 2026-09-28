// Last updated: 9/28/2026, 2:22:45 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int sum=0;
5        int n=nums.size();
6        vector<int> freq(n,0);
7        for(int i=0;i<n;i++){
8            freq[nums[i]]++;
9            if(freq[nums[i]]>1) return nums[i];
10        }
11        return 0;
12    }
13};