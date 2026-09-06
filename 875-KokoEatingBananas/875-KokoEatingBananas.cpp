// Last updated: 9/6/2026, 11:36:39 PM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int high=*max_element(piles.begin(), piles.end());
       int low=1;
       int count;
       int mid;
       if(h==piles.size())return high;
       while(low<high){
        count=0;
        mid=(low+high)/2;
        for(int i=piles.size()-1;i>=0;i--){
            count+=(piles[i]+mid-1)/mid;
            if(count>h)break;
        }
        if(count>h)low=(low+high)/2+1;
        else high=(low+high)/2;
       }
       return low;
    }
};