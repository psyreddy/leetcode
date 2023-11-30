class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = m*n-1;
        int mid = low + (high-low)/2;
        while(low<=high){
            int x,y;
            x = mid/n;
            y = mid%n;
            if(mat[x][y]==target){
                return true;
            }
            else if(mat[x][y]>target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
            mid = low + (high-low)/2;
        }
        return false;
    }
};