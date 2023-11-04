/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
private:
    int trib(int n,vector<int>& dp){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        if(dp[n]!=-1) return dp[n];
        dp[n] = trib(n-1,dp)+trib(n-2,dp)+trib(n-3,dp);
        return dp[n];
    }
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        int ans = trib(n,dp);
        return ans;
    }
};
// @lc code=end

