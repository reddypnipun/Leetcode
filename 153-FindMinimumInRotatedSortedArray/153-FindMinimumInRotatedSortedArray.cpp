// Last updated: 9/5/2026, 6:19:11 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums[r]>nums[l]){
            r=0;}
        while(l<r){
            if(l==r-1) break;
            if(nums[r]<nums[(l+r)/2])l=(l+r)/2;
            else if(nums[r]>nums[(l+r)/2]) r=(l+r)/2;
        }
        return(nums[r]);
    }
};