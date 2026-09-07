// Last updated: 9/7/2026, 9:14:41 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int l=0,r=nums.size()-1;
        int mid;
        while(l<r-1){
            mid=(l+r)/2;
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]) l=mid+1;
                else if(nums[mid]==nums[mid-1]) r=mid;
                else return nums[mid];
            }
            else{
                if(nums[mid]==nums[mid-1]) l=mid;
                else if(nums[mid]==nums[mid+1]) r=mid;
                else return nums[mid];
            }
        }
        if(nums[r]!=nums[r+1] && nums[r]!=nums[r-1]) return nums[r];
        else return nums[l];
    }
};