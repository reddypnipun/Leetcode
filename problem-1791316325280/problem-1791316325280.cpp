// Last updated: 10/7/2026, 1:22:05 AM
1class Solution {
2public:
3    int climb(int n,vector<int> &storage){
4        if (storage[n]!=-1) return storage[n];
5        storage[n]=climb(n-1,storage)+climb(n-2,storage);
6        return storage[n];
7        }
8    int climbStairs(int n) {
9        if (n <= 2) return n;
10        vector<int>storage(n,-1);
11        storage[1]=1;
12        storage[2]=2;
13        climb(n-1,storage);
14        return storage[n-1]+storage[n-2];
15    }
16};
17