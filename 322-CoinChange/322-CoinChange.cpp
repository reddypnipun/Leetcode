// Last updated: 10/19/2026, 10:49:27 PM
1class Solution {
2public:
3    int coinChange(vector<int>& coins, int amount) {
4        vector<int>dp(amount+1,amount+1);
5        dp[0]=0;
6        for(int i=0;i<amount+1;i++){
7            for(int j=0;j<coins.size();j++){
8                if(i>=coins[j]){
9            dp[i]=min(dp[i],1+dp[i-coins[j]]);
10        }}}
11        if(dp[amount]==amount +1) return -1;
12        return dp[amount];
13    }
14};