// Last updated: 11/12/2026, 11:30:40 PM
class Solution {
    int spf(int x) {
        if (x % 2 == 0) return 2;
        for (int i = 3; i * i <= x; i += 2) if (x % i == 0) return i;
        return x;
    }
public:
    long long minimumMaxValue(int n, int idx, int val) {
        if (n > 1 && val <= 1) return -1;
        long long c = val;
        for (int i = idx - 1; i >= 0; i--) {
            if (c % 2 == 0) { c -= 2LL * (i + 1); break; }
            c -= spf(c);
        }
        if (c <= 1) return -1;
        c = val;
        for (int i = idx + 1; i < n; i++) {
            if (c % 2 == 0) { c += 2LL * (n - i); break; }
            c += spf(c);
        }
        return c;
    }
};
