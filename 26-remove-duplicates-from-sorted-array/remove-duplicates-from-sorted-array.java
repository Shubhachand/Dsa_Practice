class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 0;
        int j = i+1;
        int size = nums.length;
        while(j<size){
            if(nums[j]!=nums[i]){
                    i++;
                nums[i] = nums[j];

            }
            j++;
        }
        return i+1;
    }
}