// Last updated: 11/1/2026, 8:22:57 AM
1class Solution {
2    int spf(int x) {
3        if (x % 2 == 0) return 2;
4        for (int i = 3; i * i <= x; i += 2) if (x % i == 0) return i;
5        return x;
6    }
7public:
8    long long minimumMaxValue(int n, int idx, int val) {
9        if (n > 1 && val <= 1) return -1;
10        long long c = val;
11        for (int i = idx - 1; i >= 0; i--) {
12            if (c % 2 == 0) { c -= 2LL * (i + 1); break; }
13            c -= spf(c);
14        }
15        if (c <= 1) return -1;
16        c = val;
17        for (int i = idx + 1; i < n; i++) {
18            if (c % 2 == 0) { c += 2LL * (n - i); break; }
19            c += spf(c);
20        }
21        return c;
22    }
23};
24