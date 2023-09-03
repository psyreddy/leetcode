// Brute force approach

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        while(k){
            int temp = nums[n-1];
            for(int i=n-1;i>0;i--){
                nums[i] = nums[i-1];
            }
            nums[0] = temp;
            k--;
        }
    }
};

// Better approach

class Solution {
public:
    void rotate(vector<int>& n, int k) {
        k = k%n.size();
        reverse(n.begin(),n.end());
        reverse(n.begin(),n.begin()+k);
        reverse(n.begin()+k,n.end());
    }
};


// Optimal approach

