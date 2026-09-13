// Last updated: 9/13/2026, 8:05:38 AM
1class Solution {
2public:
3    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
4        vector<vector<int>> result(n, vector<int>(n));
5        for (int i = 0; i < n; ++i) {
6            for (int j = 0; j < n; ++j) {
7                int org_i = (i + colShift[j] % n + n) % n;
8                int org_j = (j + rowShift[org_i] % n + n) % n;
9                result[i][j] = grid[org_i][org_j];
10            }
11        }
12        return result;
13    }
14};