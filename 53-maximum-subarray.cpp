// Kadanes Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxsum=INT_MIN;
        int n = a.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            maxsum = max(sum,maxsum);
            if(sum<0){
                sum = 0;
            }
        }
        return maxsum;
    }
};