// Last updated: 9/23/2026, 10:09:07 PM
1class Solution {
2public:
3    string largestNumber(vector<int>& nums) {
4        vector<string> num_strs;
5        for (int num : nums) {
6            num_strs.push_back(to_string(num));
7        }
8    sort(num_strs.begin(), num_strs.end(), [](const string& a, const string& b) {
9            return a + b > b + a;
10        });
11        if (num_strs[0] == "0") {
12            return "0";
13        }
14        string result = "";
15        for (const string& str : num_strs) {
16            result += str;
17        }
18        return result;
19    }
20};
21