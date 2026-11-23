// Last updated: 11/23/2026, 11:29:26 PM
1class Solution {
2 public:
3  int maxPoints(vector<vector<int>>& points) {
4    int n = points.size();
5    if (n <= 2) {
6      return n;
7    }
8    int max_points = 2;
9    for (int i = 0; i < n; ++i) {
10      long long x1 = points[i][0];
11      long long y1 = points[i][1];
12      for (int j = i + 1; j < n; ++j) {
13        long long x2 = points[j][0];
14        long long y2 = points[j][1];
15        long long A = y2 - y1;
16        long long B = x1 - x2;
17        long long C = -(A * x1 + B * y1);
18        int current_count = 0;
19        for (int k = 0; k < n; ++k) {
20          long long x3 = points[k][0];
21          long long y3 = points[k][1];
22          if (A * x3 + B * y3 + C == 0) {
23            current_count++;
24          }
25        }
26        max_points = max(max_points, current_count);
27      }
28    }
29    return max_points;
30  }
31};
32