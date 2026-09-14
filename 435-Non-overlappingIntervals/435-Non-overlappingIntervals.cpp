// Last updated: 9/14/2026, 11:29:00 PM
1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
4        if (intervals.empty()) return 0;
5        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
6            return a[1] < b[1];
7        });
8        int ans = 0;
9        int r = intervals[0][1];
10        for (size_t i = 1; i < intervals.size(); ++i) {
11            if (intervals[i][0] < r) {
12                ans++;
13            } else {
14                r = intervals[i][1];
15            }
16        }
17        return ans;
18    }
19};