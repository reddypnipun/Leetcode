// Last updated: 9/2/2026, 8:54:37 PM
class Solution {
public:
const int dX[4] = {1, -1, 0, 0};
const int dY[4] = {0, 0, 1, -1};

    void dfs(int i,int j,int n,int m,vector<vector<char>>& board,vector<vector<bool>>& visited){
        visited[i][j]=true;
        for(int l=0;l<4;l++){
            int x=dX[l];
            int y=dY[l];
            if(i+x>=0 && i+x<n && j+y>=0 && j+y<m){
                if(board[i+x][j+y] == 'O' && !visited[i+x][j+y])dfs(i+x,j+y,n,m,board,visited);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 ||j==0 || i==(board.size()-1) ||j==(board[0].size()-1)){
                    if(board[i][j]=='O' && visited[i][j]==false){
                        dfs(i,j,n,m,board,visited);
                    }
                }
                else continue;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == 'O' && !visited[i][j]){
                    board[i][j] = 'X';
                }
            }
        }
    }
};