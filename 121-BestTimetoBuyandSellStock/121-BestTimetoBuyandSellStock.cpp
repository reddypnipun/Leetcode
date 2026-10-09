// Last updated: 10/9/2026, 11:17:10 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        if (prices.empty()) return 0;
5        int buy = prices[0];
6        int profit = 0;
7        for (int i = 1; i < prices.size(); i++) {
8            if (prices[i] < buy) {
9                buy = prices[i];
10            } else {
11                int diff = prices[i] - buy;
12                if (diff > profit) {
13                    profit = diff;
14                }
15            }
16        }
17        return profit;
18    }
19};
20