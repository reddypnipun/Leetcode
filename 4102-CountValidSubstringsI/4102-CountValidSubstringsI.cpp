// Last updated: 11/12/2026, 11:30:38 PM
class Solution {
public:
    long long countValidSubstrings(string s) {
        long long n=s.length();
        long long cnt=n*(n+1)/2;
        int l=-1;
        long long inv=0;
        for(int i=0;i<n;i++){
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                l=i-2;
            }
        if(l!=-1)inv+=l+1;
    }
        return cnt-inv;
    }
};