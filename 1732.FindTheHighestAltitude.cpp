class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt (gain.size()+1,0);
        for(int i=1;i<=gain.size();i++){
            alt[i] = alt[i-1]+gain[i-1];
        }
        int mx = INT_MIN;
        for(int i=0;i<alt.size();i++)
        {
            if(alt[i]>mx)
            mx = alt[i];
        }
        return mx;
    }
};