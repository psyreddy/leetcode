class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> a {};
        vector<vector<int>> ans (r,vector<int>(c));
        if(m*n == r*c)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    a.push_back(mat[i][j]);
                }
            }
            int k = 0;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    ans[i][j] = a[k++];
                }
            }
            return ans;
        }
        else
        return mat;
    }
};