class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int i = 0;
        while(i<numRows){
            if(i==0){
                ans.push_back({{1}});
                i++;
                continue;
            }
            if(i==1){
                ans.push_back({{1,1}});
                i++;
                continue;
            }
            int j = i;
            vector<int> temp;
            for(int k=0;k<=j;k++){
                if(k==0 || k==j){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(ans[i-1][k-1]+ans[i-1][k]);
                }
            }
            ans.push_back(temp);
            i++;

        }
        return ans;
    }
};