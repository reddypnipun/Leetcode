// Last updated: 8/20/2026, 9:45:56 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int f=0;
        int b=nums.size()-1;
        while(f<b){
            if(nums[f]+nums[b]<target) f++;
            else if(nums[f]+nums[b]>target)b--;
            else break;
        }
        return{f+1,b+1};
    }
};
