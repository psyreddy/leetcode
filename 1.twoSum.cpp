// Brutre
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<int> ans;
        for(int i=0;i<n.size()-1;i++)
        {
            for(int j=i+1;j<n.size();j++)
            {
                if(n[i]+n[j]==t)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};


// Better

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<a.size();i++){
            m[a[i]]=i;
        }
        for(int i=0;i<a.size();i++){
            if(m.find(target-a[i])!=m.end()){
                auto it = m.find(target-a[i]);
                if(i!=it->second)
                return {i,it->second};
            }
        }
        return {0};
    }
};


// Optimal  O(n*log(n))

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>a;
        for(int i=0;i<nums.size();i++){
            a.push_back(make_pair(nums[i],i));
        }
        sort(a.begin(),a.end());
        int l = 0;
        int r = a.size()-1;
        while(l<r){
            int sum = a[l].first+a[r].first;
            if(sum>target){
                r--;
            }
            if(sum<target){
                l++;
            }
            if(sum==target){
                return {a[l].second,a[r].second};
            }
        }
        return {-1,-1};
    }
};