// Last updated: 11/7/2026, 11:51:36 AM
1class Solution {
2public:
3    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
4        int m=mat.size();
5        int n=mat[0].size();
6        vector<vector<int>> dist(m,vector<int>(n, INT_MAX));
7        for(int i=0;i<m;i++){
8            for(int j=0;j<n;j++){
9                if(mat[i][j]==0) dist[i][j]=0;
10            }
11        }
12        for(int i=0;i<m;i++){
13            for(int j=0;j<n;j++){
14                if(mat[i][j]==1){
15                    int min_val = 10000000;
16                    if (i > 0 && dist[i-1][j] < min_val) min_val = dist[i-1][j];
17                    if (i < m - 1 && dist[i+1][j] < min_val) min_val = dist[i+1][j];
18                    if (j > 0 && dist[i][j-1] < min_val) min_val = dist[i][j-1];
19                    if (j < n - 1 && dist[i][j+1] < min_val) min_val = dist[i][j+1];
20                    dist[i][j]= min_val+1;
21                } 
22            }
23        }
24        for(int i=m-1;i>=0;i--){
25            for(int j=n-1;j>=0;j--){
26                if(mat[i][j]==1){
27                    int min_val = 10000000;
28                    if (i > 0 && dist[i-1][j] < min_val) min_val = dist[i-1][j];
29                    if (i < m - 1 && dist[i+1][j] < min_val) min_val = dist[i+1][j];
30                    if (j > 0 && dist[i][j-1] < min_val) min_val = dist[i][j-1];
31                    if (j < n - 1 && dist[i][j+1] < min_val) min_val = dist[i][j+1];
32                    dist[i][j]= min_val+1;
33                } 
34            }
35        }
36        return dist;
37    }
38};