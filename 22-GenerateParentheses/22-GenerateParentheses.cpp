// Last updated: 9/8/2026, 10:41:25 PM
class Solution {
public:
    void backtrack(vector<string>& result,string cur_string, int oc, int cc, int n) {
        if (cur_string.length() == 2 * n) {
            result.push_back(cur_string);
            return;
        }
        if (oc < n) {
            backtrack(result, cur_string + "(", oc + 1, cc, n);
        }
        if (cc < oc) {
            backtrack(result, cur_string + ")", oc, cc + 1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};
