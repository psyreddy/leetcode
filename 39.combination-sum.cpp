class Solution {
private:
    void sol(int idx,vector<int> &a,int &k,vector<int>& c,vector<vector<int>> &ans){
        if(k==0){
            ans.push_back(a);
            return;
        }
        if(k<0 || idx==c.size()){
            return;
        }
        a.push_back(c[idx]);
        k = k - c[idx];
        sol(idx,a,k,c,ans);
        a.pop_back();
        k = k + c[idx];
        sol(idx+1,a,k,c,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int i = 0;
        vector<int> a;
        int k = target;
        sol(i,a,k,candidates,ans);
        return ans;
    }
};