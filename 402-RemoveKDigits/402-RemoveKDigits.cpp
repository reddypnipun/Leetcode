// Last updated: 8/29/2026, 2:24:52 AM
class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.length() == k) return "0";
        
        string result = "";
        
        for (char digit : num) {
            while (k > 0 && !result.empty() && result.back() > digit) {
                result.pop_back();
                k--;
            }
            result.push_back(digit);
        }
        
        while (k > 0 && !result.empty()) {
            result.pop_back();
            k--;
        }
        
        int startIdx = 0;
        while (startIdx < result.length() && result[startIdx] == '0') {
            startIdx++;
        }
        result = result.substr(startIdx);
        
        return result.empty() ? "0" : result;
    }
};
