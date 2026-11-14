// Last updated: 11/14/2026, 9:32:28 PM
1class Solution {
2public:
3    int lastRemaining(int n) {
4        int h = 1;
5        int s = 1;
6        bool l = true;
7        while (n > 1) {
8            if (l || n % 2 == 1) {
9                h += s;
10            }
11            n /= 2;
12            s *= 2;
13            l = !l;
14        }
15        return h;
16    }
17};