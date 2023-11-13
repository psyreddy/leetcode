/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        set<int> rows,columns;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        for(auto it:rows){
            vector<int> temp(m[0].size(),0);
            m[it] = temp;
        }
        for(auto it:columns){
            for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(j == it){
                    m[i][j] = 0;
                }
            }
        }
        }
        return;
    }
};
// @lc code=end

