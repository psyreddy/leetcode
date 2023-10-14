class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return 0;
        }
        else{
            for(int i=0;i<s.length();i++){
                string temp = s;
                reverse(temp.begin(),temp.begin()+i);
                reverse(temp.begin()+i,temp.end());
                reverse(temp.begin(),temp.end());
                if(temp==goal) return true;
            }
            return false;
        }
    }
};