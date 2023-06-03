class Solution {
public:
    vector<int> intersect(vector<int>& a1, vector<int>& a2) {
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        vector<int> a;
        int i=0,j=0;
        while(i<a1.size() && j<a2.size())
        {
            if(a1[i]<a2[j])
            i++;
            else if(a1[i]>a2[j])
            j++;
            else
            {
                a.push_back(a1[i]);
                i++;
                j++;
            }
        }
        return a;
    }
};