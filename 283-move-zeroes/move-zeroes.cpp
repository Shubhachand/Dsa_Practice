class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0; 

        
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Step 2: Fill the rest with zeros
        for (int i = j; i < n; i++) {
            nums[i] = 0;
        }
    }
};
