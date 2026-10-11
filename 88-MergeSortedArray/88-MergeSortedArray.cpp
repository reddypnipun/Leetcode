// Last updated: 10/11/2026, 10:33:07 PM
1class Solution {
2public:
3    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
4        int i = m - 1;
5        int j = n - 1;
6        int k = m + n - 1;
7        while (i >= 0 && j >= 0) {
8            if (n1[i] > n2[j]) {
9                n1[k] = n1[i];
10                i--;
11            } else {
12                n1[k] = n2[j];
13                j--;
14            }
15            k--;
16        }
17        while (j >= 0) {
18            n1[k] = n2[j];
19            j--;
20            k--;
21        }
22    }
23};
24