class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int n=s.length(),m=t.length();
        while(i<n&&j<m){
            if(s[i]==t[j]){
                i++;j++;
            }
            else j++;
        }
        if(i==n) return 1;
        else return 0;
    }
};