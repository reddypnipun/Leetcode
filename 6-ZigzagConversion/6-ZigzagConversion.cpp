// Last updated: 9/29/2026, 11:30:18 PM
1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows <= 1 || s.length() <= numRows) return s;
5        vector<string> rows(numRows);
6        int curRow = 0;
7        bool goingDown = false;
8        for (char c : s) {
9            rows[curRow] += c;
10            if (curRow == 0 || curRow == numRows - 1) {
11                goingDown = !goingDown;
12            }
13            curRow += goingDown ? 1 : -1;
14        }
15        string result = "";
16        for (string row : rows) {
17            result += row;
18        }
19        return result;
20    }
21};
22