// Last updated: 9/7/2026, 9:14:49 PM
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return 0;
        int battleshipsCount = 0;
        int rows = board.size();
        int cols = board[0].size();
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (board[i][j] == '.') continue;
                if (i > 0 && board[i - 1][j] == 'X') continue;
                if (j > 0 && board[i][j - 1] == 'X') continue;
                battleshipsCount++;
            }
        }
        return battleshipsCount;
    }
};
