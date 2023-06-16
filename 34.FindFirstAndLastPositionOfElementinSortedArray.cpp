class Solution {
public:
    int binsearch(vector<int> arr, int n,int x)
    {
        int l = 0;
        int h = n-1;
        while(l<=h)
        {
            int m = h + ((l-h)/2);
            if(arr[m]==x)
            return m;
            else if(arr[m]>x)
            {
                h = m-1;
            }
            else
            {
                l = m + 1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int x) {
        vector <int> ans(2,0);
        int n = nums.size();
        int m = binsearch(nums,n,x);
        if (m == -1)
        {
            ans[0] = -1;
            ans[1] = -1;
            return ans;
        }
        else
        {
            int a = m,b = m;
            while(nums[a]==nums[m] && a>=0)
            {
                a--;
            }
            ans[0] = a+1;
            while(nums[b]==nums[m] && b<n)
            {
                b++;
            }
            ans[1] = b-1;
            return ans;
        }
    }
};