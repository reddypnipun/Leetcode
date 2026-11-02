// Last updated: 11/2/2026, 11:51:34 PM
1class Solution {
2public:
3    int largest1BorderedSquare(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        if (n == 0) return 0;
6        int m = matrix[0].size();
7        vector<vector<int>> left(n, vector<int>(m, 0));
8        vector<vector<int>> top(n, vector<int>(m, 0));
9        int maxSide = 0;
10        for (int i = 0; i < n; i++) {
11            for (int j = 0; j < m; j++) {
12                if (matrix[i][j] == 1) {
13                    if (j == 0) {
14                        left[i][j] = 1;
15                    } else {
16                        left[i][j] = left[i][j - 1] + 1;
17                    }
18                    if (i == 0) {
19                        top[i][j] = 1;
20                    } else {
21                        top[i][j] = top[i - 1][j] + 1;
22                    }
23                }
24            }
25        }
26        for (int i = n - 1; i >= 0; i--) {
27            for (int j = m - 1; j >= 0; j--) {
28                int small = min(left[i][j], top[i][j]);
29                while (small > maxSide) {
30                    if (left[i - small + 1][j] >= small && top[i][j - small + 1] >= small) {
31                        maxSide = small;
32                        break;
33                    }
34                    small--;
35                }
36            }
37        }
38        return maxSide * maxSide;
39    }
40};
41