// Last updated: 10/14/2026, 9:38:59 PM
1class Solution {
2public:
3    int numDecodings(string s) {
4        if (s[0] == '0') return 0;
5        int n = s.size();
6        vector<int> dp(n + 1, 0);
7        dp[0] = 1;
8        dp[1] = 1;
9        
10        for (int i = 2; i <= n; i++) {
11            if (s[i-1] != '0') {
12                dp[i] += dp[i-1];
13            }
14            int twoDigit = (s[i-2] - '0') * 10 + (s[i-1] - '0');
15            if (twoDigit >= 10 && twoDigit <= 26) {
16                dp[i] += dp[i-2];
17            }
18        }
19        
20        return dp[n];
21    }
22};
23