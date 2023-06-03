class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        vector<int> a (n.size(),0);
        vector<int> ans;
        for(int i=0;i<n.size();i++)
        {
            a[n[i]-1]++;
        }
        for(int i=0;i<a.size();i++)
        {
            if (a.at(i)==2)
            ans.push_back(i+1);
        }
        return ans;
    }
};