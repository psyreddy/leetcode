class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int l = 0;
        int h = a.size()-1;
        while(l<=h)
        {
            int m = l + ((h-l)/2);
            if(a[m]>a[m-1] && a[m]>a[m+1])
            return m;
            if(a[m]>a[m-1] && a[m]<a[m+1])
            l = m+1;
            if(a[m]<a[m-1] && a[m]>a[m+1])
            h = m;
        }
        return -1;
    }
};