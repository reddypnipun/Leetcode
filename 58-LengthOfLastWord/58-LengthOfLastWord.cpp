// Last updated: 9/29/2026, 11:37:13 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while (ss >> word) {}
        return word.length();
    }
};
