// Last updated: 9/26/2026, 8:11:58 PM
1class Solution {
2public:
3    bool canTransform(vector<int>& source, vector<int>& target) {
4        long long sumSource = 0;
5        long long sumTarget = 0;
6        for (int i = 0; i < source.size(); ++i) {
7            sumSource += source[i];
8            sumTarget += target[i];
9        }
10        return sumSource == sumTarget;
11    }
12};
13