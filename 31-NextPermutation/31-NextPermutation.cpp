// Last updated: 8/17/2026, 4:06:55 PM
#include <vector>
#include <climits>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        for(;i>=0;i--){
            int sgw=INT_MAX;
            int idx;
            int j;
            j=i+1;
            for(;j<n;j++){
                if(nums[j]>nums[i] && sgw>nums[j]){
                    sgw=nums[j];
                    idx=j;
                }
            }
            if(sgw!=INT_MAX){
                swap(nums[i],nums[idx]);
                break;
                    }
                }
                sort(nums.begin()+i+1,nums.end());
    }
};