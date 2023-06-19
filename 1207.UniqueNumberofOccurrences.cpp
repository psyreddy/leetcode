class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        map<int,int>m;
        for(auto i:a){
            m[i]++;
        }
        set<int> s;
        for(auto p:m){
            s.insert(p.second);
        }
        if(m.size()==s.size())
        return 1;
        return 0;
    }
};