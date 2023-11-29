// Brute force is generating all the permutations in sorted 
// order and return the next permutation TC: O(N!)

// Using STL in cpp 

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        next_permutation(a.begin(),a.end());
    }
};

// Implementing stl code


class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int index = -1;
        int n = a.size();
        for(int i=n-2;i>=0;i--){
            if(a[i+1]>a[i]){
                index = i;
                break;
            }
        }
        if(index == -1){
            reverse(a.begin(),a.end());
            return;
        }
        for(int i=n-1;i>index;i--){
            if(a[index]<a[i]){
                swap(a[index],a[i]);
                break;
            }
        }
        sort(a.begin()+index+1,a.end());
    }
};