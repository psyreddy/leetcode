class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        long long n = (long long)x;
        if(n<0){
            flag = 1;
        }
        if(flag==1){
            n = n*-1;
        }
        long long int num = 0;
        int i;
        if(n!=0)
        i=log10(n); 
        else
        i=0;
        while(n>0)
        {
            num = num + (n%10)*pow(10,i);
            if(num > INT_MAX)
            {
                return 0;
            }
            else
            {
                i--;
                n=n/10;
            }
        }
        if(flag==1){
            return num*-1;
        }
        else{
            return num;
        }
    }
};