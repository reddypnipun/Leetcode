// Last updated: 10/15/2026, 11:30:26 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool possible=false;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]) possible=true;
        }
        if(!possible) return 0;
        vector<int> dp(prices.size()+1,0);
        dp[0]=prices[0];
        int maxprice=0,price=0;
        for(int i=1;i<prices.size();i++){
            dp[i]=min(prices[i],dp[i-1]);
            price=prices[i]-dp[i];
            maxprice=max(price,maxprice);
        }
        return maxprice;
    }
};