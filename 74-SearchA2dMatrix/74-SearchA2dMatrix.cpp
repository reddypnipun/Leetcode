// Last updated: 9/6/2026, 10:12:02 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        int h=m;
        int l=0;
        while(h>l+1){
            int mid=(h+l)/2;
            if(target>matrix[mid][n]) l=mid+1;
            else if(target<matrix[mid][n]) h=mid;
            else if(target==matrix[mid][n]) return true;
        }
        if (binary_search(matrix[l].begin(), matrix[l].end(), target)) {
            return true;
        }
        if (l != h && binary_search(matrix[h].begin(), matrix[h].end(), target)) {
            return true;
        }
        return false;
    }
};