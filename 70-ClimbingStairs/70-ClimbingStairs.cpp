// Last updated: 10/3/2026, 10:28:36 PM
1class Solution {
2public:
3    int climbStairs(int n) {
4        if (n <= 2) {
5            return n;
6        }
7        int fst = 1;
8        int sec = 2;
9        for (int i = 3; i <= n; ++i) {
10            int current = fst + sec;
11            fst = sec;
12            sec = current;
13        }
14        return sec;
15    }
16};
17