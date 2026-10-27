// Last updated: 10/27/2026, 10:28:09 PM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4    string res = "";
5    int i = a.length() - 1;
6    int j = b.length() - 1;
7    int carry = 0;
8    while (i >= 0 || j >= 0 || carry) {
9        int sum = carry;
10        if (i >= 0) sum += a[i--] - '0';
11        if (j >= 0) sum += b[j--] - '0';
12        res += to_string(sum % 2);
13        carry = sum / 2;
14    }
15    reverse(res.begin(), res.end());
16    return res;
17}
18
19};