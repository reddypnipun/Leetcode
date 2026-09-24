// Last updated: 9/24/2026, 10:43:51 PM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        stringstream ss(s);
5        string word;
6        while (ss >> word) {}
7        return word.length();
8    }
9};
10