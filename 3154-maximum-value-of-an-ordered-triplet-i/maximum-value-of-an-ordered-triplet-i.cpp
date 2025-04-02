class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n = nums.size();
        long long  maxi = INT_MIN;
        for(int i = 0 ; i < n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    long long  ans = (long long)(nums[i] - nums[j])* nums[k];
                    maxi = max(maxi,ans);
                }
            }
        }
      if( maxi>0){
        return maxi;
      }else{
        return 0;
      }
    }
};