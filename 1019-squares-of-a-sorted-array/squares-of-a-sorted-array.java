class Solution {
    public int[] sortedSquares(int[] nums) {
        for(int i = 0;i<nums.length;i++){
            nums[i] = nums[i]*nums[i];

        }
        //sort
        Arrays.sort(nums);

        return nums;
        
    }
}