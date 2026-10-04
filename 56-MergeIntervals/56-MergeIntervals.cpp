// Last updated: 10/4/2026, 7:44:05 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        if (intervals.empty()) return {};
5        sort(intervals.begin(), intervals.end());
6        vector<vector<int>> res;
7        res.push_back(intervals[0]);
8        for (int i = 1; i < intervals.size(); ++i) {
9            if (res.back()[1] >= intervals[i][0]) {
10                res.back()[1] = max(res.back()[1], intervals[i][1]);
11            } else {
12                res.push_back(intervals[i]);
13            }
14        }
15        return res;
16    }
17};
18