// Last updated: 10/6/2026, 10:59:19 PM
1class Solution {
2public:
3    void findCombinations(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& results) {
4        if (target == 0) {
5            results.push_back(current);
6            return;
7        }
8        for (int i = index; i < candidates.size(); ++i) {
9            if (candidates[i] > target) {
10                break;
11            }
12            current.push_back(candidates[i]);
13            findCombinations(i, target - candidates[i], candidates, current, results);
14            current.pop_back();
15        }
16    }
17    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
18        vector<vector<int>> results;
19        vector<int> current;
20        sort(candidates.begin(), candidates.end());
21        findCombinations(0, target, candidates, current, results);
22        return results;
23    }
24};
25