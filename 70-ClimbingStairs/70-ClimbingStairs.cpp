// Last updated: 10/3/2026, 10:27:56 PM
1class Solution {
2public:
3    int climbStairs(int n) {
4        if (n <= 2) {
5            return n;
6        }
7        int first = 1;
8        int second = 2;
9        for (int i = 3; i <= n; ++i) {
10            int current = first + second;
11            first = second;
12            second = current;
13        }
14        return second;
15    }
16};
17