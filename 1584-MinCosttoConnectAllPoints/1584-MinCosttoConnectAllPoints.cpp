// Last updated: 11/10/2026, 11:38:29 PM
1class Solution {
2public:
3    vector<int> p;
4    
5    int find(int x) {
6        if (p[x] == x) return x;
7        return p[x] = find(p[x]);
8    }
9    
10    int minCostConnectPoints(vector<vector<int>>& pts) {
11        int n = pts.size();
12        p.resize(n);
13        for (int i = 0; i < n; ++i) p[i] = i;
14        
15        vector<vector<int>> e;
16        for (int i = 0; i < n; ++i) {
17            for (int j = i + 1; j < n; ++j) {
18                int d = abs(pts[i][0] - pts[j][0]) + abs(pts[i][1] - pts[j][1]);
19                e.push_back({d, i, j});
20            }
21        }
22        
23        sort(e.begin(), e.end());
24        
25        int ans = 0;
26        int k = 0;
27        
28        for (auto& x : e) {
29            int u = find(x[1]);
30            int v = find(x[2]);
31            if (u != v) {
32                p[u] = v;
33                ans += x[0];
34                k++;
35                if (k == n - 1) break;
36            }
37        }
38        
39        return ans;
40    }
41};