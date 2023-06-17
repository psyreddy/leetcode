class Solution {
public:
    bool isPalindrome(string s) {
        string b = {};
        for(int i=0;i<s.length();i++)
        {
            if(s[i]<='z' && s[i]>='a')
            b += s[i];
            if(s[i]<='Z' && s[i]>='A')
            b += (s[i]+('a'-'A'));
            if(s[i]<='9' && s[i]>='0')
            b += (s[i]);
        }
        string c = b;
        reverse(b.begin(),b.end());
        if (c == b)
        return true;
        else
        return false;
    }
};