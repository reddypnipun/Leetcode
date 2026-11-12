// Last updated: 11/12/2026, 11:31:16 PM
class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return 0;
        int m = matrix[0].size();
        vector<vector<int>> left(n, vector<int>(m, 0));
        vector<vector<int>> top(n, vector<int>(m, 0));
        int maxSide = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 1) {
                    if (j == 0) {
                        left[i][j] = 1;
                    } else {
                        left[i][j] = left[i][j - 1] + 1;
                    }
                    if (i == 0) {
                        top[i][j] = 1;
                    } else {
                        top[i][j] = top[i - 1][j] + 1;
                    }
                }
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int small = min(left[i][j], top[i][j]);
                while (small > maxSide) {
                    if (left[i - small + 1][j] >= small && top[i][j - small + 1] >= small) {
                        maxSide = small;
                        break;
                    }
                    small--;
                }
            }
        }
        return maxSide * maxSide;
    }
};
