// Last updated: 11/6/2026, 11:28:45 PM
1class Solution {
2public:    
3    void dfs(int i,vector<vector<int>>& isConnected,vector<bool>& visited,int n){
4        visited[i]=true;
5        for(int ng=0;ng<n;ng++){
6            if(isConnected[i][ng]==1 && !visited[ng]) dfs(ng,isConnected,visited,n);
7        }
8    }
9    int findCircleNum(vector<vector<int>>& isConnected) {
10        int n=isConnected.size();
11        int cnt=0;
12        vector<bool> visited(n,false);
13        for(int i=0;i<n;i++){
14            if(!visited[i]){
15                cnt++;
16                dfs(i,isConnected,visited,n);
17            }
18        }
19        return cnt;
20    }
21};