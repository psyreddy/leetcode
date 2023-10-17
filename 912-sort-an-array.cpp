class Solution {
public:
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }
    int parent(int i){
        return (i-1)/2;
    }
    void heapify(vector<int>& a,int size,int idx){
        if(size == 0) return;
        if(size==1) return;
        int l = left(idx);
        int r = right(idx);
        int maxi = idx;
        if(l<size && a[maxi]<a[l]) maxi = l;
        if(r<size && a[maxi]<a[r]) maxi = r;
        if(maxi!=idx){
            swap(a[idx],a[maxi]);
            heapify(a,size,maxi);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=((n-2)/2);i>=0;i--){
            heapify(nums,n,i);
        }
        for(int i=n-1;i>=0;i--){
            swap(nums[0],nums[i]);
            heapify(nums,i,0);
        }
        return nums;

    }
};