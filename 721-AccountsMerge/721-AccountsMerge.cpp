// Last updated: 11/5/2026, 10:03:34 PM
1class Solution {
2public:
3    unordered_map<string, string> par;
4    unordered_map<string, int> rnk;
5
6    string find(string i) {
7        if (par[i] == i) return i;
8        return par[i] = find(par[i]);
9    }
10    void join(string i, string j) {
11        string rootI = find(i);
12        string rootJ = find(j);
13        if (rootI != rootJ) {
14            if (rnk[rootI] < rnk[rootJ]) par[rootI] = rootJ;
15            else if (rnk[rootI] > rnk[rootJ]) par[rootJ] = rootI;
16            else {
17                par[rootJ] = rootI;
18                rnk[rootI]++;
19            }
20        }
21    }
22    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
23        unordered_map<string, string> emailToName;
24        for (const auto& acc : accounts) {
25            string name = acc[0];
26            for (size_t i = 1; i < acc.size(); ++i) {
27                string em = acc[i];
28                if (par.find(em) == par.end()) {
29                    par[em] = em;
30                    rnk[em] = 0;
31                }
32                emailToName[em] = name;
33            }
34        }
35        for (const auto& acc : accounts) {
36            string first = acc[1];
37            for (size_t i = 2; i < acc.size(); ++i) {
38                join(first, acc[i]);
39            }
40        }
41        unordered_map<string, vector<string>> groups;
42        for (const auto& p : par) {
43            string em = p.first;
44            groups[find(em)].push_back(em);
45        }
46        vector<vector<string>> res;
47        for (auto& p : groups) {
48            string root = p.first;
49            auto& emails = p.second;
50            sort(emails.begin(), emails.end());
51            vector<string> row = {emailToName[root]};
52            row.insert(row.end(), emails.begin(), emails.end());
53            res.push_back(row);
54        }
55        return res;
56    }
57};
58