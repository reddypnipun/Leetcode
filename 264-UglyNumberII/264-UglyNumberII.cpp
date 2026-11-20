// Last updated: 11/20/2026, 11:29:47 PM
1class Solution {
2public:
3    int nthUglyNumber(int n) {
4        vector<int> ugly(n);
5        ugly[0] = 1;
6        int p2 = 0, p3 = 0, p5 = 0;
7        for (int i = 1; i < n; i++) {
8            int next2 = ugly[p2] * 2;
9            int next3 = ugly[p3] * 3;
10            int next5 = ugly[p5] * 5;
11            int nextUgly = min({next2, next3, next5});
12            ugly[i] = nextUgly;
13            if (nextUgly == next2) p2++;
14            if (nextUgly == next3) p3++;
15            if (nextUgly == next5) p5++;
16        }
17        return ugly[n - 1];
18    }
19};
20