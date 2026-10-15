// Last updated: 10/15/2026, 11:30:32 PM
class Solution {
public:
    vector<int> grayCode(int n) {
        int sequenceLength = 1 << n;
    vector<int>result(sequenceLength);
        for (int i = 0; i < sequenceLength; i++) {
            result[i] = i ^ (i >> 1);
        }
        return result;
    }
};
