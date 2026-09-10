// Last updated: 9/10/2026, 11:47:35 PM
class Solution {
public:
    int maxJump(std::vector<int>& stones) {
        if (stones.size() == 2) return stones[1] - stones[0];
        int max_jump = 0;

        for (int i = 2; i < stones.size(); ++i) max_jump = max(max_jump, stones[i] - stones[i - 2]);
        
        return max_jump;
    }
};
