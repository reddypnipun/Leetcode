// Last updated: 8/17/2026, 4:06:53 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();
        if (m == 0) return 0;
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        return -1;
    }
};