class Solution {
public:
    string removeOccurrences(string s, string part) {
        int isfound = s.find(part);
        if(isfound==string::npos){
            return s;
        }
        s.erase(s.begin()+isfound,s.begin()+isfound+part.length());
        return removeOccurrences(s,part);
    }
};