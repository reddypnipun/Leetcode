// Last updated: 11/12/2026, 11:30:00 PM
1class Solution {
2public:
3    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
4        int a1 = (ax2 - ax1) * (ay2 - ay1);
5        int a2 = (bx2 - bx1) * (by2 - by1);
6        int cx = max(0, min(ax2, bx2) - max(ax1, bx1));
7        int cy = max(0, min(ay2, by2) - max(ay1, by1));
8        int c = cx * cy;
9        return a1 + a2 - c;
10    }
11};