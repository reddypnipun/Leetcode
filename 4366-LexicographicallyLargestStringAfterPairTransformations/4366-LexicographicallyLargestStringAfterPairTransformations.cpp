// Last updated: 8/30/2026, 2:16:34 PM
class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> result;
        vector<int> values(26);
        values[0] = 1;
        for (int i = 1; i < 26; ++i) {
            values[i] = values[i - 1] * 2;
        }
        for (int x : nums) {
            string s = "";
            for (int i = 25; i >= 0; --i) {
                if (x >= values[i]) {
                    int count = x / values[i];
                    s.append(count, (char)('a' + i));
                    x %= values[i];
                }
            }
            result.push_back(s);
        }
        return result;
    }
};
