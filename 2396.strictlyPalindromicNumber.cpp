class Solution {
public:
    bool ispal(string s){
        string temp = s;
        reverse(s.begin(),s.end());
        if(temp == s)
        return 1;
        return 0;
    }
    string base(int n,int i)
    {
        string s={};
        while(n>0){
            s = s + to_string(n%i);
            n = n/i;
        }
        return s;
    }
    bool isStrictlyPalindromic(int n) {
        for (int i=2;i<n-1;i++)
        {
            if(ispal(base(n,i)))
            continue;
            else
            return 0;
        }
        return 1;
    }
};