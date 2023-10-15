class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int ans = nums.size();
        int h = nums.size()-1;
        int mid = l + ((h-l)/2);
        while(l<=h){
            mid = l + ((h-l)/2);
            if(nums[mid]<target){
                l = mid+1;
            }
            if(nums[mid]>target){
                h = mid-1;
                ans = mid;
            }
            if(nums[mid]==target){
                return mid;
            }
        }
        return ans;
    }
};