// Last updated: 9/13/2026, 7:11:43 PM
class Solution {
    struct Palindromes {
        vector<long long> evenPals;
        vector<long long> oddPals;
        Palindromes() {
            vector<long long> p10(11, 1);
            for(int i = 1; i <= 10; ++i) {
                p10[i] = p10[i-1] * 10;
            }

            for (int len = 1; len <= 10; ++len) {
                int half = (len + 1) / 2;
                long long start = p10[half - 1];
                long long end = p10[half] - 1;

                for (long long i = start; i <= end; ++i) {
                    long long p = i;
                    long long temp = i;

                    if (len % 2 == 1) {
                        temp /= 10;
                    }

                    while (temp > 0) {
                        p = p * 10 + (temp % 10);
                        temp /= 10;
                    }

                    if (p % 2 == 0) {
                        evenPals.push_back(p);
                    } else {
                        oddPals.push_back(p);
                    }
                }
            }
        }
    };

public:
    long long minOperations(vector<int>& nums) {
        static Palindromes pals;
        long long totalOps = 0;

        for (int x : nums) {
            long long num = x;
            long long minDiff = 2e18; 

            if (num % 2 == 0) {
                auto it = lower_bound(pals.evenPals.begin(), pals.evenPals.end(), num);
                if (it != pals.evenPals.end()) {
                    minDiff = min(minDiff, abs(*it - num));
                }
                if (it != pals.evenPals.begin()) {
                    minDiff = min(minDiff, abs(*(it - 1) - num));
                }
            } else {
                auto it = lower_bound(pals.oddPals.begin(), pals.oddPals.end(), num);
                if (it != pals.oddPals.end()) {
                    minDiff = min(minDiff, abs(*it - num));
                }
                if (it != pals.oddPals.begin()) {
                    minDiff = min(minDiff, abs(*(it - 1) - num));
                }
            }

            totalOps += (minDiff / 2);
        }

        return totalOps;
    }
};