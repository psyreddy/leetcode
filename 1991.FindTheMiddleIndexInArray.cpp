class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0,lsum=0,rsum=0;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        if(sum - nums[0] == 0)
        return 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            lsum += nums[i];
            rsum = sum - nums[i+1] - lsum;
            if(lsum == rsum)
            return i+1;
        }
        return -1;
    }
};