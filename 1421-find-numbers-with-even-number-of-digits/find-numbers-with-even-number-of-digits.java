class Solution {

    int countDigit(int num){
        int c = 0;
        
        while(num!=0){
            c++;
            num=num/10;
            
        }
        return c;
    }
    public int findNumbers(int[] nums) {
        int cnt = 0;
        for(int i = 0;i<nums.length;i++){
            if(countDigit(nums[i])%2==0){
                    cnt++;
            }
        }
        return cnt;
    }
}