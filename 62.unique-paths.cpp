/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int numberOfPaths(int m, int n)
    {
        long long path = 1;
        for (int i = n; i < (m + n - 1); i++) {
            path *= i;
            path /= (i - n + 1);
        }
        return path;
    }
    int uniquePaths(int m, int n) {
        return numberOfPaths(m,n);
    }
};
// @lc code=end

