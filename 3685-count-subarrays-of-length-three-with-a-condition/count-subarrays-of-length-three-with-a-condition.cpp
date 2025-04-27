class Solution {
public:
    int countSubarrays(vector<int>& nums) {
     int s = 0;
     int e = s+2;
     int c = 0;
     while(e<nums.size()){
      if(  nums[s]+nums[e] == nums[s+1]/2.0){
        c++;
        
      }
        s++;
        e++;
     }   
     return c;
    }
};