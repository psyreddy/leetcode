class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> a {};
        vector<vector<int>> ans {};
        if(m*n == r*c)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    a.push_back(mat[i][j]);
                }
            }
            for(int i=0;i<r;i++)
            {
                vector<int> temp {};
                for(int j=0;j<c;j++)
                {
                    temp.push_back(a[i*r+j]);
                }
                ans.push_back(temp);
            }
            return ans;
        }
        else
        return mat;
    }
};