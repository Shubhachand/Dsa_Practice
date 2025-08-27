class Solution {
public:
    void rotate(vector<int>& nums, int d) {
        int n = nums.size();
        d = d % n;   // in case d > n

        vector<int> temp(d);

        // Step 1: Copy last d elements into temp
        for (int i = 0; i < d; i++) {
            temp[i] = nums[n - d + i];
        }

        // Step 2: Shift the first n-d elements to the right
        for (int i = n - d - 1; i >= 0; i--) {
            nums[i + d] = nums[i];
        }

        // Step 3: Copy temp back into the first d positions
        for (int i = 0; i < d; i++) {
            nums[i] = temp[i];
        }
    }
};
