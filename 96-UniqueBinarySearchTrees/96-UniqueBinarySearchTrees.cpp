// Last updated: 11/17/2026, 11:30:42 PM
1class Solution {
2public:
3    int numTrees(int n) {
4        long long answer=1;
5        for(int i=0;i<n;i++){
6            answer = answer *(2*n-i)/(i+1);
7        }
8        return answer/(n+1);
9    }
10};