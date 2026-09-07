// Last updated: 9/7/2026, 9:14:32 PM
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0;
        int current_cost = 0;
        int max_len = 0;
        for (int r = 0; r < s.size(); r++) {
            current_cost += abs(s[r] - t[r]);
            while (current_cost > maxCost) {
                current_cost -= abs(s[l] - t[l]);
                l++;
            }
            max_len = max(max_len, r - l + 1);
        }
        return max_len;
    }
};