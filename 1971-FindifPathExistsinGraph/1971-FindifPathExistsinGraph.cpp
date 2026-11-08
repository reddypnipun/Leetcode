// Last updated: 11/8/2026, 11:57:43 PM
1class Solution {
2public:
3    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
4        vector<vector<int>> g(n);
5        for (auto& e : edges) {
6            g[e[0]].push_back(e[1]);
7            g[e[1]].push_back(e[0]);
8        }
9        vector<bool> v(n, false);
10        queue<int> q;
11        q.push(source);
12        v[source] = true;
13        while (!q.empty()) {
14            int curr = q.front();
15            q.pop();
16            if (curr == destination) return true;
17            for (int nxt : g[curr]) {
18                if (!v[nxt]) {
19                    v[nxt] = true;
20                    q.push(nxt);
21                }
22            }
23        }
24        return false;
25    }
26};