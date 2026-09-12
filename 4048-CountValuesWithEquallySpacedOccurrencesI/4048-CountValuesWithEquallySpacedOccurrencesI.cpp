// Last updated: 9/12/2026, 9:33:30 PM
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> NI;
        int n = nums.size(); 
        for (int i = 0; i < n; i++) {
            NI[nums[i]].push_back(i);
        }
        int specialCount = 0;
        for (auto const& [num, indices] : NI) {
            if (indices.size() == 3 && (indices[1] - indices[0] == indices[2] - indices[1])) {
                specialCount++;
            }
        }
        return specialCount;
    }
};