// Last updated: 8/29/2026, 2:24:49 AM
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int mid = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < mid) {
                return true;
            }
            while (!st.empty() && nums[i] > st.top()) {
                mid = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
