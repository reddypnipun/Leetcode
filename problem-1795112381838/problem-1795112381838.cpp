// Last updated: 11/19/2026, 11:49:41 PM
1class Solution {
2public:
3    int trailingZeroes(int n) {
4        int count = 0;
5        while (n > 0) {
6            n /= 5;
7            count += n;
8        }
9        return count;
10    }
11};
12