// Last updated: 11/12/2026, 11:30:21 PM


class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        return (ax2 - ax1) * (ay2 - ay1)
            + (bx2 - bx1) * (by2 - by1)
            - (clamp(bx2, ax1, ax2) - clamp(bx1, ax1, ax2)) 
                * (clamp(by2, ay1, ay2) - clamp(by1, ay1, ay2));
    }
};