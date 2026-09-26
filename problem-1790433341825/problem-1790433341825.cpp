// Last updated: 9/26/2026, 8:05:41 PM
1class Solution {
2public:
3    int minQueenMoves(vector<int>& source, vector<int>& target) {
4        if(source[0]==target[0] &&source[1]==target[1]) return 0;
5        else if(source[0]==target[0] || source[1]==target[1] || abs(target[0] - source[0]) == abs(target[1] - source[1]) ) return 1;
6        return 2;
7    }
8};