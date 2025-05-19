class Solution {
public:
    string triangleType(vector<int>& nums) {
        if (nums.size() != 3)
            return "none"; // guard against bad input

        sort(nums.begin(), nums.end()); // ascending: a ≤ b ≤ c
        int a = nums[0], b = nums[1], c = nums[2];

        if (a + b <= c)
            return "none"; // not a valid triangle

        if (a == c)
            return "equilateral";
        if (a == b || b == c)
            return "isosceles";
        return "scalene";
    }
};
