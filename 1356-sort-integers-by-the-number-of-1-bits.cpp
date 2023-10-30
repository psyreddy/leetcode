class Solution {
private:
    static bool key(const int a,const int b){
        int p1 = __builtin_popcount(a);
        int p2 = __builtin_popcount(b);
        if(p1>p2){
            return false;
        }
        else if(p1==p2){
            return a<b;
        }
        else{
            return true;
        }
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),key);
        return arr;
    }
};