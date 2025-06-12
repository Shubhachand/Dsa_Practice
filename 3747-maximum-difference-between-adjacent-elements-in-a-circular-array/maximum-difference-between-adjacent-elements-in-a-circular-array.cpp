class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {    
       int  last_max = abs(nums[nums.size()-1] - nums[0]);
       int maxi;
        for(int i = 0 ;i < nums.size()-1;i++){
             maxi = max(maxi,abs(nums[i] - nums[i+1]));
        }
        if(maxi<last_max){
            return last_max;
        }else{
            return maxi;
        }
    }
};