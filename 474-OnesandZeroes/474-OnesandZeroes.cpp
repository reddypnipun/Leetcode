// Last updated: 10/31/2026, 10:01:46 PM
1class Solution {
2public:
3    int findMaxForm(vector<string>& strs, int m, int n) {
4        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
5        for (const string& s : strs) {
6            int z = 0, o = 0;
7            for (char c : s) {
8                if (c == '0') z++;
9                else o++;
10            }
11            for (int i = m; i >= z; i--) {
12                for (int j = n; j >= o; j--) {
13                    dp[i][j] = max(dp[i][j], dp[i - z][j - o] + 1);
14                }
15            }
16        }  
17        return dp[m][n];
18    }
19};
20