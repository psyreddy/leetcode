class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<int> ans;
        for(int i=0;i<n.size()-1;i++)
        {
            for(int j=i+1;j<n.size();j++)
            {
                if(n[i]+n[j]==t)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};