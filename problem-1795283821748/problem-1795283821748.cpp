// Last updated: 11/21/2026, 11:27:01 PM
1class Solution {
2public:
3    string baseNeg2(int n) {
4        if (n == 0) {
5            return "0";
6        }        
7        string res = "";
8        while (n != 0) {
9            int rem = n & 1;
10            res.push_back(rem + '0');
11            n = -(n >> 1);
12        }        
13        reverse(res.begin(), res.end());
14        return res;
15    }
16};
17