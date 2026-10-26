// Last updated: 10/26/2026, 1:35:24 PM
1class Solution {
2public:
3    bool wordBreak(string s, vector<string>& wordDict) {
4        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
5        int n = s.length();
6        vector<bool> dp(n + 1, false);
7        dp[0] = true;
8        for (int i = 1; i <= n; ++i) {
9            for (int j = 0; j < i; ++j) {
10                if (dp[j] && wordSet.count(s.substr(j, i - j))) {
11                    dp[i] = true;
12                    break;
13                }
14            }
15        }
16        return dp[n];
17    }
18};
19