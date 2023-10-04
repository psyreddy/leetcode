// Brute force using extra space 

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

