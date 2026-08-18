// Last updated: 8/18/2026, 6:57:04 PM
class Solution
{
public:
    bool ispossible(int n, int arr[n],int r){
        int tem=r;
        for(int i=0;i<r;i++){
            if(arr[r]==arr[i] ||((arr[r]+r)==(arr[i]+i)) || ((arr[r]-r)==(arr[i]-i))) return false;
        }
        return true;
    }
    vector<string> CreateVectorOfString(int n, int arr[]) {
    vector<string> s(n, string(n, '.'));
    for(int i=0; i<n; i++) {
        s[i][arr[i] - 1] = 'Q';
    }
    return s;
}
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        int arr[n];
        n_queens(n, ans, arr, 0);
        return (ans);
    }
    void n_queens(int n,vector<vector<string>> &ans, int arr[n], int r)
    {
        if (r < n)
        {
            for (int i = 1; i <= n; i++)
            {
                arr[r] = i;
                if (ispossible(n, arr,r))
                {
                    if (r == n - 1)
                        ans.push_back(CreateVectorOfString(n,arr));
                    else
                    {
                        n_queens(n, ans, arr, r+1);
                    }
                }
            }
        }
        }
};