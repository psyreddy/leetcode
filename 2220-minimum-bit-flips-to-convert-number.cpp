class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
    }
};

// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/solutions/4184461/cpp-beats-100-o-1-tc-o-1-sc-thorough-explanation/