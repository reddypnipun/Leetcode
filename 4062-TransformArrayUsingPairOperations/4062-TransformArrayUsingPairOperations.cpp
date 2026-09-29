// Last updated: 9/29/2026, 11:36:07 PM
class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sumSource = 0;
        long long sumTarget = 0;
        for (int i = 0; i < source.size(); ++i) {
            sumSource += source[i];
            sumTarget += target[i];
        }
        return sumSource == sumTarget;
    }
};
