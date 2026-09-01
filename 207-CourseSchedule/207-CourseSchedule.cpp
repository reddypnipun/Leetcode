// Last updated: 9/1/2026, 9:53:02 PM
class Solution {
public:
    void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    }
    void dfs(int vertex,vector<vector<int>>& adj,bool &flag,vector<int>& colour){
        for(int nei:adj[vertex]){
            if(colour[nei]==1) flag=false;
            else if(colour[nei]==0) {
                colour[nei]=1;
                dfs(nei,adj,flag,colour);}
        }
        colour[vertex] = 2;
    }
    bool canFinish( int numCourses, vector<vector<int>>& prereq) {
        vector<int> colour(numCourses, 0);
        bool flag=true;
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prereq.size();i++){
            addEdge(adj,prereq[i][0],prereq[i][1]);
        }
        for(int i=0;i<numCourses;i++){
            if(flag==false) break;
            if(colour[i]==0){
                colour[i]=1;
            dfs(i,adj,flag,colour);
            }
        }
        return flag;
    }
};