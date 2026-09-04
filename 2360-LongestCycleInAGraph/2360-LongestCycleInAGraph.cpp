// Last updated: 9/4/2026, 10:00:22 PM
class Solution {
public:
    void addedge(vector<vector<int>>& adj,int u,int v){
        adj[u].push_back(v);
    }
    void dfs(int vertex,vector<vector<int>>& adj,int &max_count,int count,vector<int>& visited,vector<int>& starttime){
        starttime[vertex]=count;
        visited[vertex]=1;
        for(int neig:adj[vertex]){
            if(visited[neig]==1 && visited[neig]!=2 ){
                max_count=max(max_count,starttime[vertex]-starttime[neig]+1);
            }
            else if(visited[neig]==0) {
                dfs(neig,adj,max_count,count+1,visited,starttime);}
        }
        visited[vertex]=2;
    }
    int longestCycle(vector<int>& edges) {
        vector<vector<int>> adj(edges.size());
        for(int i=0;i<edges.size();i++) if(edges[i]!=-1) addedge(adj,i,edges[i]);
        int max_count=-1;
        vector<int> visited(edges.size(),0);
        vector<int> starttime(edges.size(),0);
        for(int i=0;i<edges.size();i++){
            if(visited[i]==0){
                dfs(i,adj,max_count,1,visited,starttime);
            }
        }
        return max_count;
    }
    
};