class Solution {
public:
    string largestOddNumber(string s) {
        for(int i=s.length()-1;i>=0;i--){
            if((int)s[i]%2==1){
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};