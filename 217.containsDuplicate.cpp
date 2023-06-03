class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        set<int> a;
        for(int i=0;i<n.size();i++)
        {
            a.insert(n[i]);
        }
        if(n.size()==a.size())
        return false;
        return true;
    }
};