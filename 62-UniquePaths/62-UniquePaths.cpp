// Last updated: 9/27/2026, 10:35:37 PM
1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        int totalMoves = m + n - 2;
5        int k = min(m - 1, n - 1); 
6        long long res = 1;
7        for (int i = 1; i <= k; ++i) {
8            res = res * (totalMoves - k + i) / i;
9        }
10        return (int)res;
11    }
12};
13