class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
            ones++;
        }
        for(int i=0;i<s.length();i++){
            if(i<ones-1||i==s.length()-1){
                s[i]='1';
            }
            else
            s[i]='0';
        }
        return s;
    }
};