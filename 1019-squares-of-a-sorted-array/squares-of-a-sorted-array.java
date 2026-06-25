class Solution {
    public int[] sortedSquares(int[] nums) {
        int left = 0;
        int right = nums.length-1 ;
        int idx = nums.length -1;
        int[] res = new int[nums.length];

        while(left<=right){
            if(Math.abs(nums[left])<Math.abs(nums[right])){
                res[idx] = nums[right] * nums[right];
                right--;
            }else{
                res[idx] = nums[left] *nums[left];
                left++;
            }
            idx--;
        }
        return res;
    }
}