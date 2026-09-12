// Last updated: 9/12/2026, 8:15:54 PM
1class Solution {
2public:
3    int countSpecialIntegers(vector<int>& nums) {
4        unordered_map<int, vector<int>> NI;
5        int n = nums.size(); 
6        for (int i = 0; i < n; i++) {
7            NI[nums[i]].push_back(i);
8        }
9        bool flag;
10        int specialCount = 0;
11        for (auto const& [num, indices] : NI) {
12            flag=true;
13            if (indices.size() >= 3){
14                int sz=indices.size();
15                for(int i=0;i<sz-2;i++){
16                    if(!(indices[i+1]-indices[i]==indices[i+2]-indices[i+1])) flag=false;
17                }
18                if(flag) specialCount++;
19            }}
20        return specialCount;
21    }
22};