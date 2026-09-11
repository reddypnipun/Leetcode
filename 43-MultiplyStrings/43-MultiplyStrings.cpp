// Last updated: 9/11/2026, 9:50:51 PM
1class Solution {
2public:
3    std::string multiply(std::string num1, std::string num2) {
4        if (num1 == "0" || num2 == "0") return "0";
5        int m = num1.size();
6        int n = num2.size();
7        std::vector<int> pos(m + n, 0);
8        for (int i = m - 1; i >= 0; i--) {
9            for (int j = n - 1; j >= 0; j--) {
10                int mul = (num1[i] - '0') * (num2[j] - '0');
11                int p1 = i + j;
12                int p2 = i + j + 1;
13                int sum = mul + pos[p2];
14                pos[p2] = sum % 10;
15                pos[p1] += sum / 10;
16            }
17        }
18        std::string result = "";
19        for (int p : pos) {
20            if (!(result.empty() && p == 0)) {
21                result.push_back(p + '0');
22            }
23        }
24        return result.empty() ? "0" : result;
25    }
26};