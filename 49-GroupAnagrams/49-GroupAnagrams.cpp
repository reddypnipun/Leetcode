// Last updated: 9/20/2026, 10:07:11 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>> anagramMap;
5        
6        for (const string& s : strs) {
7            string key = s;
8            sort(key.begin(), key.end());
9            anagramMap[key].push_back(s);
10        }
11        vector<vector<string>> result;
12        result.reserve(anagramMap.size());
13        for (auto& pair : anagramMap) {
14            result.push_back(move(pair.second));
15        }
16        return result;
17    }
18};
19