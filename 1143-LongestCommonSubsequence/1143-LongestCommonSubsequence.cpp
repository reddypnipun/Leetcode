// Last updated: 10/20/2026, 11:09:44 PM
1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1, 0));
5        for(int i=1;i<=text1.size();i++){
6            for(int j=1;j<=text2.size();j++){
7                if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
8                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
9            }
10        }
11        return dp[text1.size()][text2.size()];
12    }
13};