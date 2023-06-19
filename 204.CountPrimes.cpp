class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> p(n+1,true);
        p[0]=false;
        p[1]=false;
        for(int i=2;i<n;i++){
                if(p[i]){
                    count ++;
                    for(int j=2*i ; j<n ; j=j+i)
                        p[j]=false;
                }
        }
        return count;
    }
};