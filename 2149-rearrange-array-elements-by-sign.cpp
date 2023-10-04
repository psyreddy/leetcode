// Brute force 2 passes through array

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else pos.push_back(nums[i]);
        }
        int po = 0;
        int ne = 0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(pos[po]);
                po++;
            }
            else{
                ans.push_back(neg[ne]);
                ne++;
            }
        }
        return ans;
    }
};


// only one pass through array

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int po = 0;
        int ne = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[po] = nums[i];
                po+=2;
            }
            else{
                ans[ne] = nums[i];
                ne+=2;
            }
        }
        return ans;
    }
};