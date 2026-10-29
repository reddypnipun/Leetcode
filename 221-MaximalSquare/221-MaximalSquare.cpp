// Last updated: 10/29/2026, 11:27:38 PM
1class Solution {
2public:
3    int maximalSquare(vector<vector<char>>& matrix) {
4        int n=matrix.size();
5        int m=matrix[0].size();
6        int max=0;
7        vector<vector<int>> dp(n,vector<int>(m, 0));
8        for(int i=0;i<n;i++){
9            for(int j=0;j<m;j++){
10                if(i==0 ||j==0){
11                    if (matrix[i][j]=='1'){ dp[i][j]=1;
12                    if(max==0)max=1;}
13                    else dp[i][j]=0;}
14                else{
15                    if(matrix[i][j]=='1'){
16                        dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
17                        if(max<dp[i][j])max=dp[i][j];
18                    }
19                }
20            }
21        }
22        if(max == 0) return 0;
23        return max * max;
24
25    }
26};