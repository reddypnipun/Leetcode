// Last updated: 8/29/2026, 2:24:54 AM
class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> freq;
        unordered_map<char, bool> visited;
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
        }
        int i = 0;
        string ans;
        while(i < s.size()){
            freq[s[i]]--;
            if (visited[s[i]]) {
                i++;
                continue;
            }
            while(!ans.empty()){ 
                if(s[i] < ans.back() && freq[ans.back()] > 0) {
                    visited[ans.back()] = false;
                    ans.pop_back();
                }
                else break;
            }
            ans.push_back(s[i]);
            visited[s[i]] = true;
            i++;
        }
        return ans;
    }
};
