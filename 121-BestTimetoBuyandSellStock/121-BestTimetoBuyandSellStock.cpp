// Last updated: 10/12/2026, 11:35:42 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        bool possible=false;
5        for(int i=1;i<prices.size();i++){
6            if(prices[i]>prices[i-1]) possible=true;
7        }
8        if(!possible) return 0;
9        vector<int> dp(prices.size()+1,0);
10        dp[0]=prices[0];
11        int maxprice=0,price=0;
12        for(int i=1;i<prices.size();i++){
13            dp[i]=min(prices[i],dp[i-1]);
14            price=prices[i]-dp[i];
15            maxprice=max(price,maxprice);
16        }
17        return maxprice;
18    }
19};