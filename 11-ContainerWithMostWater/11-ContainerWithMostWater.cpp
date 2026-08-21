// Last updated: 8/21/2026, 11:04:51 PM
class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int width=r-l;
        int max_water=INT_MIN;
        while(l<r){
            width=r-l;
            max_water= max(max_water,(min(h[l],h[r])*width));
            if(h[l]<h[r]) l++;
            else if(h[l]>h[r]) r--;
            else{ max_water= max(max_water,(min(h[l+1],h[r])*width));
             max_water= max(max_water,(min(h[l],h[r-1])*width));
             l++;
             r--;
            }
        }
        return max_water;
    }
};