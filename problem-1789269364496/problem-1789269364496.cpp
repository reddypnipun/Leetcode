// Last updated: 9/13/2026, 8:46:04 AM
1class Solution {
2public:
3    long long shadowPairs(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> next_smaller(n, n);
6        stack<int> st;
7        for (int i = 0; i < n; ++i) {
8            while (!st.empty() && nums[st.top()] > nums[i]) {
9                next_smaller[st.top()] = i;
10                st.pop();
11            }
12            st.push(i);
13        }
14        vector<pair<int, int>> arr(n);
15        for (int i = 0; i < n; ++i) {
16            arr[i] = {nums[i], i};
17        }
18        sort(arr.begin(), arr.end());
19        long long shadow_pairs = 0;
20        for (int i = 0; i < n; ++i) {
21            int k = next_smaller[i];
22            int elements_in_range = k - i - 1; 
23            auto it1 = lower_bound(arr.begin(), arr.end(), make_pair(nums[i], i + 1));
24            auto it2 = lower_bound(arr.begin(), arr.end(), make_pair(nums[i], k));
25            shadow_pairs += (elements_in_range - distance(it1, it2));
26        }
27        return shadow_pairs;
28    }
29};