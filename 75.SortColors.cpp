class Solution {
public:
    void sortColors(vector<int>& n) {
        for(int i=0;i<n.size()-1;i++){
            int flag = 0;
            for(int j=0;j<n.size()-1-i;j++)
            {
                if(n[j]>n[j+1])
                {
                    swap(n[j],n[j+1]);
                    flag = 1;
                }
            }
            if(flag == 0)
            return;
        }
    }
};