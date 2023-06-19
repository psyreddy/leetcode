class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int dx = (c[1][1] - c[0][1]);
        int dy = (c[1][0] - c[0][0]);
        for(int i=2; i<c.size(); i++)
        {
            if(dx*(c[i][0] - c[1][0]) != dy*(c[i][1] - c[1][1]))
                return false;
        }
        return true;
    }
};