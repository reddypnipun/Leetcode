// Last updated: 11/11/2026, 10:24:23 PM
1class Solution {
2public:
3    int divide(int dividend, int divisor) {
4        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
5        bool sign = (dividend < 0) ^ (divisor < 0);
6        long long a = abs((long long)dividend);
7        long long b = abs((long long)divisor);
8        long long ans = 0;
9        while (a >= b) {
10            long long t = b;
11            long long m = 1;
12            while (a >= (t << 1)) {
13                t <<= 1;
14                m <<= 1;
15            }   
16            a -= t;
17            ans += m;
18        }      
19        return sign ? -ans : ans;
20    }
21};