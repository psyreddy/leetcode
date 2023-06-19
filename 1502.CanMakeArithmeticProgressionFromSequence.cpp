class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(),a.end());
        int cd = a[1]-a[0];
        for(int i=0;i<a.size()-1;i++)
        {
            if (cd!=a[i+1]-a[i])
            return false;
        }
        return true;
    }
};