// Last updated: 9/13/2026, 7:11:38 PM
class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> result(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int org_i = (i + colShift[j] % n + n) % n;
                int org_j = (j + rowShift[org_i] % n + n) % n;
                result[i][j] = grid[org_i][org_j];
            }
        }
        return result;
    }
};