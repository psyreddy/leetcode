class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n = arr.size();
        vector<int>a(n+1,0);
        for(int i=0;i<n;i++){
            if(arr[i]>0 && arr[i]<a.size()){
                a[arr[i]-1]=1;
            }
        }
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                return i+1;
            }
        }
        return 0;
    }
};