class Solution {
private:
void sol(int i,vector<int>& ds,const vector<int>&a,set<vector<int>> &ans){
    if(i==a.size()){
        vector<int> k (ds.begin(),ds.end());
        sort(k.begin(),k.end());
        ans.insert(k);
        return;
    }
    ds.push_back(a[i]);
    sol(i+1,ds,a,ans);
    ds.pop_back();
    sol(i+1,ds,a,ans);
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        int i = 0;
        vector<int> ds;
        sol(i,ds,nums,ans);
        vector<vector<int>> ans1 (ans.begin(),ans.end());
        return ans1;
    }
};