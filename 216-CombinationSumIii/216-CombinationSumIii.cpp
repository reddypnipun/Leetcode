// Last updated: 8/18/2026, 2:26:41 AM
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> finalans;
        vector<int> current_path;
        backtrack(1, k, n, current_path, finalans);
        return finalans;
    }
    void backtrack(int start_num, int k, int target_sum, vector<int>& current_path, vector<vector<int>>& finalans) {
        if (current_path.size() == k && target_sum == 0) {
            finalans.push_back(current_path);
            return;
        }
        if (current_path.size() == k || target_sum < 0) {
            return; 
        }
        for (int i = start_num; i <= 9; i++) {
            current_path.push_back(i);
            backtrack(i + 1, k, target_sum - i, current_path, finalans);
            current_path.pop_back();
        }
    }
};