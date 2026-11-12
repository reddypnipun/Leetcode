// Last updated: 11/12/2026, 11:31:35 PM
class Solution {
public:    
    void dfs(int i,vector<vector<int>>& isConnected,vector<bool>& visited,int n){
        visited[i]=true;
        for(int ng=0;ng<n;ng++){
            if(isConnected[i][ng]==1 && !visited[ng]) dfs(ng,isConnected,visited,n);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int cnt=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                cnt++;
                dfs(i,isConnected,visited,n);
            }
        }
        return cnt;
    }
};