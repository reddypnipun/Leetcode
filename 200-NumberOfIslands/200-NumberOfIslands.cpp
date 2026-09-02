// Last updated: 9/2/2026, 9:58:26 PM
class Solution {
public:
const int dX[4] = {1, -1, 0, 0};
const int dY[4] = {0, 0, 1, -1};

    void dfs(int i,int j,int n,int m,vector<vector<char>>& board,vector<vector<bool>>& visited){
        visited[i][j]=true;
        for(int l=0;l<4;l++){
            int x=dX[l];
            int y=dY[l];
            if(i+x>=0 && i+x<n && j+y>=0 && j+y<m)
                if(board[i+x][j+y] == '1' && !visited[i+x][j+y])
                dfs(i+x,j+y,n,m,board,visited);
        }
    }
    int numIslands(vector<vector<char>>& board){
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
        int n=board.size();
        int m=board[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(board[i][j]=='1' && visited[i][j]==false){
                        count++;
                        dfs(i,j,n,m,board,visited);
                    }
                else continue;
            }
        }
        return count;
    }
};