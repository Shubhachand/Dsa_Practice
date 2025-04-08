class Solution {
public:
    bool canPartition(vector<int>& nums) {
          int total = 0;
    for (int num : nums) total += num;

    // If total sum is odd, we can't split it into equal halves
    if (total % 2 != 0) return false;

    int target = total / 2;
    vector<bool> dp(target + 1, false);
    dp[0] = true; // Zero sum is always possible

    for (int num : nums) {
        for (int i = target; i >= num; --i) {
            dp[i] = dp[i] || dp[i - num];
        }
    }

    return dp[target];
    }
};