// Last updated: 9/21/2026, 10:51:32 PM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4    int tg = 0, tc = 0;
5    for(int i = 0; i < gas.size(); i++) {
6        tg += gas[i];
7        tc += cost[i];
8    }
9    if (tg < tc) return -1;
10    int tank = 0, start = 0;
11    for(int i = 0; i < gas.size(); i++) {
12        tank += gas[i] - cost[i];
13        if (tank < 0) {
14            start = i + 1;
15            tank = 0;
16        }
17    }
18    return start;
19}
20
21};