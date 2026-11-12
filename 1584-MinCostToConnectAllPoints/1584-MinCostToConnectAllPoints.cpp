// Last updated: 11/12/2026, 11:31:08 PM
class Solution {
public:
    vector<int> p;
    
    int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }
    
    int minCostConnectPoints(vector<vector<int>>& pts) {
        int n = pts.size();
        p.resize(n);
        for (int i = 0; i < n; ++i) p[i] = i;
        
        vector<vector<int>> e;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int d = abs(pts[i][0] - pts[j][0]) + abs(pts[i][1] - pts[j][1]);
                e.push_back({d, i, j});
            }
        }
        
        sort(e.begin(), e.end());
        
        int ans = 0;
        int k = 0;
        
        for (auto& x : e) {
            int u = find(x[1]);
            int v = find(x[2]);
            if (u != v) {
                p[u] = v;
                ans += x[0];
                k++;
                if (k == n - 1) break;
            }
        }
        
        return ans;
    }
};