class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumpLength =0;
        int n = nums.size();
        

        for(int i = 0;i<n;i++){
            if(jumpLength<i){
                return false;
            }
            jumpLength = max(jumpLength,nums[i] + i);
        }
        return true;
    }
};