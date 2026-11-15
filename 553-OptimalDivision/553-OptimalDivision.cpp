// Last updated: 11/15/2026, 2:48:17 PM
1class Solution {
2public:
3    string optimalDivision(vector<int>& nums) {
4        if(nums.size()==1) return to_string(nums[0]);
5        else if(nums.size()==2) return to_string(nums[0])+'/'+to_string(nums[1]);
6        else{
7            string s=to_string(nums[0]);
8            s+='/';
9            s+='(';
10            for(int i=1;i<nums.size()-1;i++){
11                s+=to_string(nums[i]);
12                s+='/';
13            }
14            s+=to_string(nums[nums.size()-1]);
15            s+=')';
16            return s;
17        }
18        
19    }
20};