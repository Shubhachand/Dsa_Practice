class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long maxLeft = nums[0]; // Tracks max nums[i] seen so far
        long long bestDiff = LLONG_MIN; // Best (nums[i] - nums[j])
        long long maxTripletValue = 0; 

        for (int j = 1; j < n - 1; j++) {
            bestDiff = max(bestDiff, maxLeft - (long long)nums[j]); 
            maxTripletValue = max(maxTripletValue, bestDiff * (long long)nums[j + 1]); 
            maxLeft = max(maxLeft, (long long)nums[j]);
        }
        
        return maxTripletValue;
    }
};
