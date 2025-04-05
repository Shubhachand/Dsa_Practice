class Solution {
public:
 int total = 0;

    void dfs(vector<int>& nums, int index, int currXor) {
        if (index == nums.size()) {
            total += currXor;
            return;
        }

        // Include nums[index]
        dfs(nums, index + 1, currXor ^ nums[index]);

        // Exclude nums[index]
        dfs(nums, index + 1, currXor);
    }
    int subsetXORSum(vector<int>& nums) {
         dfs(nums, 0, 0);
        return total;
    }
};