// Last updated: 9/4/2026, 10:00:39 PM
class Solution {
public:
    int carFleet(int t, vector<int>& p, vector<int>& s) {
        int n=p.size();
        vector<pair<int,double>> c(n);
        for(int i=0;i<n;i++){
            c[i]={p[i],(double)(t-p[i])/s[i]};
        }
        sort(c.rbegin(),c.rend());
        int f=0;
        double m=0;
        for(int i=0;i<n;i++){
            if(c[i].second>m){
                m=c[i].second;
                f++;
            }
        }
        return f;
    }
};