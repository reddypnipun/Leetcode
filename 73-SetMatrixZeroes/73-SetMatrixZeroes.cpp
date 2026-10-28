// Last updated: 10/28/2026, 11:35:13 PM
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        vector<bool> rowFlags(n, false);
7        vector<bool> colFlags(m, false);
8        for(int i = 0; i < n; i++) {
9            for(int j = 0; j < m; j++) {
10                if(matrix[i][j] == 0) {
11                    rowFlags[i] = true;
12                    colFlags[j] = true;
13                }
14            }
15        }
16        for(int i = 0; i < n; i++) {
17            for(int j = 0; j < m; j++) {
18                if(rowFlags[i] || colFlags[j]) {
19                    matrix[i][j] = 0;
20                }
21            }
22        }
23    }
24};
25