// Last updated: 8/20/2026, 8:10:00 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums_2;
        nums_2=nums;
        sort(nums_2.begin(), nums_2.end());
        int i=0;
        int j=nums_2.size()-1;
        while(i<j){
            if(nums_2[i]+nums_2[j]>target)j--;
            else if(nums_2[i]+nums_2[j]<target) i++;
            else break;
        }
        int val_i = nums_2[i];
        int val_j = nums_2[j];
        int ans_i = -1;
        int ans_j = -1;
        for(int idx=0;idx<nums.size();idx++){
            if(ans_i == -1 && nums[idx]==val_i){
                ans_i=idx;
                continue;
            }
            else if(ans_j == -1 && nums[idx]==val_j){
                ans_j=idx;
            }
        }
        return {ans_i,ans_j};
    }
};
