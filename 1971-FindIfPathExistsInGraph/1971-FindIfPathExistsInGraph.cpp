// Last updated: 11/12/2026, 11:31:06 PM
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> g(n);
        for (auto& e : edges) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        vector<bool> v(n, false);
        queue<int> q;
        q.push(source);
        v[source] = true;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            if (curr == destination) return true;
            for (int nxt : g[curr]) {
                if (!v[nxt]) {
                    v[nxt] = true;
                    q.push(nxt);
                }
            }
        }
        return false;
    }
};