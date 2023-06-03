class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0;i<=sqrt(c);i++){
            int ce = c - pow(i,2);
            if (sqrt(ce)==(int)sqrt(ce))
                return true;
        }
        return false;
    }
};