// Last updated: 8/27/2026, 7:28:22 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[128]={0};
        int cnt_max=0;
        int f=0,b=0;
        int cnt=0;
        while(b<s.size()){
            while(b < s.size() && arr[s[b]]==0){
                arr[s[b]]=1;
                b++;
                cnt++;
                cnt_max=max(cnt_max,cnt);
            }
            arr[s[f]]=0;
            cnt--;
            f++;
        }
        return cnt_max;
    }
};