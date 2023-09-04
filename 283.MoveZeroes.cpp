class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int j = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                j = i;
                break;
            }
        }
        if(j==-1){
            return;
        }
        int i = j+1;
        for(i;i<n;i++){
            if(a[i]==0){
                continue;
            }
            else{
                swap(a[i],a[j]);
                j++;
            }
        }
    }
};