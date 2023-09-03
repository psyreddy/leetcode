class Solution {
public:
    // static bool key(pair<char,int> &m1,pair<char,int> &m2){
    //     return m1.second>=m2.second;
    // }
    // vector<pair<char,int>> sort_map(map<char,int> m){
    //     vector<pair<char,int>> v;
    //     for(auto it:m){
    //         v.push_back(it);
    //     }
    //     sort(v.begin(),v.end(),key);
    //     return v;
    // }
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        vector<pair<int,char>> v;
        for(auto it:m){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int, char>>());
        string ans="";
        for(int i=0;i<v.size();i++){
            while(v[i].first>0){
                ans+=v[i].second;
                v[i].first--;
            }
        }
        return ans;
    }
};