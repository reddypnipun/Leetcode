// Last updated: 9/13/2026, 8:17:02 AM
1class Solution {
2    struct Palindromes {
3        vector<long long> evenPals;
4        vector<long long> oddPals;
5        Palindromes() {
6            vector<long long> p10(11, 1);
7            for(int i = 1; i <= 10; ++i) {
8                p10[i] = p10[i-1] * 10;
9            }
10
11            for (int len = 1; len <= 10; ++len) {
12                int half = (len + 1) / 2;
13                long long start = p10[half - 1];
14                long long end = p10[half] - 1;
15
16                for (long long i = start; i <= end; ++i) {
17                    long long p = i;
18                    long long temp = i;
19
20                    if (len % 2 == 1) {
21                        temp /= 10;
22                    }
23
24                    while (temp > 0) {
25                        p = p * 10 + (temp % 10);
26                        temp /= 10;
27                    }
28
29                    if (p % 2 == 0) {
30                        evenPals.push_back(p);
31                    } else {
32                        oddPals.push_back(p);
33                    }
34                }
35            }
36        }
37    };
38
39public:
40    long long minOperations(vector<int>& nums) {
41        static Palindromes pals;
42        long long totalOps = 0;
43
44        for (int x : nums) {
45            long long num = x;
46            long long minDiff = 2e18; 
47
48            if (num % 2 == 0) {
49                auto it = lower_bound(pals.evenPals.begin(), pals.evenPals.end(), num);
50                if (it != pals.evenPals.end()) {
51                    minDiff = min(minDiff, abs(*it - num));
52                }
53                if (it != pals.evenPals.begin()) {
54                    minDiff = min(minDiff, abs(*(it - 1) - num));
55                }
56            } else {
57                auto it = lower_bound(pals.oddPals.begin(), pals.oddPals.end(), num);
58                if (it != pals.oddPals.end()) {
59                    minDiff = min(minDiff, abs(*it - num));
60                }
61                if (it != pals.oddPals.begin()) {
62                    minDiff = min(minDiff, abs(*(it - 1) - num));
63                }
64            }
65
66            totalOps += (minDiff / 2);
67        }
68
69        return totalOps;
70    }
71};