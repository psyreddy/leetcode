class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        auto it=s.begin(),temp=s.begin();
        for(int i=0;i<s.length();i++){
            if(s.at(i)!=' '){
                temp ++;
            }
            else{
                reverse(it,temp);
                it = temp + 1;
                temp = temp +1;
            }
        }
        s.pop_back();
        return s;
    }
};