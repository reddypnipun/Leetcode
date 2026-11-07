// Last updated: 11/7/2026, 8:23:35 PM
1class Solution {
2public:
3    long long countValidSubstrings(string s) {
4        long long n=s.length();
5        long long cnt=n*(n+1)/2;
6        int l=-1;
7        long long inv=0;
8        for(int i=0;i<n;i++){
9            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
10                l=i-2;
11            }
12        if(l!=-1)inv+=l+1;
13    }
14        return cnt-inv;
15    }
16};