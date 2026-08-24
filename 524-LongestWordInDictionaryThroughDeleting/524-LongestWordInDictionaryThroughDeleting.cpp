// Last updated: 8/24/2026, 3:04:56 PM
class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(), dictionary.end(), [](const string& a, const string& b) {
        if (a.size() != b.size()) {
            return a.size() > b.size();}
            return a < b;});
            int cnt=0;
            int j=0;
            for(int i=0;i<dictionary.size();i++){
                cnt=0;
                j=0;
            while(j<dictionary[i].size() && cnt<s.size()){
                if(dictionary[i][j]==s[cnt]){ j++;
                if(j==dictionary[i].size()) return dictionary[i]; }
                cnt++;
            }}
            return "";
    }
};