class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n = a.size();
        int ele1 = INT_MAX;
        int ele2 = INT_MIN;
        int c1=0,c2=0;
        for(int i=0;i<a.size();i++){
            if(c1==0 && ele2!=a[i]){
                ele1 = a[i];
                c1++;
            }
            else if(c2==0 && ele1!=a[i]){
                ele2 = a[i];
                c2++;
            }
            else if(a[i]==ele1){
                c1++;
            }
            else if(a[i]==ele2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<a.size();i++){
            if(ele1==a[i]) c1++;
            if(ele2==a[i]) c2++;
        }
        vector<int> ans;
        int min_ = n/3 + 1;
        if(c1>=min_) ans.push_back(ele1);
        if(c2>=min_) ans.push_back(ele2);
        return ans;
    }
};

