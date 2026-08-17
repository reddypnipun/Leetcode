// Last updated: 8/18/2026, 2:26:44 AM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row_freq[9][9] = {0};
        int col_freq[9][9] = {0};
        int box_freq[9][9] = {0};
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                int num = board[i][j] - '1'; 
                int box_index = (i / 3) * 3 + (j / 3); 
                row_freq[i][num]++;
                col_freq[j][num]++;
                box_freq[box_index][num]++;
                if(row_freq[i][num] > 1 || col_freq[j][num] > 1 || box_freq[box_index][num] > 1){
                    return false;
                }
            }
        }
        return true; 
    }
};