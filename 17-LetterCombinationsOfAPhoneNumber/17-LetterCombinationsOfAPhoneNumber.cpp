// Last updated: 8/24/2026, 12:52:55 PM
class Solution {
public:
    void backtrack(const string &digits, int j, string &s, const vector<vector<string>> &alp, vector<string> &ans){
        if(digits[j]!='\0'){
            for(int i=0;i<alp[digits[j]-'0'].size();i++){
                s+=alp[digits[j]-'0'][i];
                backtrack(digits,j+1,s,alp,ans);
                if(digits[j+1]=='\0'){
                    ans.push_back(s);
                }
                s.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {}; 
        vector<string>ans;
        vector<vector<string>> alp = {
        {},                  
        {},                  
        {"a", "b", "c"},     
        {"d", "e", "f"},     
        {"g", "h", "i"},     
        {"j", "k", "l"},     
        {"m", "n", "o"},     
        {"p", "q", "r", "s"},
        {"t", "u", "v"},     
        {"w", "x", "y", "z"}
        };
        string s = "";
        backtrack(digits,0,s,alp,ans);
        return ans;
    }
};
