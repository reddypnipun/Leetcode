// Last updated: 9/13/2026, 7:11:45 PM
class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> next_smaller(n, n);
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                next_smaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = {nums[i], i};
        }
        sort(arr.begin(), arr.end());
        long long shadow_pairs = 0;
        for (int i = 0; i < n; ++i) {
            int k = next_smaller[i];
            int elements_in_range = k - i - 1; 
            auto it1 = lower_bound(arr.begin(), arr.end(), make_pair(nums[i], i + 1));
            auto it2 = lower_bound(arr.begin(), arr.end(), make_pair(nums[i], k));
            shadow_pairs += (elements_in_range - distance(it1, it2));
        }
        return shadow_pairs;
    }
};