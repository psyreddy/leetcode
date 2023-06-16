class Solution {
public:
    int first(vector<int>& nums, int x)
    {
        int ans = -1;
        int l = 0;
        int h = nums.size()-1;
        while(l<=h)
        {
            int m = h + ((l-h)/2);
            if(nums[m]==x)
            {
                ans = m;
                h = m-1;
            }
            else if(nums[m]>x)
            h = m-1;
            else
            l = m+1;
        }
        return ans;
    }
    int last(vector<int>& nums, int x)
    {
        int ans = -1;
        int l = 0;
        int h = nums.size()-1;
        while(l<=h)
        {
            int m = h + ((l-h)/2);
            if(nums[m]==x)
            {
                ans = m;
                l = m+1;
            }
            else if(nums[m]>x)
            h = m-1;
            else
            l = m+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int x) {
        vector<int> a;
        a.push_back(first(nums,x));
        a.push_back(last(nums,x));
        return a;
    }
};