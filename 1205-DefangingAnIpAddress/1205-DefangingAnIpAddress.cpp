// Last updated: 9/3/2026, 9:31:37 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
            }
        }
        return result;
    }
};