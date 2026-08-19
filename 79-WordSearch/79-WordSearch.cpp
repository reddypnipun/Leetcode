// Last updated: 8/19/2026, 7:25:42 PM
class Solution
{
public:
    const int dx[4] = {1, -1, 0, 0};
    const int dy[4] = {0, 0, 1, -1};
    bool exist(vector<vector<char>> &board, string word)
    {
        bool flag = false;
        int rows = board.size();
        int cols = board[0].size();
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                flag = backtrack(board, word, 0, flag, i, j, rows, cols);
                if (flag == true) return flag;
            }
        }
        return flag;
    }
    bool backtrack(vector<vector<char>> &board, const string &word, int s, bool flag, int i, int j, int rows, int cols)
    {
        if (flag == true) return flag;
        
        if (board[i][j] != word[s]) return false;

        s++;

        if (s == word.size()) 
        {
            flag = true;
            return flag;
        }
        else
        {
            char temp = board[i][j];
            board[i][j] = '#';

            if (s < word.size())
            {
                for (int d = 0; d < 4; d++)
                {
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    
                    if ((ni >= 0) && (ni < rows) && (nj >= 0) && (nj < cols) && (board[ni][nj] != '#'))
                    {
                        flag = backtrack(board, word, s, flag, ni, nj, rows, cols);
                        if (flag == true) return true; 
                    }
                }
            }
            board[i][j] = temp;
        }
        return flag;
    }
};
