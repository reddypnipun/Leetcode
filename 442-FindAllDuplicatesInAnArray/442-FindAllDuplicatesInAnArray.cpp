// Last updated: 8/20/2026, 8:09:34 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans(nums.size() + 1, 0);
        for (int num : nums) {
            ans[num]++;
        }
        int k=0;
        for (int i = 1; i <= nums.size(); i++) {
            if(ans[i]>1) {ans[k]=i; k++;}
        }
        for(int i=k;i<=nums.size();i++)ans.pop_back();
        return ans;

    }
};
