// Last updated: 9/12/2026, 9:33:32 PM
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> NI;
        int n = nums.size(); 
        for (int i = 0; i < n; i++) {
            NI[nums[i]].push_back(i);
        }
        bool flag;
        int specialCount = 0;
        for (auto const& [num, indices] : NI) {
            flag=true;
            if (indices.size() >= 3){
                int sz=indices.size();
                for(int i=0;i<sz-2;i++){
                    if(!(indices[i+1]-indices[i]==indices[i+2]-indices[i+1])) flag=false;
                }
                if(flag) specialCount++;
            }}
        return specialCount;
    }
};